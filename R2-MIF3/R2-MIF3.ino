/*******************************************************************************
**                                                                            **      
**                           TITOL: MATCH IS FUN (PART 3)                     **
**                                                                            **  
**                                                                            **
**  NOM: CARLOS RODRIGUEZ                                   DATA: 22/12/2016  **
*******************************************************************************/
//**********************************INCLUDE*************************************


//*********************************VARIABLES************************************
int drive_gb = 5;
int drive_mb;

//***********************************SETUP**************************************
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  
  Serial.print(drive_gb);
  Serial.println("GB");

  drive_mb = 1024 * drive_gb;

  Serial.print(drive_mb);
  Serial.println("MB");
  
}
//************************************LOOP**************************************
void loop()     // we need this to be here even though its empty
{
}

//**********************************FUNCIONS************************************
