#include "DispatchMessageTask.h"

#include "MessageChannel.h"

namespace Noesis
{
    namespace Javascript
    {
        namespace Debugging
        {
            DispatchMessageTask::DispatchMessageTask(MessageChannel& channel, System::String^ message)
                : channel(channel), message(message)
            {
            }

            void DispatchMessageTask::Run()
            {
                this->channel.DispatchProtocolMessage(this->message);
            }
        }
    }
}