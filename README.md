# CS481 - Senior Design Project

TODO:[CI Lab](https://shanep.github.io/capstone/labs/ci/)

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

TODO:[Tech Lab](https://shanep.github.io/capstone/labs/tech/)

## Planning Lab

TODO:[Planning Lab](https://shanep.github.io/capstone/labs/planning/)

- [Jane's Plan](planning/janedoe@u.boisestate.edu.md)
- John's Plan
- Bob's Plan
