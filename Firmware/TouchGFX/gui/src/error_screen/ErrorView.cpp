#include <gui/error_screen/ErrorView.hpp>

ErrorView::ErrorView()
{

}

void ErrorView::setupScreen()
{
	/* Set error report */

	// 12V input
	if (ovenErrorCodes.ADC12V == 1)
	{
		Unicode::snprintf(txtErrADC12VBuffer, TXTERRADC12V_SIZE, "%c", "NOK");
	}
	else
	{
		Unicode::snprintf(txtErrADC12VBuffer, TXTERRADC12V_SIZE, "%s", "OK");
	}
	txtErrADC12V.invalidate();

	// 3.3V Output
	if (ovenErrorCodes.ADC3V3 == 1)
	{
		Unicode::snprintf(txtErrADC3V3Buffer, TXTERRADC3V3_SIZE, "%s", "NOK");
	}
	else
	{
		Unicode::snprintf(txtErrADC3V3Buffer, TXTERRADC3V3_SIZE, "%s", "OK");
	}
	txtErrADC3V3.invalidate();

	// Thermocouple 1
	if (ovenErrorCodes.thermoCouple1Err == 1)
	{
		Unicode::snprintf(txtErrTC1Buffer, TXTERRTC1_SIZE, "%s", "NOK");
	}
	else
	{
		Unicode::snprintf(txtErrTC1Buffer, TXTERRTC1_SIZE, "%s", "OK");
	}
	txtErrTC1.invalidate();

	// Thermocouple 2
	if (ovenErrorCodes.thermoCouple2Err == 1)
	{
		Unicode::snprintf(txtErrTC2Buffer, TXTERRTC2_SIZE, "%s", "NOK");
	}
	else
	{
		Unicode::snprintf(txtErrTC2Buffer, TXTERRTC2_SIZE, "%s", "OK");
	}
	txtErrTC2.invalidate();

	// NTC
	if (ovenErrorCodes.NTCErr == 1)
	{
		Unicode::snprintf(txtErrNTCBuffer, TXTERRNTC_SIZE, "%s", "NOK");
	}
	else
	{
		Unicode::snprintf(txtErrNTCBuffer, TXTERRNTC_SIZE, "%s", "OK");
	}
	txtErrNTC.invalidate();
    ErrorViewBase::setupScreen();
}

void ErrorView::tearDownScreen()
{
    ErrorViewBase::tearDownScreen();
}
