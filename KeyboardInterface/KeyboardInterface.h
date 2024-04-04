
#include <string>
#include "Timer.h"

class KeyboardInterface
{
private:
	// Relative path to chroma animations
	std::string filePath_;

	// timer class for restoring blank keyboard after a short period of time displaying a key. 
	Timer timer_;

	// string to follow output character in animation filename. Default is "_Keyboard.chroma"
	std::string postfix_;
public:
	// Constructor takes a relative path to the folder containing the animations for each letter.
	// Keyboard lights up with no letters highlighted
	KeyboardInterface(std::string filepath);

	// Destructor
	virtual ~KeyboardInterface();

	//  Displays the chroma animation corresponding to the character passed as a parameter. 
	// expects chroma animation relative path to be in the form <filePath_><c><postfix>
	void DisplayCharacter(char c);

	// Displays the blank keyboard animation
	void DisplayBlankKeyboard();

	// Displays the blank keyboard animation 
	static void DisplayBlankKeyboardStatic(void* thisPtr);
};
