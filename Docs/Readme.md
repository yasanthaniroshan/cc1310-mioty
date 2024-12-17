# MIOTY on CC1310 (Contiki-ng)

## Overview
This project demonstrates the use of the Mioty protocol stack on the CC1310 microcontroller using the Contiki-ng SDK. The Mioty protocol is a low-power wide-area network (LPWAN) protocol that is designed for long-range communication with low power consumption. The CC1310 microcontroller is a low-power, high-performance microcontroller that is ideal for IoT applications.

## Features
- Low power consumption
- Long-range communication
- High scalability
- Robust against interference

## Requirements
- CC1310 launchpad
- Contiki-ng SDK (with toolchain)
- Mioty protocol stack

> [!IMPORTANT]
> You can find the Contiki-ng SDK and toolchain installation instructions [here](https://docs.contiki-ng.org/en/develop/doc/getting-started/index.html)

## Installation
1. Clone the repository:
    ```sh
    git clone https://github.com/yasanthaniroshan/cc1310-mioty.git
    ```
2. Navigate to the project directory:
    ```sh
    cd Template
    ```
3. Build and flash the firmware to the CC1310 launchpad:
    ```sh
    make all
    ```

