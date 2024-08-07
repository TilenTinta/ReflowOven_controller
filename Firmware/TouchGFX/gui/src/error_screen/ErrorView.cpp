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
		Unicode::snprintf(txtErrADC12VBuffer, TXTERRADC12V_SIZE, "NOK");
	}
	else
	{
		Unicode::snprintf(txtErrADC12VBuffer, TXTERRADC12V_SIZE, "OK");
	}
	txtErrADC12V.invalidate();

	// 3.3V Output
	if (ovenErrorCodes.ADC3V3 == 1)
	{
		Unicode::snprintf(txtErrADC3V3Buffer, TXTERRADC3V3_SIZE, "NOK");
	}
	else
	{
		Unicode::snprintf(txtErrADC3V3Buffer, TXTERRADC3V3_SIZE, "OK");
	}
	txtErrADC3V3.invalidate();

	// Thermocouple 1
	if (ovenErrorCodes.thermoCouple1Err == 1)
	{
		Unicode::snprintf(txtErrTC1Buffer, TXTERRTC1_SIZE, "NOK");
	}
	else
	{
		Unicode::snprintf(txtErrTC1Buffer, TXTERRTC1_SIZE, "OK");
	}
	txtErrTC1.invalidate();

	// Thermocouple 2
	if (ovenErrorCodes.thermoCouple2Err == 1)
	{
		Unicode::snprintf(txtErrTC2Buffer, TXTERRTC2_SIZE, "NOK");
	}
	else
	{
		Unicode::snprintf(txtErrTC2Buffer, TXTERRTC2_SIZE, "OK");
	}
	txtErrTC2.invalidate();

	// NTC
	if (ovenErrorCodes.NTCErr == 1)
	{
		Unicode::snprintf(txtErrNTCBuffer, TXTERRNTC_SIZE, "NOK");
	}
	else
	{
		Unicode::snprintf(txtErrNTCBuffer, TXTERRNTC_SIZE, "OK");
	}
	txtErrNTC.invalidate();

	// Over temperature protection
	if (ovenErrorCodes.overTemp == 1)
	{
		Unicode::snprintf(txtErrOverTBuffer, TXTERROVERT_SIZE, "NOK");
	}
	else
	{
		Unicode::snprintf(txtErrOverTBuffer, TXTERROVERT_SIZE, "OK");
	}
	txtErrOverT.invalidate();

	// Thermal runaway
	if (ovenErrorCodes.thermalRunaway == 1)
	{
		Unicode::snprintf(txtErrTrnwyBuffer, TXTERRTRNWY_SIZE, "NOK");
	}
	else
	{
		Unicode::snprintf(txtErrTrnwyBuffer, TXTERRTRNWY_SIZE, "OK");
	}
	txtErrTrnwy.invalidate();

    ErrorViewBase::setupScreen();
}

void ErrorView::tearDownScreen()
{
    ErrorViewBase::tearDownScreen();
}
