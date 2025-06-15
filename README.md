# <h1 align="center">Ucode_Libmx Repository</h1>

<p align="center">
  <a href="https://campus.kpi.kharkov.ua/ua/">
    <img src="imgs/Cumpus.png" alt="Innovation Campus" width="300" height="300">
  </a>
  <br>
  <h2 align="center"><strong>Innovation Campus | Libmx | 2024</strong></h2>
</p>

<details open>
  <summary>Українська 🇺🇦</summary>

<span style="margin-top: 5px;"></span>

> ⚠️ **УВАГА:**
>
> Цей репозиторій містить власну бібліотеку C, розроблену в рамках Track C в Innovation Campus.  
> Код перевірений колегами та підтверджений щодо якості, безпеки пам'яті та дотримання строгих стандартів кодування.  
>
> **Без зовнішніх залежностей** — тільки чистий C та рішучість!
>
> Це проєкт з відкритим кодом, який поширюється виключно для навчальних та наукових цілей.

---

### Вступ

Ласкаво просимо до репозиторію **Ucode_Libmx**! Цей проєкт є частиною Track C, де завданням є створення власної бібліотеки функцій. Розробляючи цю бібліотеку, ви спростите свої завдання з програмування та заощадите час у майбутньому. Створення різних функцій поглибить ваше розуміння того, як вони працюють, їх застосування та алгоритми, які за ними стоять.

Ця бібліотека призначена для використання в наступних завданнях Track C, і ви маєте можливість розширити її більш корисними функціями, роблячи її унікальною.

---

### Головна ідея

Основна ідея цього завдання — залишатися DRY (Don't Repeat Yourself — Не повторюйся). Створюючи функції, що можна повторно використовувати, ви можете оптимізувати процес кодування та зосередитися на вирішенні більш складних проблем.

### Основне питання

Як я можу ефективно повторно використовувати свій код, модулі та програми?

### Завдання

Створити власну бібліотеку функцій на C. Ця бібліотека повинна включати різноманітні утиліти, функції для роботи з рядками, інструменти керування пам'яттю тощо. Метою є створення комплексної та ефективної бібліотеки, яку ви можете використовувати та розширювати в майбутніх проєктах.

---

### Встановлення та використання

```bash
# Клонувати репозиторій
git clone https://github.com/ArchieDev242/Ucode_Libmx.git

# Перейти до директорії проєкту
cd Ucode_Libmx

# Скомпілювати бібліотеку
make all

# Зв'язати з вашим проєктом
gcc your_program.c -L. -lmx -o your_program
```

Включіть заголовочний файл у ваші C-програми:

```c
#include "inc/libmx.h"
```

---

### Ключові особливості

- **Utils Pack**: Функції для математичних операцій, алгоритмів сортування тощо
- **String Pack**: Комплексні утиліти для роботи з рядками
- **Memory Pack**: Ефективні функції управління пам'яттю
- **List Pack**: Реалізація зв'язаного списку та відповідні операції

---

### Групи функцій

#### Utils Pack
- Реалізація бінарного пошуку
- Алгоритм сортування бульбашкою
- Реалізація швидкого сортування
- Математичні функції (степінь, квадратний корінь)
- Перетворення цілого числа в рядок

#### String Pack
- Маніпуляції з рядками (копіювання, конкатенація, дублювання)
- Пошук та порівняння рядків
- Пошук та заміна шаблонів
- Розділення та обрізка рядків

#### Memory Pack
- Виділення та перевиділення пам'яті
- Копіювання та переміщення пам'яті
- Порівняння та пошук у пам'яті

#### List Pack
- Створення та маніпуляція зв'язаними списками
- Операції з вузлами (додавання в початок/кінець, видалення)
- Обхід списку та обчислення розміру

---

### Приклади

#### Маніпуляції з рядками

```c
// Об'єднання двох рядків
char *s1 = "Привіт, ";
char *s2 = "світе!";
char *result = mx_strjoin(s1, s2);
mx_printstr(result); // Виводить: Привіт, світе!
mx_strdel(&result);

// Розділення рядка на масив за роздільником
char *str = "Швидка коричнева лисиця";
char **arr = mx_strsplit(str, ' ');
mx_print_strarr(arr, " | "); // Виводить: Швидка | коричнева | лисиця
mx_del_strarr(&arr);
```

#### Операції з пам'яттю

```c
// Виділення та ініціалізація пам'яті
char *mem = mx_strnew(10);
mx_memset(mem, '*', 10);
mx_printstr(mem); // Виводить: **********
mx_strdel(&mem);
```

---

### <h1 align = "center"> 🔧 Використані технології 🛠️ </h1>

<div align="center">
 
  <table>
    <tr>
      <td align="center"><h4>🧰 Мови</h4></td>
      <td align="center"><h4>🔨 Інструменти розробки</h4></td>
      <td align="center"><h4>💻 Платформи</h4></td>
    </tr>
    <tr>
      <td align="center">
        <a href="https://en.wikipedia.org/wiki/C_(programming_language)">
          <img src="https://skillicons.dev/icons?i=c" alt="C" width="50" height="50"><br>
          <b>C</b>
        </a>
      </td>
      <td align="center">
        <a href="https://git-scm.com/">
          <img src="https://skillicons.dev/icons?i=git" alt="Git" width="50" height="50"><br>
          <b>Git</b>
        </a>
      </td>
      <td align="center">
        <a href="https://www.linux.org/">
          <img src="https://skillicons.dev/icons?i=linux" alt="Linux" width="50" height="50"><br>
          <b>Linux</b>
        </a>
      </td>
    </tr>
    <tr>
      <td align="center">
        <a href="https://www.gnu.org/software/bash/">
          <img src="https://skillicons.dev/icons?i=bash" alt="Bash" width="50" height="50"><br>
          <b>Bash</b>
        </a>
      </td>
      <td align="center">
        <div style="display: flex; justify-content: center; gap: 10px;">
          <a href="https://www.vim.org/">
            <img src="https://skillicons.dev/icons?i=vim" alt="Vim" width="50" height="50"><br>
            <b>Vim</b>
          </a>
          <a href="https://neovim.io/">
            <img src="https://skillicons.dev/icons?i=neovim" alt="NeoVim" width="50" height="50"><br>
            <b>NeoVim</b>
          </a>
        </div>
      </td>
      <td align="center">
        <a href="https://www.microsoft.com/windows/">
          <img src="https://skillicons.dev/icons?i=windows" alt="Windows" width="50" height="50"><br>
          <b>Windows</b>
        </a>
      </td>
    </tr>
    <tr>
      <td align="center">
        <a href="https://www.markdownguide.org/">
          <img src="https://skillicons.dev/icons?i=md" alt="Markdown" width="50" height="50"><br>
          <b>Markdown</b>
        </a>
      </td>
      <td align="center">
        <a href="https://code.visualstudio.com/">
          <img src="https://skillicons.dev/icons?i=vscode" alt="VS Code" width="50" height="50"><br>
          <b>VS Code</b>
        </a>
      </td>
      <td align="center">
        <a href="https://www.apple.com/macos/">
          <img src="https://skillicons.dev/icons?i=apple" alt="macOS" width="50" height="50"><br>
          <b>macOS</b>
        </a>
      </td>
    </tr>
    <tr>
      <td></td>
      <td align="center">
        <div style="display: flex; justify-content: center; gap: 10px;">
          <a href="https://github.com/">
            <img src="https://skillicons.dev/icons?i=github" alt="GitHub" width="50" height="50"><br>
            <b>GitHub</b>
          </a>
          <a href="https://about.gitlab.com/">
            <img src="https://skillicons.dev/icons?i=gitlab" alt="GitLab" width="50" height="50"><br>
            <b>GitLab</b>
          </a>
        </div>
      </td>
      <td></td>
    </tr>
  </table>
  
  <div>
    <p><i>🚀 Ця бібліотека була створена з використанням цих потужних технологій 🚀</i></p>
  </div>
</div>

---

## <h1 align = "center"> ✨ ОСОБЛИВА ПОДЯКА ✨ </h1>

<div align="center">
  <img src="https://img.shields.io/badge/Дякуємо-Corkerro-purple?style=for-the-badge&logo=github" alt="Дякуємо Corkerro">
  <br><br>
  
  <h3>🌟 Сердечна вдячність 🌟</h3>
  
  <p>
    Особлива та глибока подяка 
    <a href="https://github.com/Corkerro"><b>Corkerro</b></a> 
    за неоціненний репозиторій 
    <a href="https://github.com/Corkerro/libmx-checker"><b>libmx-checker</b></a>.
  </p>
  
  <img src="https://img.shields.io/badge/Інструмент-libmx--checker-blue?style=flat-square" alt="libmx-checker">
</div>


<br>

### 📌 Що таке libmx-checker?

Це спеціалізований інструмент тестування, призначений для перевірки бібліотек Libmx на:
- Помилки та баги
- Витоки пам'яті
- Проблеми з функціональністю
- Відповідність стандартам коду

Він забезпечує комплексне тестування всіх функцій бібліотеки та допомагає виявити проблемні області, які потребують покращення.

<div align="center">
  <table>
    <tr>
      <td align="center">
        <h3>🧪</h3>
        <b>Тестування</b>
      </td>
      <td align="center">
        <h3>🐛</h3>
        <b>Налагодження</b>
      </td>
      <td align="center">
        <h3>🚀</h3>
        <b>Продуктивність</b>
      </td>
    </tr>
  </table>
</div>

> Без таких фантастичних внесків від спільноти проєкти на кшталт цього були б значно складнішими!

<div align="center">
  <br>
  <a href="https://github.com/Corkerro/libmx-checker">
    <img src="https://img.shields.io/badge/Відвідати_репозиторій-libmx--checker-6a0dad?style=for-the-badge&logo=github" alt="Відвідати репозиторій libmx-checker">
  </a>
  <br><br>
</div>

---

### Структура проєкту

```
libmx/
├── inc/
│   └── libmx.h       # Головний заголовочний файл
├── src/              # Вихідні файли для всіх функцій
│   ├── utils/        # Утилітарні функції
│   ├── string/       # Функції для роботи з рядками
│   ├── memory/       # Функції керування пам'яттю
│   └── list/         # Функції для роботи зі списками
├── make allfile          # Інструкції для компіляції
└── README.md         # Документація
```

---

### Завдання

| Назва         | Опис                                                                       | Статус      |
|--------------|-----------------------------------------------------------------------------|:-----------:|
| Utils Pack   | Базові утилітарні функції для спрощення загальних завдань.               | Завершено   |
| String Pack  | Функції для маніпуляції та обробки рядків.                               | Завершено   |
| Memory Pack  | Функції управління пам'яттю для ефективної обробки ресурсів.             | Завершено   |
| List Pack    | Функції для роботи зі зв'язаними списками та структурами даних.          | Завершено   |

---

## <h1 align = "center">🌟 Мої висновки 🌟</h1>

<div align="center">
  <img src="https://img.shields.io/badge/Досвід-Трансформаційний-brightgreen?style=for-the-badge" alt="Досвід">
</div>

### 💡 Технічне зростання

Робота над проєктом Libmx трансформувала мій підхід до програмування на C. Ця подорож принесла кілька переваг:

- **Опанування основних концепцій C:**
  - Отримав глибоке розуміння вказівників, розподілу пам'яті та маніпуляцій з адресами
  - Навчився запобігати витокам пам'яті через ретельне управління ресурсами
  - Реалізував та оптимізував класичні алгоритми (QuickSort, BubbleSort, Binary Search)

- **Навички організації коду:**
  - Структурував функції в логічні модулі (utils, string, memory, list)
  - Розробив узгоджені шаблони API для груп функцій
  - Документував код для максимальної ясності та зручності використання

- **Оптимізація продуктивності:**
  - Написав ефективні, кеш-дружні операції з пам'яттю
  - Мінімізував непотрібні виділення та копіювання пам'яті
  - Аналізував алгоритмічну складність для вибору оптимальних рішень

### 🤝 Співпраця і процес

Цей проєкт не лише про код — він трансформував мій спосіб роботи з іншими:

- **Навчання з колегами:**
  - Удосконалив рішення через перевірку коду та спільне відлагодження
  - Ділився знаннями, пояснюючи вибір реалізації
  - Документував граничні випадки, виявлені під час групових сесій тестування

- **Дисципліна розробки:**
  - Прийняв обмеження для написання чистішого, швидшого, більш підтримуваного коду
  - Впровадив систематичні підходи до тестування для кожної функції
  - Розробив методології усунення проблем для комплексних проблем з пам'яттю

### 🚀 Довгостроковий вплив

Навички, розвинені під час цього проєкту, виходять далеко за межі самого коду:

- **Передавані знання:**
  - Вивчені шаблони застосовуються до системного програмування на будь-якій мові
  - Створено повторно використовувані компоненти, які прискорять майбутні проєкти
  - Розвинуто інтуїцію щодо продуктивності низького рівня, яка застосовна до будь-якого програмного забезпечення

- **Спосіб мислення для вирішення проблем:**
  - Навчився розбивати складні операції на логічні, керовані кроки
  - Розвинув стійкість при зіткненні зі складними помилками або проблемами дизайну
  - Набув впевненості у вирішенні нечітких або неоднозначних вимог

---

Я закликаю всіх взяти на себе цей виклик і дослідити нескінченні можливості створення власної бібліотеки. Досвід навчання значно перевершує виклики, а навички, які ви отримаєте, фундаментально змінять ваш підхід до розробки програмного забезпечення.

<p align="center"><i>Давайте програмувати наш шлях до успіху!</i> 💻</p>
</details>

<details>
  <summary>English 🇬🇧</summary>

<span style="margin-top: 5px;"></span>

> ⚠️ **CAUTION:**
>
> This repository contains a custom C library developed as part of Track C at Innovation Campus.  
> Peer-reviewed and validated for code quality, memory safety, and adherence to strict coding standards.  
>
> **No external dependencies** — just pure C and determination!
>
> This is an open-source project shared exclusively for educational and scientific purposes.

---

### Introduction

Welcome to the **Ucode_Libmx** repository! This project is part of Track C, where the challenge is to create your own library of functions. By developing this library, you'll simplify your programming tasks and save time in future development. Creating various functions will deepen your understanding of how they work, their applications, and the algorithms behind them.

This library is designed to be used in subsequent Track C challenges, and you have the opportunity to expand it with more useful functions, making it unique.

---

### The Big Idea

The core idea behind this challenge is to stay DRY — Don't Repeat Yourself. By creating reusable functions, you can streamline your coding process and focus on solving more complex problems.

### Essential Question

How can I reuse my code, modules, and programs effectively?

### The Challenge

Create your own library of functions in C. This library should include a variety of utilities, string manipulation functions, memory management tools, and more. The goal is to build a comprehensive and efficient library that you can use and expand upon in future projects.

---

### Installation and Usage

```bash
# Clone the repository
git clone https://github.com/ArchieDev242/Ucode_Libmx.git

# Navigate to the project directory
cd Ucode_Libmx

# Compile the library
make all

# Link with your project
gcc your_program.c -L. -lmx -o your_program
```

Include the header file in your C programs:

```c
#include "inc/libmx.h"
```

---

### Key Features

- **Utils Pack**: Functions for mathematical operations, sorting algorithms, and more
- **String Pack**: Comprehensive string manipulation utilities
- **Memory Pack**: Efficient memory management functions
- **List Pack**: Linked list implementation and related operations

---

### Function Groups

#### Utils Pack
- Binary search implementation
- Bubble sort algorithm
- Quick sort implementation
- Mathematical functions (power, square root)
- Integer to string conversion

#### String Pack
- String manipulation (copy, concatenate, duplicate)
- String search and comparison
- Pattern matching and replacement
- String splitting and trimming

#### Memory Pack
- Memory allocation and reallocation
- Memory copy and move operations
- Memory comparison and search

#### List Pack
- Linked list creation and manipulation
- Node operations (push, pop, etc.)
- List traversal and size calculation

---

### Examples

#### String Manipulation

```c
// Join two strings
char *s1 = "Hello, ";
char *s2 = "world!";
char *result = mx_strjoin(s1, s2);
mx_printstr(result); // Outputs: Hello, world!
mx_strdel(&result);

// Split string into array by delimiter
char *str = "The quick brown fox";
char **arr = mx_strsplit(str, ' ');
mx_print_strarr(arr, " | "); // Outputs: The | quick | brown | fox
mx_del_strarr(&arr);
```

#### Memory Operations

```c
// Allocate and initialize memory
char *mem = mx_strnew(10);
mx_memset(mem, '*', 10);
mx_printstr(mem); // Outputs: **********
mx_strdel(&mem);
```

---

### <h1 align = "center"> 🔧 Technologies Used 🛠️ </h1>

<div align="center">
 
  <table>
    <tr>
      <td align="center"><h4>🧰 Languages</h4></td>
      <td align="center"><h4>🔨 Development Tools</h4></td>
      <td align="center"><h4>💻 Platforms</h4></td>
    </tr>
    <tr>
      <td align="center">
        <a href="https://en.wikipedia.org/wiki/C_(programming_language)">
          <img src="https://skillicons.dev/icons?i=c" alt="C" width="50" height="50"><br>
          <b>C</b>
        </a>
      </td>
      <td align="center">
        <a href="https://git-scm.com/">
          <img src="https://skillicons.dev/icons?i=git" alt="Git" width="50" height="50"><br>
          <b>Git</b>
        </a>
      </td>
      <td align="center">
        <a href="https://www.linux.org/">
          <img src="https://skillicons.dev/icons?i=linux" alt="Linux" width="50" height="50"><br>
          <b>Linux</b>
        </a>
      </td>
    </tr>
    <tr>
      <td align="center">
        <a href="https://www.gnu.org/software/bash/">
          <img src="https://skillicons.dev/icons?i=bash" alt="Bash" width="50" height="50"><br>
          <b>Bash</b>
        </a>
      </td>
      <td align="center">
        <div style="display: flex; justify-content: center; gap: 10px;">
          <a href="https://www.vim.org/">
            <img src="https://skillicons.dev/icons?i=vim" alt="Vim" width="50" height="50"><br>
            <b>Vim</b>
          </a>
          <a href="https://neovim.io/">
            <img src="https://skillicons.dev/icons?i=neovim" alt="NeoVim" width="50" height="50"><br>
            <b>NeoVim</b>
          </a>
        </div>
      </td>
      <td align="center">
        <a href="https://www.microsoft.com/windows/">
          <img src="https://skillicons.dev/icons?i=windows" alt="Windows" width="50" height="50"><br>
          <b>Windows</b>
        </a>
      </td>
    </tr>
    <tr>
      <td align="center">
        <a href="https://www.markdownguide.org/">
          <img src="https://skillicons.dev/icons?i=md" alt="Markdown" width="50" height="50"><br>
          <b>Markdown</b>
        </a>
      </td>
      <td align="center">
        <a href="https://code.visualstudio.com/">
          <img src="https://skillicons.dev/icons?i=vscode" alt="VS Code" width="50" height="50"><br>
          <b>VS Code</b>
        </a>
      </td>
      <td align="center">
        <a href="https://www.apple.com/macos/">
          <img src="https://skillicons.dev/icons?i=apple" alt="macOS" width="50" height="50"><br>
          <b>macOS</b>
        </a>
      </td>
    </tr>
    <tr>
      <td></td>
      <td align="center">
        <div style="display: flex; justify-content: center; gap: 10px;">
          <a href="https://github.com/">
            <img src="https://skillicons.dev/icons?i=github" alt="GitHub" width="50" height="50"><br>
            <b>GitHub</b>
          </a>
          <a href="https://about.gitlab.com/">
            <img src="https://skillicons.dev/icons?i=gitlab" alt="GitLab" width="50" height="50"><br>
            <b>GitLab</b>
          </a>
        </div>
      </td>
      <td></td>
    </tr>
  </table>
  
  <div>
    <p><i>🚀 This library was crafted with these powerful technologies 🚀</i></p>
  </div>
</div>

---

## <h1 align = "center"> ✨ SPECIAL THANKS ✨ </h1>

<div align="center">
  <img src="https://img.shields.io/badge/Thank_You-Corkerro-purple?style=for-the-badge&logo=github" alt="Thank You Corkerro">
  <br><br>
  
  <h3>🌟 Heartfelt Gratitude 🌟</h3>
  
  <p>
    A special and profound thanks to 
    <a href="https://github.com/Corkerro"><b>Corkerro</b></a> 
    for the invaluable 
    <a href="https://github.com/Corkerro/libmx-checker"><b>libmx-checker</b></a> 
    repository.
  </p>
  
  <img src="https://img.shields.io/badge/Tool-libmx--checker-blue?style=flat-square" alt="libmx-checker">
</div>


<br>

### 📌 What is libmx-checker?

This is a specialized testing tool designed to check Libmx libraries for:
- Errors and bugs
- Memory leaks
- Functionality issues
- Code standards compliance

It provides comprehensive testing of all library functions and helps identify problematic areas that need improvement.

<div align="center">
  <table>
    <tr>
      <td align="center">
        <h3>🧪</h3>
        <b>Testing</b>
      </td>
      <td align="center">
        <h3>🐛</h3>
        <b>Debugging</b>
      </td>
      <td align="center">
        <h3>🚀</h3>
        <b>Performance</b>
      </td>
    </tr>
  </table>
</div>

> Without such fantastic contributions from the community, projects like this would be significantly more challenging!

<div align="center">
  <br>
  <a href="https://github.com/Corkerro/libmx-checker">
    <img src="https://img.shields.io/badge/Visit_Repository-libmx--checker-6a0dad?style=for-the-badge&logo=github" alt="Visit libmx-checker Repository">
  </a>
  <br><br>
</div>

---

### Project Structure

```
libmx/
├── inc/
│   └── libmx.h       # Main header file
├── src/              # Source files for all functions
│   ├── utils/        # Utility functions
│   ├── string/       # String manipulation functions
│   ├── memory/       # Memory management functions
│   └── list/         # List operations functions
├── make allfile          # Compilation instructions
└── README.md         # Documentation
```

---

### Tasks

| Name         | Description                                                                 | Status      |
|--------------|-----------------------------------------------------------------------------|:-----------:|
| Utils Pack   | Basic utility functions for simplifying common tasks.                     | Completed   |
| String Pack  | Functions for string manipulation and processing.                         | Completed   |
| Memory Pack  | Memory management functions for efficient resource handling.              | Completed   |
| List Pack    | Functions for working with linked lists and data structures.              | Completed   |

---

## <h1 align = "center">🌟 My Takeaway 🌟</h1>

<div align="center">
  <img src="https://img.shields.io/badge/Experience-Transformative-brightgreen?style=for-the-badge" alt="Experience">
</div>

### 💡 Technical Growth

Working on the Libmx project has transformed my approach to C programming. This journey delivered multiple benefits:

- **Mastering Core C Concepts:**
  - Gained deep understanding of pointers, memory allocation, and address manipulation
  - Learned to prevent memory leaks through careful resource management
  - Implemented and optimized classic algorithms (QuickSort, BubbleSort, Binary Search)

- **Code Organization Skills:**
  - Structured functions into logical modules (utils, string, memory, list)
  - Designed consistent API patterns across function groups
  - Documented code for maximum clarity and usability

- **Performance Optimization:**
  - Wrote efficient, cache-friendly memory operations
  - Minimized unnecessary memory allocations and copies
  - Analyzed algorithmic complexity to choose optimal solutions

### 🤝 Collaboration & Process

This project wasn't just about code—it transformed how I work with others:

- **Peer Learning:**
  - Refined solutions through code reviews and collaborative debugging
  - Shared knowledge by explaining implementation choices
  - Documented edge cases discovered during group testing sessions

- **Development Discipline:**
  - Embraced constraints to write cleaner, faster, more maintainable code
  - Implemented systematic testing approaches for each function
  - Developed troubleshooting methodologies for complex memory issues

### 🚀 Long-Term Impact

The skills developed during this project extend far beyond the code itself:

- **Transferable Knowledge:**
  - The patterns learned apply to systems programming in any language
  - Created reusable components that will accelerate future projects
  - Developed low-level performance intuition applicable to any software

- **Problem-Solving Mindset:**
  - Learned to break complex operations into logical, manageable steps
  - Developed resilience when facing challenging bugs or design issues
  - Built confidence in tackling unclear or ambiguous requirements

---

I encourage everyone to take on this challenge and explore the endless possibilities of creating your own library. The learning experience vastly outweighs the challenges, and the skills you gain will fundamentally change how you approach software development.

<p align="center"><i>Let's code our way to success!</i> 💻</p>
</details>

<details>
  <summary>Deutsch 🇩🇪</summary>

<span style="margin-top: 5px;"></span>

> ⚠️ **ACHTUNG:**
>
> Dieses Repository enthält eine benutzerdefinierte C-Bibliothek, die im Rahmen von Track C am Innovation Campus entwickelt wurde.  
> Von Kollegen überprüft und hinsichtlich Codequalität, Speichersicherheit und Einhaltung strenger Programmierstandards validiert.  
>
> **Keine externen Abhängigkeiten** — nur reines C und Entschlossenheit!
>
> Dies ist ein Open-Source-Projekt, das ausschließlich für Bildungs- und wissenschaftliche Zwecke geteilt wird.

---

### Einführung

Willkommen im **Ucode_Libmx** Repository! Dieses Projekt ist Teil von Track C, bei dem die Herausforderung darin besteht, eine eigene Funktionsbibliothek zu erstellen. Durch die Entwicklung dieser Bibliothek vereinfachen Sie Ihre Programmieraufgaben und sparen in Zukunft Zeit. Die Erstellung verschiedener Funktionen vertieft Ihr Verständnis dafür, wie sie funktionieren, ihre Anwendungen und die dahinter stehenden Algorithmen.

Diese Bibliothek ist für die Verwendung in nachfolgenden Track C-Herausforderungen konzipiert, und Sie haben die Möglichkeit, sie mit weiteren nützlichen Funktionen zu erweitern und sie einzigartig zu gestalten.

---

### Die große Idee

Die Kernidee hinter dieser Herausforderung ist, DRY zu bleiben — Don't Repeat Yourself. Durch die Erstellung wiederverwendbarer Funktionen können Sie Ihren Codierungsprozess optimieren und sich auf die Lösung komplexerer Probleme konzentrieren.

### Wesentliche Frage

Wie kann ich meinen Code, Module und Programme effektiv wiederverwenden?

### Die Herausforderung

Erstellen Sie Ihre eigene Funktionsbibliothek in C. Diese Bibliothek sollte verschiedene Dienstprogramme, Funktionen zur Zeichenkettenmanipulation, Werkzeuge zur Speicherverwaltung und mehr umfassen. Das Ziel ist es, eine umfassende und effiziente Bibliothek zu erstellen, die Sie in zukünftigen Projekten verwenden und erweitern können.

---

### Installation und Verwendung

```bash
# Repository klonen
git clone https://github.com/ArchieDev242/Ucode_Libmx.git

# In das Projektverzeichnis wechseln
cd Ucode_Libmx

# Bibliothek kompilieren
make all

# Mit Ihrem Projekt verknüpfen
gcc your_program.c -L. -lmx -o your_program
```

Fügen Sie die Header-Datei in Ihre C-Programme ein:

```c
#include "inc/libmx.h"
```

---

### Hauptmerkmale

- **Utils Pack**: Funktionen für mathematische Operationen, Sortieralgorithmen und mehr
- **String Pack**: Umfassende Dienstprogramme zur Zeichenkettenmanipulation
- **Memory Pack**: Effiziente Funktionen zur Speicherverwaltung
- **List Pack**: Implementierung verketteter Listen und zugehörige Operationen

---

### Funktionsgruppen

#### Utils Pack
- Implementierung der binären Suche
- Bubble-Sort-Algorithmus
- Quick-Sort-Implementierung
- Mathematische Funktionen (Potenz, Quadratwurzel)
- Ganzzahl-zu-Zeichenketten-Konvertierung

#### String Pack
- Zeichenkettenmanipulation (Kopieren, Verketten, Duplizieren)
- Zeichenkettensuche und -vergleich
- Mustererkennung und -ersetzung
- Zeichenkettenteilung und -beschneidung

#### Memory Pack
- Speicherzuweisung und -neuzuweisung
- Speicherkopier- und -verschiebungsoperationen
- Speichervergleich und -suche

#### List Pack
- Erstellung und Manipulation verketteter Listen
- Knotenoperationen (Push, Pop usw.)
- Listendurchlauf und Größenberechnung

---

### Beispiele

#### Zeichenkettenmanipulation

```c
// Zwei Strings verbinden
char *s1 = "Hallo, ";
char *s2 = "Welt!";
char *result = mx_strjoin(s1, s2);
mx_printstr(result); // Ausgabe: Hallo, Welt!
mx_strdel(&result);

// String in Array nach Trennzeichen aufteilen
char *str = "Der schnelle braune Fuchs";
char **arr = mx_strsplit(str, ' ');
mx_print_strarr(arr, " | "); // Ausgabe: Der | schnelle | braune | Fuchs
mx_del_strarr(&arr);
```

#### Speicheroperationen

```c
// Speicher zuweisen und initialisieren
char *mem = mx_strnew(10);
mx_memset(mem, '*', 10);
mx_printstr(mem); // Ausgabe: **********
mx_strdel(&mem);
```

---

### <h1 align = "center"> 🔧 Verwendete Technologien 🛠️ </h1>

<div align="center">
 
  <table>
    <tr>
      <td align="center"><h4>🧰 Sprachen</h4></td>
      <td align="center"><h4>🔨 Entwicklungswerkzeuge</h4></td>
      <td align="center"><h4>💻 Plattformen</h4></td>
    </tr>
    <tr>
      <td align="center">
        <a href="https://en.wikipedia.org/wiki/C_(programming_language)">
          <img src="https://skillicons.dev/icons?i=c" alt="C" width="50" height="50"><br>
          <b>C</b>
        </a>
      </td>
      <td align="center">
        <a href="https://git-scm.com/">
          <img src="https://skillicons.dev/icons?i=git" alt="Git" width="50" height="50"><br>
          <b>Git</b>
        </a>
      </td>
      <td align="center">
        <a href="https://www.linux.org/">
          <img src="https://skillicons.dev/icons?i=linux" alt="Linux" width="50" height="50"><br>
          <b>Linux</b>
        </a>
      </td>
    </tr>
    <tr>
      <td align="center">
        <a href="https://www.gnu.org/software/bash/">
          <img src="https://skillicons.dev/icons?i=bash" alt="Bash" width="50" height="50"><br>
          <b>Bash</b>
        </a>
      </td>
      <td align="center">
        <div style="display: flex; justify-content: center; gap: 10px;">
          <a href="https://www.vim.org/">
            <img src="https://skillicons.dev/icons?i=vim" alt="Vim" width="50" height="50"><br>
            <b>Vim</b>
          </a>
          <a href="https://neovim.io/">
            <img src="https://skillicons.dev/icons?i=neovim" alt="NeoVim" width="50" height="50"><br>
            <b>NeoVim</b>
          </a>
        </div>
      </td>
      <td align="center">
        <a href="https://www.microsoft.com/windows/">
          <img src="https://skillicons.dev/icons?i=windows" alt="Windows" width="50" height="50"><br>
          <b>Windows</b>
        </a>
      </td>
    </tr>
    <tr>
      <td align="center">
        <a href="https://www.markdownguide.org/">
          <img src="https://skillicons.dev/icons?i=md" alt="Markdown" width="50" height="50"><br>
          <b>Markdown</b>
        </a>
      </td>
      <td align="center">
        <a href="https://code.visualstudio.com/">
          <img src="https://skillicons.dev/icons?i=vscode" alt="VS Code" width="50" height="50"><br>
          <b>VS Code</b>
        </a>
      </td>
      <td align="center">
        <a href="https://www.apple.com/macos/">
          <img src="https://skillicons.dev/icons?i=apple" alt="macOS" width="50" height="50"><br>
          <b>macOS</b>
        </a>
      </td>
    </tr>
    <tr>
      <td></td>
      <td align="center">
        <div style="display: flex; justify-content: center; gap: 10px;">
          <a href="https://github.com/">
            <img src="https://skillicons.dev/icons?i=github" alt="GitHub" width="50" height="50"><br>
            <b>GitHub</b>
          </a>
          <a href="https://about.gitlab.com/">
            <img src="https://skillicons.dev/icons?i=gitlab" alt="GitLab" width="50" height="50"><br>
            <b>GitLab</b>
          </a>
        </div>
      </td>
      <td></td>
    </tr>
  </table>
  
  <div>
    <p><i>🚀 Diese Bibliothek wurde mit diesen leistungsstarken Technologien erstellt 🚀</i></p>
  </div>
</div>

---

## <h1 align = "center"> ✨ BESONDERER DANK ✨ </h1>

<div align="center">
  <img src="https://img.shields.io/badge/Danke-Corkerro-purple?style=for-the-badge&logo=github" alt="Danke Corkerro">
  <br><br>
  
  <h3>🌟 Herzlicher Dank 🌟</h3>
  
  <p>
    Ein besonderer und tiefer Dank an 
    <a href="https://github.com/Corkerro"><b>Corkerro</b></a> 
    für das wertvolle 
    <a href="https://github.com/Corkerro/libmx-checker"><b>libmx-checker</b></a> 
    Repository.
  </p>
  
  <img src="https://img.shields.io/badge/Tool-libmx--checker-blue?style=flat-square" alt="libmx-checker">
</div>


<br>

### 📌 Was ist libmx-checker?

Dies ist ein spezialisiertes Testwerkzeug, das entwickelt wurde, um Libmx-Bibliotheken auf Folgendes zu überprüfen:
- Fehler und Bugs
- Speicherlecks
- Funktionalitätsprobleme
- Einhaltung von Codestandards

Es bietet umfassende Tests aller Bibliotheksfunktionen und hilft, problematische Bereiche zu identifizieren, die verbessert werden müssen.

<div align="center">
  <table>
    <tr>
      <td align="center">
        <h3>🧪</h3>
        <b>Testen</b>
      </td>
      <td align="center">
        <h3>🐛</h3>
        <b>Debugging</b>
      </td>
      <td align="center">
        <h3>🚀</h3>
        <b>Leistung</b>
      </td>
    </tr>
  </table>
</div>

> Ohne solch fantastische Beiträge aus der Community wären Projekte wie dieses deutlich schwieriger!

<div align="center">
  <br>
  <a href="https://github.com/Corkerro/libmx-checker">
    <img src="https://img.shields.io/badge/Repository_besuchen-libmx--checker-6a0dad?style=for-the-badge&logo=github" alt="libmx-checker Repository besuchen">
  </a>
  <br><br>
</div>

---

### Projektstruktur

```
libmx/
├── inc/
│   └── libmx.h       # Haupt-Header-Datei
├── src/              # Quelldateien für alle Funktionen
│   ├── utils/        # Dienstprogrammfunktionen
│   ├── string/       # Zeichenkettenmanipulationsfunktionen
│   ├── memory/       # Speicherverwaltungsfunktionen
│   └── list/         # Funktionen für Listenoperationen
├── make allfile          # Kompilierungsanweisungen
└── README.md         # Dokumentation
```

---

### Aufgaben

| Name         | Beschreibung                                                               | Status      |
|--------------|-----------------------------------------------------------------------------|:-----------:|
| Utils Pack   | Grundlegende Dienstprogrammfunktionen zur Vereinfachung allgemeiner Aufgaben. | Abgeschlossen   |
| String Pack  | Funktionen zur Zeichenkettenmanipulation und -verarbeitung.              | Abgeschlossen   |
| Memory Pack  | Speicherverwaltungsfunktionen für effiziente Ressourcenhandhabung.      | Abgeschlossen   |
| List Pack    | Funktionen für die Arbeit mit verketteten Listen und Datenstrukturen.    | Abgeschlossen   |

---

## <h1 align = "center">🌟 Mein Fazit 🌟</h1>

<div align="center">
  <img src="https://img.shields.io/badge/Erfahrung-Transformativ-brightgreen?style=for-the-badge" alt="Erfahrung">
</div>

### 💡 Technisches Wachstum

Die Arbeit am Libmx-Projekt hat meinen Ansatz zur C-Programmierung verändert. Diese Reise brachte mehrere Vorteile:

- **Beherrschung der C-Kernkonzepte:**
  - Tiefes Verständnis von Zeigern, Speicherzuweisung und Adressmanipulation
  - Gelernt, Speicherlecks durch sorgfältige Ressourcenverwaltung zu verhindern
  - Implementierung und Optimierung klassischer Algorithmen (QuickSort, BubbleSort, Binary Search)

- **Code-Organisationsfähigkeiten:**
  - Strukturierung von Funktionen in logische Module (utils, string, memory, list)
  - Entwurf konsistenter API-Muster über Funktionsgruppen hinweg
  - Dokumentation des Codes für maximale Klarheit und Benutzerfreundlichkeit

- **Leistungsoptimierung:**
  - Effiziente, Cache-freundliche Speicheroperationen geschrieben
  - Unnötige Speicherzuweisungen und Kopien minimiert
  - Algorithmische Komplexität analysiert, um optimale Lösungen zu wählen

### 🤝 Zusammenarbeit & Prozess

Dieses Projekt ging nicht nur um Code – es veränderte, wie ich mit anderen arbeite:

- **Peer-Learning:**
  - Lösungen durch Code-Reviews und kollaboratives Debugging verfeinert
  - Wissen geteilt durch Erklärung von Implementierungsentscheidungen
  - Grenzfälle dokumentiert, die während Gruppentestsitzungen entdeckt wurden

- **Entwicklungsdisziplin:**
  - Einschränkungen angenommen, um saubereren, schnelleren, wartbaren Code zu schreiben
  - Systematische Testansätze für jede Funktion implementiert
  - Fehlerbehebungsmethodologien für komplexe Speicherprobleme entwickelt

### 🚀 Langfristige Auswirkungen

Die während dieses Projekts entwickelten Fähigkeiten gehen weit über den Code selbst hinaus:

- **Übertragbares Wissen:**
  - Die erlernten Muster lassen sich auf Systemprogrammierung in jeder Sprache anwenden
  - Wiederverwendbare Komponenten erstellt, die zukünftige Projekte beschleunigen werden
  - Low-Level-Leistungsintuition entwickelt, die auf jede Software anwendbar ist

- **Problemlösende Denkweise:**
  - Gelernt, komplexe Operationen in logische, handhabbare Schritte zu unterteilen
  - Widerstandsfähigkeit entwickelt bei der Konfrontation mit herausfordernden Bugs oder Designproblemen
  - Selbstvertrauen aufgebaut beim Umgang mit unklaren oder mehrdeutigen Anforderungen

---

Ich ermutige jeden, diese Herausforderung anzunehmen und die endlosen Möglichkeiten der Erstellung einer eigenen Bibliothek zu erkunden. Die Lernerfahrung überwiegt bei weitem die Herausforderungen, und die Fähigkeiten, die Sie erwerben, werden grundlegend verändern, wie Sie an Softwareentwicklung herangehen.

<p align="center"><i>Programmieren wir uns zum Erfolg!</i> 💻</p>
</details>
