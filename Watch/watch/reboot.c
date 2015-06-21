#include "contiki.h"
#include "window.h"
#include "grlib/grlib.h"
#include "system.h"
#include "icons.h"

uint8_t reboot_to_normal(uint8_t ev, uint16_t lparam, void* rparam)
{
	switch (ev)
	{
	case EVENT_WINDOW_CREATED:
		window_messagebox(ICON_LARGE_WARNING, "Reboot Kreyos (Normal Mode)?",
		NOTIFY_CONFIRM);
		return 0;

	case EVENT_NOTIFY_RESULT:
		window_close();
		if (lparam == 1)
		{
			system_rebootToNormal();
			// return 1;
		}
		break;
	}

	return 0;
}

uint8_t reboot_to_test(uint8_t ev, uint16_t lparam, void* rparam)
{
	switch (ev)
	{
	case EVENT_WINDOW_CREATED:
		window_messagebox(ICON_LARGE_WARNING, "Reboot Kreyos to Test Mode?",
		NOTIFY_CONFIRM);
		return 0;

	case EVENT_NOTIFY_RESULT:
		window_close();
		if (lparam == 1)
		{
			system_rebootToTest();
			// return 1;
		}
		break;
	}

	return 0;
}
