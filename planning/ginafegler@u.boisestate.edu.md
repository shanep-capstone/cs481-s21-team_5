## User Story

RFID Detection

As a researcher at Intermountain Bird Observatory, I want to detect when a black capped chickadee with a RFID PIT leg band visits a nest box. I want to detect every visit by any banded bird to a nest box and not miss detection of any visits. I want to detect all visits regardless of frequency or duration of visits. I want these things so that every visit to any nest box with a reader by any bird with an RFID PIT leg band can be recorded and I can collect data about these nest visits, including frequency of visits, duration of each visit, number of visits to a nest box in a day and change in number of visits to a nest box per day during the season when the birds are rearing their young.

## Tasks

1. Successfully detect a tag with the prototype antenna.
	-   Implement tag read so that when a tag is detected, an led on the board will light up to visually verify a successful read so that the user can verify that the antenna and reader are functioning during field visits for set up and swapping SD cards and batteries.	    
	
	-   Write directions to test tag detection and include in the user manual.

2. Write tests for tag detection functionality. Write unit tests to verify:

	-   that the antenna is receiving power,
	    
	-   that the tag is activated by the antenna
	    
	-   and that the antenna receives a signal from the tag.    

3. Determine the maximum range within which the prototype antenna will detect a tag via manual testing using a PIT tag.

	-   Determine the range for the expected orientation of the antenna and PIT tag for a bird landing at the nest box hole.
	    
	-   Determine whether placement of the antenna on the inside face of the nest box versus the outside face alters the read range dimensions.
	    
	-   Determine if range is improved or decreased by horizontal orientation of the antenna and document the range dimensions.
	    
	-   Review findings with IBO. Confirm placement and orientation of antenna with IBO.
	    
	-   Document the range dimensions for the antenna being used for the prototype with a diagram in the user manual
    
	-   Include directions for verifying read range of an antenna in the user manual so that users can check range for new antennas or other antenna designs.

4. Research task - research polling

	-   Research polling period and sleep period duration values.
	    
	-   Consult with IBO and confirm that values are acceptable.
    
5. Implement polling functionality in the code

	-   Implement a power saving algorithm wherein the reader will poll (emit the radio-frequency carrier wave at 125 kHz) while listening for a return signal from a tag for a brief period (TBD in task 4) to determine if a tag is present.
	    

	-   If no tag is detected, the reader will enter a sleep mode (low-power mode) for a specified period (TBD in task 4) before polling again.
	    
	-   If a tag is detected, the reader will extend the duration of polling in order to read the tag ID.
	    

	-   Manually test effectiveness of polling at selected duration/frequency versus the antenna being constantly ‘on’ and adjust if ‘visits’ are missed
	    
	-   Document the values implemented for polling and sleep mode and how to change these in the code in the user manual.
    
6. Implement night-time power save mode for the reader

	-   Place the reader in low power sleep mode during hours (night time) when nest visits do not occur. Consult with IBO to determine the hours during which the reader should stay in low power mode and not poll.
	    
	-   Manually test that the reader remains in low power mode during the specified hours and does not poll and detect tags.
	    
	-   Document the times/values implemented for night-time power save mode and how to change these in the code in the user manual.

## Time estimation method

The team completed our agile time estimation using the Bucket System. We used this system because it is relatively fast to complete the first steps, it allows everyone to participate equally, and it provides relative results rather than absolute estimates. We felt that the relative results would help us to divide the work equally, since we thought we had a reasonable grasp of how big tasks were relative to each other, even if we weren't sure how many hours they would take.
 
We met via Zoom and used a Google Doc to make a comprehensive list of tasks and a blank subsection for each bucket. We used buckets 0, 1 ,2, 3, 4, 5, 8, 13, 20, 50, 100 and 200 for our time estimation, although we did not end up with tasks in all the numbered buckets. We then discussed the first few tasks together and collaboratively agreed which bucket they each belonged in, discussing the effort involved for each, one task at a time.

We tried to start with tasks that had a range of levels of effort to give us representative tasks to refer to when estimating the remaining tasks. We then divided the rest of the tasks up between the three of us and we individually assigned tasks to buckets on our own. 

We then met again via Zoom and reviewed the buckets and the tasks in each, discussed and made adjustments.

The tasks for the RFID detection story were placed into buckets as follows:

- Task 1 - Bucket 20
- Task 2 - Bucket 20
- Task 3 - Bucket 3
- Task 4 - Bucket 2
- Task 5 - Bucket 13
- Task 6 - Bucket 8

## Definition of Done

- Task 1 DOD
	 -  Continuous integration build passing
	 -  Unit tests all pass
	 - Manual check for tag detection passes
	 - Code peer-reviewed
	 - All team members manually confirm that they are able to execute a successful detection of a tag using the code with a manual check using the antenna and a tag, confirming that the LED lights.
	 - User manual additions and revisions peer-reviewed

 - Task 2 DOD
	 - All functionality specified to be tested in the task is covered by unit tests, confirmed by peer review of the test code
	 - All tests written for the task are run by the test.sh script
 - Task 3 DOD
	 - Communication with IBO and confirmation of antenna placement and orientation is documented.
	 - Range findings are documented in the user manual
	 - Directions for verifying read range are documented in the user manual
	 - User manual additions and revisions peer-reviewed.

- Task 4 DOD
	-  Communication with IBO and confirmation that the polling and sleep durations are acceptable is documented.
	-  Findings from research documented in task comments and peer reviewed

- Task 5 DOD
	- Continuous integration build passing
	-  Unit tests all pass
	-  Code peer-reviewed
	- All team members manually confirm that they are able to execute a successful detection of a tag with polling implemented with a manual check using the antenna and a tag, confirming that the LED lights.
	- User manual additions and revisions peer-reviewed.

- Task 6 DOD
	- Continuous integration build passing
	-  Unit tests all pass
	-  Code peer-reviewed
	- All team members manually confirm that tags are not detected during night-time power save mode
	- User manual additions and revisions peer-reviewed.
