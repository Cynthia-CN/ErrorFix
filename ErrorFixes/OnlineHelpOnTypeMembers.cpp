#include "OnlineHelpClass.h"

void OnlineHelpOnTypeMembersFunction()
{
	OnlineHelpNS::OnlineHelpClass *onlineHelpClass1;
	OnlineHelpNS::OnlineHelpClass onlineHelpClass2;
	onlineHelpClass1->NonExistantFunction();
	onlineHelpClass1->NonExistantMember;
	onlineHelpClass2.NonExistantMember;
}