#include <cc0001.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
/***Use Dev C++**/
int main(int argc, char** argv) {
	char* title=new char[4096];
	if (argc>1){
	   	title=argv[1];
	}else{
	   std::cout<<"Enter app title:";
	   gets(title);
    }
	WindowManager* win=instance();
	Window* notepad=win->findWindowByTitleW(title);
	if (notepad==NULL){
		std::cout<<"App not found:"<<title<<std::endl;
		exit(406);
	}
	notepad->setCoord(5,2);
	notepad->setWidth(600);
	notepad->setHeight(600);
	printf("WindowName:%s,X:%d,Y:%d,WIDTH:%d,HEIGHT:%d\n",
	notepad->getTitle(),
	notepad->getX(),
	notepad->getY(),
	notepad->getWidth(),
	notepad->getHeight()
	);
	char* command=new char[2048];
	while(true){
	 #ifdef _WIN32
	 system("cls");
	 #endif
	 printf("   \nSend Command to:%s\n\n",notepad->getTitle());
	 for (int i=0;i<notepad->getMenuCount();i++){
		printf("    :%d  [%s]\n",notepad->getCode(i),notepad->getName(i));
	 }
	 printf("    Quit for Exit\n\n");
	 std::cout<<"[QUERY]>";
	 std::cin>>command;
	 if (strcmp(command,"Quit")==0){
	 	break;
	 }
	 notepad->clickOnMenu(atoi(command));
    }
    delete command;
	delete notepad;
	delete win;
	delete title;
	return 0;
}
