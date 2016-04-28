#ifndef __lms7002_dlgVCOfrequencies__
#define __lms7002_dlgVCOfrequencies__

/**
@file
Subclass of dlgVCOfrequencies, which is generated by wxFormBuilder.
*/
#include "lms7_api.h"
#include "lms7002_wxgui.h"

//// end generated include
namespace lime{
}
/** Implementing dlgVCOfrequencies */
class lms7002_dlgVCOfrequencies : public dlgVCOfrequencies
{
	protected:
		// Handlers for dlgVCOfrequencies events.
		void OnBtnOkClick( wxCommandEvent& event );
		void OnBtnCancelClick( wxCommandEvent& event );
        void OnSaveFile(wxCommandEvent& event);
        void OnLoadFile(wxCommandEvent& event);
	public:
		/** Constructor */
		lms7002_dlgVCOfrequencies( wxWindow* parent, lms_device_t *plmsControl);
	//// end generated class members
protected:
    lms_device_t* lmsControl;
	
};

#endif // __lms7002_dlgVCOfrequencies__
