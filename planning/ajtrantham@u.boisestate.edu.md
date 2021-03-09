Device Configuration

# AJ Trantham

## User Story 1

As a developer, I should be able to use hardware/software documentation to set up and program a hardware device so I can program it to read RFID tags and log data to an SD Card. As an Intermountain Bird Observatory researcher, I want this device to run for at least two weeks without maintenance. 

## Tasks

1. Configure the RFID chip to connect with the metro board (Research)
Figure out the UART communication pins needed for connecting the RFID reading chip (and antenna) to the metro board
Determine the length and gauge of wires needed to connect the devices
Document this process so other developers can connect their hardware appropriately
2. Acquire and install headers on Data Logger shields
3. Connect DataLogger shields to metro board
4. Device is operable for at least two weeks (5V via USB or 7-9 volts from 2.1mm DC jack)
Determine the current draw of the device
Determine an appropriate power source that will handle this current for two weeks
Test Power consumption and device ‘alive’ time
* No more reasonable tasks for this story


### Time estimation method

The team completed our agile time estimation using the Bucket System. We used this system because it is relatively fast to complete the first steps, it allows everyone to participate equally, and it provides relative results rather than absolute estimates. We felt that the relative results would help us to divide the work equally, since we thought we had a reasonable grasp of how big tasks were relative to each other, even if we weren't sure how many hours they would take.
 
We met via Zoom and used a Google Doc to make a comprehensive list of tasks and a blank subsection for each bucket. We used buckets 0, 1 ,2, 3, 4, 5, 8, 13, 20, 50, 100 and 200 for our time estimation, although we did not end up with tasks in all the numbered buckets. We then discussed the first few tasks together and collaboratively agreed which bucket they each belonged in, discussing the effort involved for each, one task at a time.

We tried to start with tasks that had a range of levels of effort to give us representative tasks to refer to when estimating the remaining tasks. We then divided the rest of the tasks up between the three of us and we individually assigned tasks to buckets on our own. 

We then met again via Zoom and reviewed the buckets and the tasks in each and made adjustments.

- Task 1: Bucket 2
- Task 2: Bucket 2
- Task 3: Bucket 0
- Task 4: Bucket 50

## Definition of Done

- Task 1 DOD 
 Wiring Schematic exists and describes how all hardware components are connected
All components are receiving power
- Task 2 DOD 
Headers are soldered properly to the metro board and all pins are functional
- Task 3 DOD
DataLogger shields are connected and power indicator is on
- Task 4 DOD - Power circuit is functional and optimized to power the device as long as possible
Research has been done and documented measuring the power consumption 
The metro board is powered with the correct voltage (5V or 7-9V)
Differing batteries are tested and a ‘winner’ is chosen - document this in user manual


RFID ID Storage

# AJ Trantham

## User Story 4


1. Store Tag ID (Alternative Plan)
When a tag is detected, if the bird is just arriving (e.g. it is the first time reading tag id 1234) the tag ID, Timestamp and duration should be stored to the SD Card, creating a new record.
When a tag is detected, if the bird is known to be in the nest box (i.e. first bullet has happened), the record corresponding to the bird id is updated, altering the duration to reflect the time the bird has been at the nest box.
Be sure to handle multiple birds being present in the nest box. Present bird ids and record memory locations need to be stored in a way that multiple birds can be present in the nest box and the correct record is updated. 

* no more reasonable tasks for this story

### Estimation:

The team completed our agile time estimation using the Bucket System. We used this system because it is relatively fast to complete the first steps, it allows everyone to participate equally, and it provides relative results rather than absolute estimates. We felt that the relative results would help us to divide the work equally, since we thought we had a reasonable grasp of how big tasks were relative to each other, even if we weren't sure how many hours they would take.
 
We met via Zoom and used a Google Doc to make a comprehensive list of tasks and a blank subsection for each bucket. We used buckets 0, 1 ,2, 3, 4, 5, 8, 13, 20, 50, 100 and 200 for our time estimation, although we did not end up with tasks in all the numbered buckets. We then discussed the first few tasks together and collaboratively agreed which bucket they each belonged in, discussing the effort involved for each, one task at a time.

We tried to start with tasks that had a range of levels of effort to give us representative tasks to refer to when estimating the remaining tasks. We then divided the rest of the tasks up between the three of us and we individually assigned tasks to buckets on our own. 

We then met again via Zoom and reviewed the buckets and the tasks in each and made adjustments.

- Task 1: Bucket 100

## Definition of Done

- Task 1 DOD -
 Passing unit test verifying PIT tag ids are properly stored in FAT format and accessible to reading
Passing Continuous Integration

