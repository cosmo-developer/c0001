#ifndef WINDOWMANAGER_H
#define WINDOWMANAGER_H
#include "cc0001defs.h"
#include "../includes/Window.h"
class CC0001_API WindowManager
{
	public:
		WindowManager();
		~WindowManager();
		virtual bool findWindowByTitleB(const char* title)=0;
		virtual Window* findWindowByTitleW(const char* title)=0;
	protected:
};

#endif
