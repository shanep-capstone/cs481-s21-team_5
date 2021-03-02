# CS481 - Senior Design Project


![example workflow](https://github.com/shanep-capstone/cs481-s21-team_5/actions/workflows/build.yml/badge.svg)


## Project Epic

Project: RFID-based system to log nest box visits by banded birds

Intermountain Bird Observatory (IBO) has permits in place to band black capped chickadees with radio frequency identification (RFID) legs bands. The project will develop an automated bird-monitoring system to log visits by RFID banded birds to nest boxes at IBO’s Boise River Research Station. 

The project consists of the following components:
1. Bird needs a trackable ID:
A passive integrated transponder (PIT) tag leg band will be used. PIT tags are dormant until activated and do not require any internal source of power. PIT tags consist of an integrated circuit chip, capacitor, and antenna coil encased in glass and come in various shapes and sizes. The PIT tag must be the appropriate weight and size for the bird species. The PIT tag leg band will be developed using existing technology and specifications determined via research and consultation with IBO researchers.
IBO field personnel with the appropriate permits will record information about each bird that is banded. That information will be entered into a database and associated with an ID that will correspond to the RFID attached to the individual leg band.

2. Detect the RFID when a banded bird visits a nest box: 
An automated reading antenna will be designed. The antenna will be a scanning device that emits a low-frequency radio signal,  generates a close-range electromagnetic field, and detects the selected frequency of the PIT tags. The antenna design will ensure that when visiting the nest box, the bird will be within the range of the electromagnetic field so that the PIT tag will be activated, and nest visitation will be logged.
The design will require consultation and approval of IBO researchers to ensure both the necessary spatial range and that the antenna can be attached to a nest box in a manner that does not deter birds from using the nest box.

3. Read the RFID when a banded bird visits a nest box:
When the reading antenna detects a PIT tag, the associated ID will be read and will be logged with a timestamp. There are several options for hardware, but an Arduino board-based system is the most likely due to its low power consumption, low cost and ease of programmability.

4. Store the ID and timestamp when a banded bird visits a nest box:
When the ID and timestamp are logged, that information will need to be stored for future retrieval. The information will most likely be stored on an SD card. Other methods for preserving the data will be investigated to determine if there is a way to automate the data transfer and minimize field visits. 

5. Access the stored data: 
If an SD card is used, IBO personnel will periodically visit the nest box sites to retrieve the card and download the stored data. The data will need to be accessible by IBO as CSV data that can be added to a CSV file containing all recorded visits and can be accessed using Excel and Microsoft Access.

6. Share project information and data with the public: 
A public facing web page describing the project and sharing ongoing updates or outcomes will be developed. The webpage will follow BSU and IBO standards and will most likely be a subpage accessible from IBO’s website. 

7. Technical requirements and challenges
   * Minimize cost of hardware for each reader. The project will not be feasible for IBO beyond a prototype if the cost per station is prohibitive.
   * The reader must be protected from the elements, weatherproof and durable. Weatherproofing for the reader/data storage/power components will be developed to minimize maintenance and potential failures and downtime. Use of components that can be purchased and 3D printing custom components will be explored. 
   * Minimize field visits by IBO personnel for maintenance. The team will determine the best option for power by considering cost and required frequency of replacement. Factors that will impact power consumption and thus battery life include method of storing or transferring data and polling frequency, which determines the interval at which the reader scans for tags. IBO personnel will be consulted to determine the optimal polling frequency to avoid missing bird visits without unnecessarily reducing battery life.


### Epic Feedback from Shane


Great project!! I love the initiative! Just like we talked today on zoom please feel free to drive this project in a direction that makes sense to you! Also don’t forget to get me that hardware list when you have it!

I am excited to see the finished project! 


### Tech lab


The majority of the tech decisions our group needed to make revolved around hardware selection. The first decision we had to make was whether to use Raspberry Pi or the Arduino platform. Because the RFID reader will need to operate in the field using batteries for power and visits to change batteries need to be minimized, with a minimum of two weeks preferred for operation between battery changes, we decided on the Arduino platform because of its lower power consumption. 

Once we had decided on Arduino, we then needed to decide on a specific board type. We selected the Adafruit METRO 328 board, which uses the Arduino Uno open source design. We decided on this because the Uno is the standard Arduino board, so it is easier to find information. We considered designs that use 3.3V instead of 5V like the Uno because they would further reduce power consumption, but decided to stick with the standard 5V design for the prototype. We anticipate that when an operating prototype is achieved, we may be able to make refinements or change parts of the hardware to reduce power consumption and/or overall cost. 

The second component we needed to select was an RFID reader module or chip, which included options that varied from an EM4095 RFID front end chip, which cost a couple of dollars and would require the most electrical engineering knowledge to get working, to the ID-3LA RFID Reader from Sparkfun, which cost 26 dollars and would be the most straightforward to use. We decided on an option closer to the EM4095, but which included an external antenna of a size and range that should work with the nest box. This option will take more effort to get working than the ID-3LA, but was much less expensive and will not require us to either purchase a separate antenna or purchase the supplies and figure out how to roll and tune the antenna from scratch. If the prototype is successful we will have options to attempt to improve the read range with a custom antenna and also potentially reduce cost.

Programming language and libraries:

Our language selection was driven by the hardware considerations. The  Raspberry Pi would have allowed us to potentially use Python, but Arduino was a much lower power option. Arduino uses the Arduino programming language, which is C++. Because the physical environment is limited, not all C/C++ features can be used. We will use the Arduino IDE, which is written in Java and can run on Windows, Mac OS X and Linux. 

RTClib (https://github.com/adafruit/RTClib), a real time clock library for Arduino, will be used in order to use the real time clock to get and record a timestamp when an RFID PIT tag is within range and activated, and read by the reader.

Arduino SD library, which will allow reading and writing to SD cards, which we will use to log PIT tag IDS each time they are read along with the associated timestamp.


## Planning Lab

TODO:[Planning Lab](https://shanep.github.io/capstone/labs/planning/)

- [Jane's Plan](planning/janedoe@u.boisestate.edu.md)
- John's Plan
- Bob's Plan

## Team Build Notes

Install platformio - https://platformio.org/platformio-ide
It will  install at C:\Users\<username>\.platformio

add to your Path Environment variable
C:\Users\<username>\.platformio\penv\Scripts\

to build:
$ sh build.sh

to clean:
$ sh clean.sh

check exit code:
$ echo $?
