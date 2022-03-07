#define BOOST_PYTHON_STATIC_LIB
#include "Spout.h"
#include "SpoutSender.h"
#include "SpoutReceiver.h"
#include <boost/python.hpp>

BOOST_PYTHON_MODULE(SpoutSDK)
{
	using namespace boost::python;

	class_<SpoutSender>("SpoutSender")
		.def("CreateSender", &SpoutSender::CreateSender)
		.def("SetSenderName", &SpoutSender::SetSenderName)
		.def("SendTexture", &SpoutSender::SendTexture)
		.def("ReleaseSender", &SpoutSender::ReleaseSender)
		;
	class_<SpoutReceiver>("SpoutReceiver")
		.def("pyCreateReceiver", &SpoutReceiver::pyCreateReceiver)
		.def("pyReceiveTexture", &SpoutReceiver::pyReceiveTexture)
		.def("ReleaseReceiver", &SpoutReceiver::ReleaseReceiver)
		.def("SetReceiverName", &SpoutReceiver::SetReceiverName)
		.def("GetWidth", &SpoutReceiver::GetWidth)
		.def("GetHeight", &SpoutReceiver::GetHeight)
		;
}