#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#ifndef SIMULATOR
#include "Charger.h"
extern LadowarkaStruct ladowarka;
#endif
int PradLadowania=400; //Set default charging curretn to 400mA
int licznik;
int ChargingTime=10; //Set default charging time to 10hrs
int ModalWindowShown=0;	//modal window not shown yet
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

if(ladowarka.PlotPointOnSecGraph){
	if (ladowarka.ChargingTimeInSec==1)	modelListener->DrawPoint(); //dodanie jednego extra punktu bo zaczynamy od 0
	modelListener->DrawPoint();
	ladowarka.PlotPointOnSecGraph=0;
}

if (ladowarka.PlotPointOnMinutesGraph){
	modelListener->DrawPointMin();
	ladowarka.PlotPointOnMinutesGraph=0;

}


if(ladowarka.ChargingCompleted==1 && ModalWindowShown==0){
	modelListener->DisplayChargingFinished();
	ModalWindowShown=1;

}
#endif

/*************** Update min/max value **************************/
modelListener->DisplayLastAndMaxVlt();
/*************** Update Runningn Time value **************************/
modelListener->DisplayRunningTime();
/*************** Update Charging current value **************************/
modelListener->DisplayCurrentValue();
}
