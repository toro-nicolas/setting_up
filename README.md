# Setting Up 📏

## Table of contents 📑
- [Description](https://github.com/toro-nicolas/setting-up/blob/main/README.md#description-)
- [Usage](https://github.com/toro-nicolas/setting-up/blob/main/README.md#usage-%EF%B8%8F)
- [Result](https://github.com/toro-nicolas/setting-up/blob/main/README.md#result-)
- [Compilation](https://github.com/toro-nicolas/setting-up/blob/main/README.md#compilation-%EF%B8%8F)
- [Code mandatory](https://github.com/toro-nicolas/setting-up/blob/main/README.md#code-mandatory-)
- [What's next ?](https://github.com/toro-nicolas/setting-up/blob/main/README.md#whats-next--)
- [Contributors](https://github.com/toro-nicolas/setting-up/blob/main/README.md#contributors-)


## Description 📝
The **Setting Up** is a project carried out in **solo**, during our **1st year** in [**EPITECH**](https://www.epitech.eu/) Grand Ecole program.  
Its purpose is to create in [**C**](https://en.wikipedia.org/wiki/C_(programming_language)) a program to **find the largest square in a zone**.


## Usage ⚔️
You can run the setting-up like this :
- Map resolution :
```sh
./setting-up exemple_files/maps/intermediate_map_100_100
```
- Map generation and resolution :
```sh
./setting_up 10000 "......o.."
```


## Result 🚩
The result of this project is a **perfect Setting Up**.  
If you discover a **problem** or an **error**, don't hesitate to **create an issue** and **report it** to us as soon as possible.


### my.epitech.eu result

| Category                                | Percentage | Numbers of tests |  Crash   |
|-----------------------------------------|:----------:|:----------------:|:--------:|
| Algorithm app. - Generating column      |    100%    |       8/8        |    No    |
| Algorithm app. - Generating edges       |    100%    |       4/4        |    No    |
| Algorithm app. - Generating line        |    100%    |       7/7        |    No    |
| Algorithm app. - Generating square      |    100%    |       3/3        |    No    |
| Algorithm app. - Opening column         |    100%    |       7/7        |    No    |
| Algorithm app. - Opening edges          |    100%    |       7/7        |    No    |
| Algorithm app. - Opening line           |    100%    |       7/7        |    No    |
| Algorithm app. - Opening rectangle      |    100%    |       7/7        |    No    |
| Basics                                  |    100%    |       7/7        |    No    |
| Data structure - Generating             |    100%    |       7/7        |    No    |
| Data structure - Opening                |    100%    |       7/7        |    No    |
| Optimization - Generating 100 to 500    |    100%    |       7/7        |    No    |
| Optimization - Generating 1000 to 2000  |    100%    |       7/7        |    No    |
| Optimization - Generating 5000 to 10000 |    100%    |       7/7        |    No    |
| Optimization - Opening 100 to 500       |    100%    |       7/7        |    No    |
| Optimization - Opening 1000 to 2000     |    100%    |       7/7        |    No    |
| Optimization - Opening 5000 to 10000    |    100%    |       7/7        |    No    |
| Parsing - Opening                       |    100%    |       7/7        |    No    |
| Robustness - Generating empty map       |    100%    |       7/7        |    No    |
| Robustness - Generating filled map      |    100%    |       7/7        |    No    |
| Robustness - Generating valid board     |    100%    |       7/7        |    No    |
| Robustness - Opening empty map          |    100%    |       7/7        |    No    |
| Robustness - Opening filled map         |    100%    |       7/7        |    No    |
| Robustness - Opening valid file         |    100%    |       7/7        |    No    |
| **Results**                             |  **100%**  |    **29/29**     |  **No**  |


### Tests and code coverage
**Unit tests** were performed using [criterion](https://criterion.readthedocs.io/en/master/intro.html).  
In this project, **only** the **library code is covered**.
Unit tests are still to be performed, but a large part of the code is already covered.

You can compile the project and run the unit tests with this command :
```sh
make tests_run
```


## Compilation 🛠️
You can compile the project with this command :
```sh
make
```

If you want clean the project, you can run this command :
```sh
make fclean
```

You can clean and compile the project with ```make re```.

You can compile the unit tests with this command :
```sh
make unit_tests
```


## Code mandatory 📦
- You'll need to create a branch where you'll push your code. Once you've completed your tasks on this branch, we'll work together to merge it and check that everything works.
- Every function you add must be code-style.
- Before merging, you'll need to check that all unit tests pass by running ```make tests_run```.
- Each commit will contain ```[+]``` or ```[-]``` or ```[~]``` followed by a message
    - ```[+]``` : Add feature
    - ```[-]``` : Delete feature
    - ```[~]``` : Edit feature

**Of course, in exceptional cases, we may depart from these rules.**


## What's next ? 🚀
- Add help section
- Add a graphical visualization
- Add github actions
- Improve the memory management
- Add a documentation for each function
- Add unit tests on each piece of code


## Contributors 👤
This project was carried out alone by [**Nicolas TORO**](https://github.com/toro-nicolas).
