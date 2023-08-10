# 2WD Collision Avoidance Robot

Welcome to the 2WD Collision Avoidance Robot GitHub repository! This project showcases a two-wheel drive (2WD) robot that utilizes an ultrasonic sensor to detect obstacles and avoid collisions. The robot adjusts its velocity to minimize the risk of collision and incorporates an LED to display the distance and direction information.

## Table of Contents

- [Project Overview](#project-overview)
- [Features](#features)
- [Hardware Requirements](#hardware-requirements)
- [Circuit Diagram](#circuit-diagram)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The 2WD Collision Avoidance Robot is designed to navigate its surroundings while minimizing the risk of collisions. It achieves this by incorporating an ultrasonic sensor that measures the distance to objects in its path. Based on this distance information, the robot adjusts its velocity to slow down as it approaches obstacles, allowing it to avoid collisions.

Additionally, the robot includes an LED that provides visual feedback. The LED displays the distance to the nearest obstacle and indicates the direction in which the robot should move to avoid the obstacle.

- Check the following link to view the project in [tinkercad](https://www.tinkercad.com/things/1hWNzZK2cs5)

## Features

- Two-wheel drive robot capable of avoiding collisions.
- Ultrasonic sensor for detecting obstacles and measuring distance.
- Velocity adjustment to minimize the risk of collision.
- LED for displaying distance and direction information.

## Hardware Requirements

To set up and run this project, you will need the following hardware components:

- Two DC motors for the 2WD robot.
- Motor driver module (e.g., L298N) to control the motors.
- Ultrasonic sensor module (e.g., HC-SR04) for obstacle detection.
- Arduino or compatible microcontroller board.
- Jumper wires for circuit connections.
- Breadboard or PCB for assembling the circuit.

## Circuit Diagram

 ![Circuit](https://github.com/MAzewail/obstacle-avoidance-robot/blob/main/Obstacle%20Avoidance%20Robot.png)

The circuit diagram above illustrates the connections between the microcontroller board, motor driver module, ultrasonic sensor module, LED, and other components. Ensure that you make the appropriate connections based on the diagram when setting up the hardware.

## Installation

1. Clone this repository to your local machine using the following command:

   ```
   git clone https://github.com/MAzewail/2wd-collision-avoidance-robot.git
   ```

1. Connect the hardware components (DC motors, motor driver module, ultrasonic sensor module, LED, etc.) to your microcontroller board based on the circuit diagram provided.

1. Upload the code to your microcontroller board using the Arduino IDE or your preferred development environment.

## Usage

1. Ensure that the hardware is properly connected to the microcontroller board.

1. Power on the robot.

1. The ultrasonic sensor will start detecting obstacles in the robot's path.

1. The LED will display the distance to the nearest obstacle and indicate the direction in which the robot should move to avoid the obstacle.

1. The robot will automatically adjust its velocity to minimize the risk of collision.

1. Observe the robot as it navigates its surroundings and avoids collisions.

## Contributing

Contributions to this project are welcome and encouraged! If you would like to contribute, please follow these steps:

1. Fork the repository.

1. Create a new branch for your feature or bug fix.

1. Make your changes and commit them with descriptive commit messages.

1. Push your changes to your forked repository.

1. Submit a pull request, explaining the changes you have made.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use, modify, and distribute the code as permitted by the license.

______________________________________________________________________

Thank you for your interest in the 2WD Collision Avoidance Robot project. If you have any questions or feedback, please don't hesitate to reach out. Happy coding!
