namespace UsingNS2
{

}

namespace UsingNS
{
	class UsingNSNoIncsClass {};
}

using namespace UsingNS2;

void UsingNamespaceNoIncludesFunc()
{
	UsingNSNoIncsClass usingNSNoIncsClass;
}