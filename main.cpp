// Filename: main.cpp
#include "systemclass.h"

int WINAPI WinMain(
	HINSTANCE	Instance,
	HINSTANCE	PrevInstance,
	PSTR		CmdLine,
	int			ShowCmd
)
{
	SystemClass *System;
	bool result;

	// Create the system object.
	System = new SystemClass;

	// Initialize and run the system object.
	result = System->Initialize();
	if (result)
	{
		System->Run();
	}

	// Shutdown and release the system object
	System->Shutdown();
	delete System;
	System = 0;

	return 0;
}