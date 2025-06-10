# DIY Smart Switch with Arduino Nano ESP32 and SG90

This is a simple DIY smart switch project that replicates the behavior of commercial smart home switches using an **Arduino Nano ESP32**, an **SG90 micro servo**, and a **custom 3D-printed enclosure**.

The device integrates with **Arduino Cloud**, enabling remote control via a web dashboard and allowing for flexible automation.

## Project Overview

The goal of this project is to offer an affordable and fully customizable alternative to smart switches using open-source hardware and software. A servo motor physically toggles a traditional light switch, making it ideal for retrofitting existing mechanical switches.

All components are housed in a compact, two-part 3D-printed case. The parts are assembled using **four M3 threaded inserts** and **four M3 screws**, making the design sturdy and easy to maintain.

## Components

- **Microcontroller**: Arduino Nano ESP32
- **Actuator**: SG90 micro servo
- **Enclosure**: 3D-printed, two-part case
  - Assembled with 4 x M3 brass threaded inserts
  - Secured with 4 x M3 screws
- **Software**: Arduino sketch with Arduino Cloud integration

## Cloud Features

- Remote switch control via Arduino Cloud
- Visual dashboard for interaction
- Can be expanded with triggers, schedules, or IoT automation

## Repository Contents

- hardware → STL files for 3D printing the enclosure
- firmware → Arduino sketch (.ino) with Arduino Cloud integration
- BOM.md → Bill of Materials
- README.md → Project documentation
- LICENSE → Open-source license (e.g., MIT)

## 🧑‍🔧 Assembly Instructions

1. Print the top and bottom parts of the enclosure (PLA recommended).
2. Heat-set 4 M3 brass threaded inserts into the bottom part using a soldering iron.
3. Mount the Arduino Nano ESP32 and SG90 servo inside the enclosure.
4. Use 4 M3 screws to join the enclosure parts.
5. Upload the sketch to the ESP32 and configure the device in Arduino Cloud.
6. Use the online dashboard to control the servo remotely.

## Notes

- Designed for use with standard mechanical toggle switches.
- Before final assembly, test servo movement to ensure correct alignment.
- If needed, power the servo externally to avoid voltage drops.

## Preview

*(Insert images or animations of the finished project here)*

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
