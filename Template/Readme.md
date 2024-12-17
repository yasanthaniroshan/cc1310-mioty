# Template Project

A template project for creating new projects with cc1310-mioty on Contiki-ng.

## Table of Contents

- [Pre-requisites](#pre-requisites)
- [Configuration](#configuration)


## Pre-requisites
- [CC1310 Launchpad](https://www.ti.com/tool/LAUNCHXL-CC1310)
- [Contiki-ng SDK](https://docs.contiki-ng.org/en/develop/doc/getting-started/index.html)
- [Mioty Protocol Stack](https://mioty-alliance.com/)
- [Visual Studio Code](https://code.visualstudio.com/)

## Configuration
### Add Mioty Protocol Stack
- You need to download and add necessary header files to [includes](includes) folder and compiled library files to [lib](lib) folder.
- Make sure MIORT lib named as ` mioty.lib` otherwise you need to change the name in the Makefile.

### Renaming 
- When you renaming [template.c](template.c) make sure that change is already applied to Makefile

### Code Completion and IntelliSense
- You need to set include paths for the Contiki-ng SDK in the [c_cpp_properties.json](.vscode/c_cpp_properties.json) file to enable code completion and IntelliSense in Visual Studio Code.
- Add your `contiki-ng` path to the `includePath` array in the `c_cpp_properties.json` file.

### Build and Flash
- You can build project using the following commands:
    ```sh
    make all
    ```

> [!WARNING]
> If you see error msg like `Contiki-ng SDK not found. Please set the CONTIKI path.`, make sure contiki-ng sdk is installed.If contiki-ng sdk is installed,then set the `CONTIKI` path in the Makefile