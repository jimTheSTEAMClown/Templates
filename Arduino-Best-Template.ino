// ------------------------------------------
// Best Arduino Template <-- Delete This, but keep and fill out the stuff below
// ------------------------------------------
// =========================================42===================================80
// Source: STEAM Clown - www.steamclown.org <-- Who Are You
// GitHub: https://github.com/jimTheSTEAMClown/RepositoryName <-- Link To Repository
#define code_author "Hacker: Jim Burnham - STEAM Clown - www.steamclown.org - Engineer, Maker, Propmaster & Adrenologist" // <-- Author
// This example code is covered under the GNU Lesser General Public License v3.0 // <-- License Type = GPL
// and any docs and lesson examples is licensed under the CC BY-NC-SA 3.0. <-- CC
// https://creativecommons.org/licenses/by-nc-sa/3.0/ <-- License Type = CC
#define code_license "GNU Lesser General Public License v3.0"
#define code_usage "CC BY-NC-SA 3.0"
// Create Date:			06/27/2025 
#define code_name "blink_STEAMClown.ino"
#define code_description "adaptation of blink on http://arduino.cc/ <-- Give Credit, If Due"
// Dependencies: 
// Version / Revision:
// #define code_version 0.01 //  0.01 - Created 06/27/2025
// #define code_version 0.02 //  0.02 - Updated for SVCTE Mechatronics Class - 06/27/2025
#define code_version 1.08 // Updated with additional template items, like for SVCTE Mechatronics Class - 06/28/2025
#define code_version_date "06/28/2025"
// Additional Comments: 
//
// ============================================================================
// ------------------------------------------
// info varialble to show code Information & Usage
int info = 1;  // 1 = serial port information/usage messages, 0 = no info messages
// ------------------------------------------
// debug varialble to show code debug messages
int debug = 1;  // 1 = serial port messages,, 0 = no debug messages

// ============================================================================
void setup() {
// ------------------------------------------
  /* Define stuff that needs to happen  immediately at power on:
      This could be saftey topics and settings
  */
// ------------------------------------------
  /* Initialze the Serial Consol I/O
      Here you can tell the user any safety tips, requirements, or expectations
  */  
  Serial.begin(115200);  // be sure serial monitor is set for 'newline' line ending??
  if (info >= 1) {
    Serial.println(code_author);
    Serial.println(code_license);
    Serial.println(code_usage);
    Serial.println(code_name);
    Serial.println(code_description);
    Serial.println(code_version);
    Serial.println(code_version_date);
  }
  Serial.println(" ------------------------------------------ "); 
  Serial.println(" --- Begin Of SETUP --- "); 
  Serial.println(" ------------------------------------------ ");
    
  Serial.println();
  Serial.println(" ------------------------------------------ "); 
  Serial.println(" --- Done With SETUP --- "); 
  Serial.println(" ------------------------------------------ "); 
  
  delay(2000);

}  // end void setup

// ============================================================================
void loop() {
// ------------------------------------------

}

