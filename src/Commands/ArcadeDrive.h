/*
 * ArcadeDrive.h
 *
 *  Created on: Sep 30, 2016
 *      Author: nidhi
 */

#ifndef SRC_COMMANDS_ARCADEDRIVE_H_
#define SRC_COMMANDS_ARCADEDRIVE_H_
#include "DriveTrain.h"
#include "../CommandBase.h"

namespace wvrobotics {

class ArcadeDrive {
public:
	ArcadeDrive();
	virtual ~ArcadeDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

} /* namespace wvrobotics */

#endif /* SRC_COMMANDS_ARCADEDRIVE_H_ */
