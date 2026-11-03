#pragma once

using namespace System;

void Configura_Consola()
{
    Console::SetWindowSize(120, 30);
    Console::CursorVisible = false;
    SetConsoleOutputCP(65001);
    system("color F0");

    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);
}

void cursor(int x, int y)
{
    Console::SetCursorPosition(x, y);
}

void colorRGB(int r, int g, int b)
{
    printf("\x1b[38;2;%d;%d;%dm", r, g, b);
}
void colorFondoRGB(int r, int g, int b)
{
    printf("\x1b[48;2;%d;%d;%dm", r, g, b);
}

void color(int c)
{
    switch (c)
    {
    case 0:  colorRGB(0x00, 0x00, 0x00); break; // #000000 negro
    case 12: colorRGB(0xff, 0xff, 0xff); break; // #ffffff blanco
    case 14: colorRGB(0x50, 0x50, 0x50); break; // #505050 gris oscuro
    case 11: colorRGB(0x70, 0x70, 0x70); break; // #707070 gris medio
    case 10: colorRGB(0xa0, 0xa0, 0xa0); break; // #a0a0a0 gris claro
    case 7:  colorRGB(0x35, 0x38, 0x39); break; // #353839 gris muy oscuro
    case 13: colorRGB(0x69, 0x50, 0x3c); break; // #69503c puerta marron
    case 5:  colorRGB(0x72, 0xff, 0x1b); break; // #72ff1b cesped
    case 3:  colorRGB(0x35, 0xd7, 0xff); break; // #35d7ff cielo
    case 2:  colorRGB(0xdf, 0xff, 0x00); break; // #DFFF00 (manchas)
    case 4:  colorRGB(0xff, 0x00, 0x00); break; // #FF0000 (rojo)
    case 6:  colorRGB(0xbf, 0x00, 0xff); break; // #BF00FF (manchas)
    case 1:  colorFondoRGB(0x39, 0xff, 0x14); break; // #39FF14 (fondo)
    case 99: colorFondoRGB(0x00, 0xff, 0xff); break; // #00FFFF (fondo)

    case 15: colorRGB(0x7a, 0x51, 0x35); break; // #7a5135 sombras perro
    case 16: colorRGB(0x63, 0x35, 0x25); break; // #633525 color perro
    case 17: colorRGB(0xff, 0xa0, 0xa0); break; // #ffa0a0 nariz gato
    case 18: colorRGB(0x91, 0x91, 0x91); break; // #919191 color gato
    case 19: colorRGB(0x73, 0x73, 0x73); break; // #737373 sombras gato
    case 20: colorRGB(0x5f, 0x5f, 0x5f); break; // #5f5f5f manchas gato
    case 21: colorRGB(0xf3, 0xff, 0x00); break; // #f3ff00 color pato
    case 22: colorRGB(0xe7, 0xf2, 0x00); break; // #e7f200 alas pato
    case 23: colorRGB(0xff, 0xbd, 0x28); break; // #ffbd28 nariz pato
    case 24: colorRGB(0x7a, 0x8b, 0x9e); break; // #7a8b9e nubes nivel 2
    case 25: colorRGB(0x4a, 0x55, 0x62); break; // #4a5562 cielo nivel 2
    case 26: colorRGB(0x1a, 0x3b, 0x22); break; // #1a3b22 cesped nivel 2
    case 27: colorRGB(0x2a, 0x24, 0x24); break; // #2a2424 humo nivel 3
    case 28: colorRGB(0x3e, 0x0a, 0x0a); break; // #3e0a0a cielo nivel 3
    case 29: colorRGB(0xff, 0x57, 0x22); break; // #ff5722 lava nivel 3
    case 30: colorRGB(0xb7, 0x1c, 0x1c); break; // #b71c1c rojo extra nivel 3

    case 31: colorRGB(0xf7, 0xd3, 0xc7); break; // #f7d3c7 brazo adelante (Carl)
    case 32: colorRGB(0xd3, 0xa9, 0x9b); break; // #d3a99b cara y brazo atras (Carl)
    case 33: colorRGB(0x5f, 0xa6, 0xda); break; // #5fa6da camiseta (Carl)
    case 34: colorRGB(0x00, 0x41, 0xb4); break; // #0041b4 pantalon (Carl)
    case 35: colorRGB(0x5c, 0x56, 0x00); break; // #5c5600 arco (Carl)

        // ---- Colores pizarra/aula ----
    case 36: colorRGB(0xcf, 0xcf, 0xcf); break; // #cfcfcf blanco introduccion
    case 37: colorRGB(0x3e, 0x7c, 0x17); break; // #3e7c17 pizarra
    case 38: colorRGB(0x93, 0x81, 0x62); break; // #938162 mesa
    case 39: colorRGB(0x50, 0x50, 0x50); break; // #505050 texto
    case 40: colorRGB(0x70, 0x70, 0x70); break; // #707070 grafito
    case 41: colorRGB(0xea, 0xff, 0x1b); break; // #eaff1b lapiz
    case 42: colorRGB(0xeb, 0xcf, 0xa1); break; // #ebcfa1 mano/cara/antebrazo
    case 43: colorRGB(0xd6, 0xbe, 0x96); break; // #d6be96 dedo/mano
    case 44: colorRGB(0x31, 0x7e, 0xb6); break; // #317eb6 torso
    case 45: colorRGB(0x43, 0x86, 0xb6); break; // #4386b6 brazo
    case 46: colorRGB(0xbc, 0xa6, 0x82); break; // #bca682 sombra cara
    case 47: colorRGB(0xfc, 0x61, 0x87); break; // #fc6187 labio
    case 48: colorRGB(0x69, 0x50, 0x3c); break; // #69503c pata mesa
    case 50: colorRGB(0x43, 0x86, 0xb6); break; // #4386b6 ante brazo introduccion 
    case 49: colorRGB(0x5f, 0xa6, 0xda); break; // #5fa6da ante brazo introduccion parte clara
    case 60: colorRGB(0xc2, 0xc2, 0xc2); break; // #c2c2c2 cuerda arco


        // Enemigo nivel 1
    case 51: colorRGB(0x00, 0xff, 0xff); break; // cian (#00ffff)31
    case 52: colorRGB(0xbf, 0x00, 0xff); break; // manchas enemigo (#bf00ff)163

        // Eneemigo nivel 2
    case 53: colorRGB(0x7d, 0x87, 0x03); break; // manchas enemigo 112
    case 54: colorRGB(0x3d, 0x6e, 0x33); break; // colorenemigo 44

        // Eneemigo nivel 3
    case 55: colorRGB(0xFF, 0x00, 0x00); break; // colores enemigo 


    }
}
void SetColorPorValor(int valor) {
    if (valor == 59) color(3);      // cielo
    else if (valor == 36) color(7); // gris muy oscuro
    else if (valor == 109) color(11);   //gris medio
    else if (valor == 182) color(10);   //gris claro
    else if (valor == 73) color(14);    // gris oscuro
    else if (valor == 104) color(13); // puerta
    else if (valor == 124) color(5);  // cesped
    else if (valor == 255) color(12); //blanco
    else if (valor == 0) color(0); // negro

    else if (valor == 100) color(15); // sombras perro
    else if (valor == 104) color(16); // color perro
    else if (valor == 246) color(17); // nariz gato
    else if (valor == 146) color(18); // color gato
    else if (valor == 109) color(20); // manchas gato
    else if (valor == 252) color(21); // color pato
    else if (valor == 251) color(22); // alas pato
    else if (valor == 244) color(23); // nariz pato
    else if (valor == 114) color(24); // nubes nivel 2
    else if (valor == 73) color(25); // cielo nivel 2
    else if (valor == 4) color(26); // cesped nivel 2

    else if (valor == 36) color(27); // humo nivel 3
    else if (valor == 32) color(28); // cielo nivel 3
    else if (valor == 232) color(29); // lava nivel 3
    else if (valor == 160) color(30); // rojo extra nivel 3

    else if (valor == 250) color(31); // brazo adelante (Carl)


    else if (valor == 219) color(36); // pared introduccion
    else if (valor == 44) color(37); // pizarra
    else if (valor == 145) color(38); // mesa
    else if (valor == 73) color(39); // texto
    else if (valor == 109) color(40); // grafito
    else if (valor == 252) color(41); // lapiz
    else if (valor == 250) color(42); // mano/cara/antebrazo
    else if (valor == 214) color(43); // dedo/mano
    else if (valor == 46) color(44); // torso
    else if (valor == 97) color(45); // brazo
    else if (valor == 182) color(46); // sombra cara
    else if (valor == 238) color(47); // labio
    else if (valor == 104) color(48); // pata mesa
    else if (valor == 82) color(50); // brazo parte oscura
    else if (valor == 87) color(49); // brazo parte clara
    else if (valor == 31) color(51); // cian nivel 1
    else if (valor == 163) color(52); // manchas enemigo (#bf00ff)163 nivel 1
    else if (valor == 112) color(53); // manchas enemigo nivel 2
    else if (valor == 44) color(54); // color enemigo nivel 2
    else if (valor == 224) color(55); // color enemigo nivel 3
    // hay otro color q es el 82 y es la parte del brazo pero mas oscura, no es visible
    // hay otro color q es el 87 y es la parte del brazo mas clara, no es visible
}