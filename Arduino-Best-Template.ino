// ------------------------------------------
// Best Arduino Template <-- Delete This, but keep and fill out the stuff below
// ------------------------------------------
// =========================================42===================================80
// Source: STEAM Clown - www.steamclown.org <-- Who Are You
// GitHub: https://github.com/jimTheSTEAMClown/RepositoryName <-- Link To Repository
// Hacker: Jim Burnham - STEAM Clown, Engineer, Maker, Propmaster & Adrenologist <-- Author
// This example code is covered under the GNU Lesser General Public License v3.0 <-- License Type = GPL
// and any docs and lesson examples is licensed under the CC BY-NC-SA 3.0. <-- CC
// https://creativecommons.org/licenses/by-nc-sa/3.0/ <-- License Type = CC
// Create Date:			06/27/2025 
// Design Name:			blink_STEAMClown
// Description:     adaptation of blink on http://arduino.cc/ <-- Give Credit, If Due
// Dependencies: 
// Vesrion / Revision:
// #define code_version 0.01 //  0.01 - Created 06/27/2025
// #define code_version 0.02 //  0.02 - Updated for SVCTE Mechatronics Class - 06/27/2025
#define code_version 1.01 // Updated with additional template items, like for SVCTE Mechatronics Class - 06/28/2025
#define code_version_date "06/28/2025"
// Additional Comments: 
//
// ============================================================================

// ============================================================================
void setup() {
// ------------------------------------------
  /* Define stuff that needs to happen imidiatly at power on:
  
  */
// ------------------------------------------
  /* Initialze the Serial Consol I/O
      Here you can tell the user any saftey tips, requirments, or expectations
  */  
  Serial.begin(115200);  // be sure serial monitor is set for 'newline' line ending??
  Serial.println(" ------------------------------------------ "); 
  Serial.println(" --- Begin Of SETUP --- "); 
  Serial.println(" ------------------------------------------ ");
  Serial.println();
  Serial.println("Dark Lord Robotics:"); 
  Serial.println("One Bot to Rule Them All, and in the Darkness, Bind Them..."); 
  Serial.println();
  Serial.println(code_version);
  Serial.println(code_version_date);
  Serial.println(" ------------------------------------------ "); 
  Serial.println(" --- Done With SETUP --- "); 
  Serial.println(" ------------------------------------------ "); 
  }
  delay(2000);

}  // end void setup

// ============================================================================
void loop() {
// ------------------------------------------

}

