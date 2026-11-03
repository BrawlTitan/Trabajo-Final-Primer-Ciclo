# 🏰 Carl y los Monstruos Matemáticos
### 🇪🇸 Español | 🇬🇧 [English below](#-english)

Juego de consola en C++ donde Carl se queda dormido en clase de mates y debe
defender su castillo resolviendo operaciones antes de que los monstruos lleguen.

> 🎓 **Trabajo final del curso *Introducción a los Algoritmos***,
> Universidad Peruana de Ciencias Aplicadas (UPC), primer ciclo.

---

## 📸 Capturas

*Próximamente.*

## 🎮 Cómo se juega
- Hay **3 carriles**. Cambia de carril con **W / S**.
- Cada monstruo muestra una operación. Escribe el resultado y presiona **ENTER** para disparar (solo acierta si estás en su mismo carril).
- Si fallas o el monstruo llega al castillo, pierdes una vida.
- Derrota a todos los enemigos antes de que se acabe el tiempo para avanzar de nivel.
- Al eliminar el 25% de los enemigos del nivel, puedes activar la habilidad del aliado con **E** y usarla con **ESPACIO**.

## 🧮 Niveles
| Nivel | Operaciones | Enemigo |
|-------|-------------|---------|
| 1 | Sumas | Monstruo cian |
| 2 | Restas | Monstruo verde |
| 3 | Raíces cuadradas y multiplicaciones | Monstruo rojo |

## 🐾 Aliados y habilidades
- 🦆 **Pato:** disparo gratis.
- 🐶 **Perro:** convierte restas en sumas.
- 🐱 **Gato:** convierte raíces y multiplicaciones en restas.

## ✨ Características
- Introducción narrativa y menús ilustrados con arte ASCII a color
- Tabla de puntajes (top 10)
- Configuración de tiempo, enemigos por nivel y vidas
- Pantallas de instrucciones y créditos

## 🥚 Easter egg
<details>
<summary>Haz clic para revelar (¡spoiler!)</summary>

En el **segundo menú** (flecha derecha ➡️), presiona la tecla **Z**.
La "Z" hace referencia a que Carl se quedó dormido, como se ve en la historia
de la introducción (💤 Z z Z). ¿Y qué encontrarás? La pantalla de **configuración**
del juego.
</details>

## 🛠️ Tecnologías
- C++ / C++/CLI (aplicación de consola en Visual Studio, .NET Framework)
- Secuencias de escape ANSI (colores RGB) y API de consola de Windows

## 🤖 Uso de inteligencia artificial
Se utilizó IA como apoyo para definir los **colores** y los **caracteres ASCII**
con los que se dibujan los escenarios, personajes y monstruos. La lógica del
juego y su diseño fueron desarrollados por el equipo.

## ▶️ Cómo ejecutarlo
```bash
git clone https://github.com/<BrawlTitan>/Trabajo-Final-Primer-Ciclo.git
```
1. Abre la solución (`.sln`) en Visual Studio.
2. Compila y ejecuta (**Ctrl + F5**).

> Requiere Windows. La consola se ajusta automáticamente a 120×30.

## 🚀 Mejoras que nos gustaría hacer
- Guardar la tabla de puntajes en un archivo para que no se pierda al cerrar el juego.
- Que las habilidades de los aliados funcionen en los tres niveles.
- Agregar más niveles, más tipos de operaciones y distintas dificultades.
- Sonidos y música.
- Más animaciones para Carl, los aliados y los monstruos.
- Más Easter eggs 🥚.

## 👥 Equipo
| Nombre | GitHub | Aporte |
|--------|--------|--------|
| Mateo Alvarado Medina | [@BrawlTitan](https://github.com/BrawlTitan) | Desarrollo de software, análisis de calidad y diseño de mecánicas |
| Robben Eli Cercado Asencios | [@robbeneca-spec](https://github.com/robbeneca-spec) | Desarrollo de software, análisis de calidad, diseño de mecánicas y pruebas |
| Rodrigo Alonso Serrano Cruzado | — | Lógica de interfaz visual y pruebas |

---

# 🇬🇧 English

# 🏰 Carl and the Math Monsters

A C++ console game where Carl falls asleep in math class and must defend his
castle by solving operations before the monsters reach him.

> 🎓 **Final project for the course *Introduction to Algorithms***,
> Universidad Peruana de Ciencias Aplicadas (UPC), first semester.

## 📸 Screenshots
*Coming soon.*

## 🎮 How to play
- There are **3 lanes**. Switch lanes with **W / S**.
- Each monster shows an operation. Type the result and press **ENTER** to shoot (it only hits if you are in the monster's lane).
- If you answer wrong or a monster reaches the castle, you lose a life.
- Defeat all enemies before time runs out to advance.
- After defeating 25% of a level's enemies, you can activate your ally's ability with **E** and use it with **SPACE**.

## 🧮 Levels
| Level | Operations | Enemy |
|-------|------------|-------|
| 1 | Addition | Cyan monster |
| 2 | Subtraction | Green monster |
| 3 | Square roots and multiplication | Red monster |

## 🐾 Allies and abilities
- 🦆 **Duck:** free shot.
- 🐶 **Dog:** turns subtractions into additions.
- 🐱 **Cat:** turns roots and multiplications into subtractions.

## ✨ Features
- Narrative intro and illustrated menus with colored ASCII art
- High score table (top 10)
- Configurable time, enemies per level and lives
- Instructions and credits screens

## 🥚 Easter egg
<details>
<summary>Click to reveal (spoiler!)</summary>

In the **second menu** (right arrow ➡️), press the **Z** key.
The "Z" refers to Carl falling asleep, as shown in the intro story (💤 Z z Z).
What will you find? The game's **settings** screen.
</details>

## 🛠️ Tech
- C++ / C++/CLI (Visual Studio console app, .NET Framework)
- ANSI escape sequences (RGB colors) and the Windows console API

## 🤖 AI usage
AI was used as a helper to choose the **colors** and **ASCII characters** used
to draw the scenes, characters and monsters. The game logic and design were
developed by the team.

## ▶️ How to run
```bash
git clone https://github.com/<BrawlTitan>/Trabajo-Final-Primer-Ciclo.git
```
1. Open the solution (`.sln`) in Visual Studio.
2. Build and run (**Ctrl + F5**).

> Windows only. The console is automatically resized to 120×30.

## 🚀 Improvements we'd like to make
- Save the high score table to a file so it persists between sessions.
- Make ally abilities work in all three levels.
- Add more levels, more operation types and difficulty modes.
- Sound effects and music.
- More animations for Carl, allies and monsters.
- More Easter eggs 🥚.

## 👥 Team
| Name | GitHub | Role |
|------|--------|------|
| Mateo Alvarado Medina | [@BrawlTitan](https://github.com/BrawlTitan) | Software development, QA and mechanics design |
| Robben Eli Cercado Asencios | [@robbeneca-spec](https://github.com/robbeneca-spec) | Software development, QA, mechanics design and testing |
| Rodrigo Alonso Serrano Cruzado | — | Visual interface logic and testing |
