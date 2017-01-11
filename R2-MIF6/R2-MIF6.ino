/*******************************************************************************
**                                                                            **      
**                           TITOL: MATCH IS FUN (PART 6)                     **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 29/12/2016  **
*******************************************************************************/
//**********************************INCLUDE*************************************


//*********************************VARIABLES************************************
int drive_gb = 100;
long drive_mb;  

//***********************************SETUP**************************************
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;
  
  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}
//************************************LOOP**************************************
void loop()     // we need this to be here even though its empty
{
}

//**********************************FUNCIONS************************************
