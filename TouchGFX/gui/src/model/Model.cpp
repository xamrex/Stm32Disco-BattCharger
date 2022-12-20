#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#ifndef SIMULATOR
#include "Charger.h"
extern LadowarkaStruct ladowarka;
#endif
int PradLadowania=400; //Set default charging curretn to 400mA
int licznik;
int ChargingTime=10; //Set default charging time to 10hrs
Model::Model() : modelListener(0)
{

}

void Model::tick()
{
//	licznik++;
//	if (licznik>1000 )licznik =0;
//
//	if (licznik%100) modelListener->UpdateBatteryVoltage();

/************* UPDATE BATT VOLTAGE ON GRAPH *********************/
modelListener->UpdateBatteryVoltage();

#ifndef SIMULATOR

if(ladowarka.narysujPunktNaWykresie){
	if (ladowarka.CzsasLadowaniaWSec==1)	modelListener->DrawPoint(); //dodanie jednego extra punktu bo zaczynamy od 0
	modelListener->DrawPoint();
	ladowarka.narysujPunktNaWykresie=0;
}

if (ladowarka.narysujPunktNaWykresieMin){
	modelListener->DrawPointMin();
	ladowarka.narysujPunktNaWykresieMin=0;

}


if((ladowarka.CzsasLadowaniaWSec>=ladowarka.ChargingTime*60*60) && (ladowarka.ChargingCompleted==0) && ladowarka.ChargeStarted==1){  //*60*60//jesli czas ladowania jest wiekszy niz ustawiony pokaz modala
	modelListener->DisplayChargingFinished();
	ladowarka.ChargingCompleted=1;
}
#endif

/*************** Update min/max value **************************/
modelListener->DisplayLastAndMaxVlt();
/*************** Update Runningn Time value **************************/
modelListener->DisplayRunningTime();
/*************** Update Charging current value **************************/
modelListener->DisplayCurrentValue();
}
