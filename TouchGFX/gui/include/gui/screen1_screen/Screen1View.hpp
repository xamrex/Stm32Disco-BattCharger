#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
	virtual void ButtonUpClicked();
	virtual void ButtonDownClicked();
	virtual void ButtonUpTimeClicked();
	virtual void ButtonDownTimeClicked();
	virtual void DisplayBatteryVoltage();
	virtual void ButtonStartClicked();


protected:
	//int PradLadowania=400;
};

#endif // SCREEN1VIEW_HPP
