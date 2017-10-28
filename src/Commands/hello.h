#ifndef hello_H
#define hello_H

#include "../CommandBase.h"

class hello : public CommandBase {
public:
	hello();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // hello_H
