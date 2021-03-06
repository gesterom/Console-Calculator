#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "25";
	static const char MONTH[] = "06";
	static const char YEAR[] = "2017";
	static const char UBUNTU_VERSION_STYLE[] =  "17.06";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 1;
	static const long MINOR  = 1;
	static const long BUILD  = 144;
	static const long REVISION  = 733;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 395;
	#define RC_FILEVERSION 1,1,144,733
	#define RC_FILEVERSION_STRING "1, 1, 144, 733\0"
	static const char FULLVERSION_STRING [] = "1.1.144.733";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 18;
	

}
#endif //VERSION_H
