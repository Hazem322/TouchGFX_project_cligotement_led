#include <gui/screen3_screen/Screen3View.hpp>

Screen3View::Screen3View()
{

}

void Screen3View::setupScreen()
{
    Screen3ViewBase::setupScreen();
    analogMinutes =analogClock1.getCurrentHour();
    analogMinutes =analogClock1.getCurrentMinute();
    analogSeconds =analogClock1.getCurrentSecond();
}

void Screen3View::tearDownScreen()
{
    Screen3ViewBase::tearDownScreen();
}
void Screen3View::handleTickEvent()
{
	tickCounter++;
	if (tickCounter%60==0){
		if (++analogSeconds>=60){
			analogSeconds=0;
			if (++analogMinutes>=60){
		analogMinutes=0;
				if (++analogHours>=24){
						analogHours=0;
				}
			}
		}

		analogClock1.setTime24Hour(analogHours,analogMinutes,analogSeconds);
		digitalClock1.setTime24Hour(analogHours,analogMinutes,analogSeconds);
	}}
