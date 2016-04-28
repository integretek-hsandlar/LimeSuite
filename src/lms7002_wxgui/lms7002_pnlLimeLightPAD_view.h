#ifndef __lms7002_pnlLimeLightPAD_view__
#define __lms7002_pnlLimeLightPAD_view__

/**
@file
Subclass of pnlLimeLightPAD_view, which is generated by wxFormBuilder.
*/

#include "lms7002_wxgui.h"

//// end generated include
#include <map>
#include "lms7_api.h"
namespace lime{

}
/** Implementing pnlLimeLightPAD_view */
class lms7002_pnlLimeLightPAD_view : public pnlLimeLightPAD_view
{
	protected:
		// Handlers for pnlLimeLightPAD_view events.
		void ParameterChangeHandler( wxCommandEvent& event );
        void ParameterChangeHandler(wxSpinEvent& event);
		void onbtnReadVerRevMask( wxCommandEvent& event );
	public:
		/** Constructor */
		lms7002_pnlLimeLightPAD_view( wxWindow* parent );
	//// end generated class members
		lms7002_pnlLimeLightPAD_view(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL);
    void Initialize(lms_device_t* pControl);
    void UpdateGUI();
protected:
    lms_device_t* lmsControl;
	std::map<wxWindow*, LMS7Parameter> wndId2Enum;
};

#endif // __lms7002_pnlLimeLightPAD_view__
