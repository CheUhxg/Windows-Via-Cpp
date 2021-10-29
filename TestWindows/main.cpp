#include <Windows.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	DWORD processID = GetCurrentProcessId();
	DWORD sessionID;
	if (ProcessIdToSessionId(processID, &sessionID))
		printf_s("Process[%u] runs in session[%u]", processID, sessionID);
	else
		printf_s("Unable to get session for process[%u]", processID);
}