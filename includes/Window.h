#ifndef WINDOW_H
#define WINDOW_H
#include "cc0001defs.h"
struct Denim{};
class CC0001_API Window
{
	public:
		Window();
		~Window();
		virtual void setTitle(const char* title="Hello")=0;
		virtual const char* getTitle()=0;
		virtual void setCoord(int x,int y)=0;
		virtual void setX(int x)=0;
		virtual void setY(int y)=0;
		virtual int getX()=0;
		virtual int getY()=0;
		virtual int getWidth()=0;
		virtual int getHeight()=0;
		virtual void setWidth(int width)=0;
		virtual void setHeight(int height)=0;
		virtual int getRoot()=0;
		virtual bool hasMenu()=0;
		virtual void clickOnMenu(int code)=0;
		virtual const char* getName(int denim)=0;
		virtual int getCode(int denim)=0;
		virtual void clickMenu(int denim)=0;
		virtual int getMenuCount()=0;
		virtual void sendKeyDown(int keyCode)=0;
		virtual void sendKeyUp(int keyCode)=0;
		virtual void closeWindow()=0;
	protected:
};

#endif
