#include "EmptyFile.h"
#include <TopLevelInclude.h>

namespace NsInFile
{
	class ClassDefinedInSourceFile {};
}

void MissingIncludesUndefinedIdentifierFunction()
{
	NestedInclude nestedInclude; // Include already included on a nested header
	EmptyFile emptyFile; // File that has already been included.
	ClassDefinedInSourceFile classDefinedInSourceFile; // Class defined in the same file
	AmbigousClass ambigousClass; // Multiple results
	RedirectedFunction(); // Redirected headers
	ProjectClass projectClass; // Class in project
	ProjectTemplateClass<int> projectTemplateClass; // Template class in project
	ProjectStruct projectStruct; // Struct in project
	ProjectTypeDef projectTypeDef; // Typedef in project
	ProjectUnion projectUnion; // Union in project
	ProjectFunction(); // Function in project
	AliasedClass aliasedClass; // Aliased class in project
	IncludeDirClassInStoreNoExt includeDirClassInStoreNoExt; // Class from include dir in store without extension
	IncludeDirFunction(); // Function from file in IncludeDirectories
	IncludeSubDirClass includeSubDirClass; // Include from subfolder in IncludeDirectories
	IncludeWithSpacesClass includeWithSpacesClass; // Include with spaces in the path
	IncludeClassMultipleFoldersLimit includeClassMultipleFoldersLimit; // Limit on heuristics suggestions
}