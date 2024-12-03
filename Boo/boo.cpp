#include "whereami.h"
#include "spdlog/spdlog.h"

int main()
{
	char chPath[1024];
	int cap = wai_getExecutablePath(chPath, sizeof(chPath) / sizeof(char), nullptr);
	assert(cap != -1);
	chPath[cap - 1] = '\0';
	SPDLOG_INFO("Hello, Boo! {}", chPath);
	return 0;
}
