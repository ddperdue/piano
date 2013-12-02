INSERT TITLE HERE Version 1.0 12/01/2013

FEATURES
--------
	The musical piano includes the following features:
	- Play any sounds by pressing any key on the keyboard or clicking the buttons
		on the keyboard displayed on the screen.
	- Allows users to select select and play sounds of different instruments. The
		instruments include: Guitar, Rhodes, Glockenspiel, Vibes, Wurlitzer,
		and Piano.
	- Display music sheets with variety of different songs that the user can select
		from and play by pressing the appropriate keys.
	- Allows users to type or paste text into a text box and play the sounds at
		different speeds, by adjusting the horizontal slider below the text box.
	- Allows the users to record sounds that they play by pressing the 'record'
               button to start recording and then the 'stop' button. This feature also
               allows the user to play back the last recording made by pressing the 
               'play' button located near the bottom of the screen. It produces
               a ".amr" file in the build folder, which can be accessed at any time. The 
               name of the output sound file is based on the time it is recorded.
	- Change the background color of the piano on the screen.
	- Adjust the volume of the sounds by adjusting the volume knob.

GENERAL USAGE NOTES
--------------------
       - PLACING THE 'Samples' FOLDER:
               After building the program in Qt Creator the user must place the
               included 'Samples' folder in the newly created build folder. The
               'Samples' folder must be in the build folder before the program
               will properly run on either OS.
	- RUNNING THE PROGRAM ON A MAC OS X:
		The user must run the executable file in the build folder to run 
		the program. This is due to the attachments of the sample files 	
		which should now be in that folder
	- RUNNING ON WINDOWS: 
		To run on windows, compile the program as usual through QT and run 
		the program by pressing the 'run' button.
	- The recording is only applicable if the computer contains an internal mic.
		The sounds can also be recorded through a portable mic, however do
		not connect anything to the head phones port while using the portable
		mic to allow for the recording to work properly.
	- For MAC OS X USERS, the text box feature does not allow the users to play
		the sounds at different speeds. The horizontal slider does not operate
		properly. This is due to the Sleeper class which does not transfer 
		to a MAC OS X.

FILES ATTACHED
--------------	
	To fully enjoy your experience playing the musical typing instrument, we have
		included the following files:
		- Piano master folder with all of the header and source files 	
			necessary to run the program.
		- Samples folder with sound files of different instruments
		- PNG file for the background 
		
	
CONTACT	
-------									

	If you have problems, questions, ideas or suggestions, please contact 	
		- Dan Perdue      - ddperdue@gmail.com					
		- Raghav Sharma   - rsharm7@uic.edu				
		- Mohammad Joudeh -						
		- Bilal Abu Zenah -						

 ===============================================================================
|	The program can be reached through the following websites:		|
|		- https://sites.google.com/site/sharmauic/home/cs-340		|
|		- https://github.com/ddperdue/piano				|
 ===============================================================================

ACKNOWLEDGMENT
--------------
	The idea for an, online piano was based on a current online virtual piano.
		Some of the features that we tried to emulate off the online
		virtual piano include recording sounds and providing music sheets.
		As for the music sheets, we utilized some of the songs that were
		provided on their site. The site can be accessed via the following
		link:	http://www.virtualpiano.net/