# Meeting 3 (2-4)

- Attendance: All in attendance

### Meeting Prupose:
Working on the Tech lab and choosing hardware

### Last week's Accomplishments
- We picked hardware and got funding
- Looked at the ardunio build system
- Asked about funding

### My task for this week:
- We have hareware now we need to figure out our corresponding toolchain and build system
- working on build system implementation and hopefully receive and distribute hardware
- It might be worth trying to get a nest box
- Getting our hello world to build with our including our dependencies [sd card lib, rfid]

### Lessons Learned
 - There are 4 million hardware providers out there with a million options and very
 - similar products
 - We evenutally went with AdaFrout products. Spark fun had some good options as well
 - It is important to note that many plaform including the STM32 nucleo board are ardunio compatable
 - There are different frequencies of rfid readers and coresponding chips, an antanae is required to detect the chip
 - Real Time Clock is required for keeping time. It runs on its own independant battery so it can keep going after the chip is powered off
 - Timers are great but they can only start counting once the microprocessor is powered on
