/*
 * GestionVol.c
 *
 *  Created on: Oct 19, 2021
 *      Author: louis
 */
# include "AllumeRasberry.h"
# include "AllumeCamera.h"
# include "Capteurs.h"
# include "EteintCamera.h"
# include "EteintRaspberry.h"

void GestionVol (void){
  AllumeCamera();
  int a1=0;
  int a2=-1000;
  a1=Capteurs();
  HAL_Delay(60000);
  while (a1>5000 || a1>=a2){
    a2=a1;
    a1=Capteurs();
    HAL_Delay(1000);}
  EteintCamera();
  while (a1<a2){
    a2=a1;
    a1=Capteurs();
    HAL_Delay(1000);
  EteintRaspberry();
