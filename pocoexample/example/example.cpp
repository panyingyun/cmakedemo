// #include <iostream>

// #include "Poco/BasicEvent.h"
// #include "Poco/Delegate.h"

// using Poco::BasicEvent;
// using Poco::Delegate;

// class Source {
// public:
    // BasicEvent<int> theEvent;

    // void fireEvent(int n) { theEvent(this, n); }
// };

// class Target {
// public:
    // void onEvent(const void* pSender, int& arg) { std::cout << "onEvent: " << arg << std::endl; }
// };

// int main(int argc, char** argv) {`
    // Source source;
    // Target target;

    // source.theEvent += Delegate<Target, int>(&target, &Target::onEvent);

    // source.fireEvent(42);

    // source.theEvent -= Delegate<Target, int>(&target, &Target::onEvent);

    // return 0;
// }


// #include "Poco/Thread.h"
// #include "Poco/Runnable.h"
// #include <iostream>

// class HelloRunnable: public Poco::Runnable
// {
       // virtual void run()
       // {
            // std::cout << "Hello, world!" << std::endl;
       // }
// };

// int main(int argc, char** argv)
// {
       // HelloRunnable runnable;
       // Poco::Thread thread;
       // thread.start(runnable);
       // thread.join();
       // return 0;
// }


#include "Poco/Logger.h"
#include "Poco/SplitterChannel.h"
#include "Poco/ConsoleChannel.h"
#include "Poco/SimpleFileChannel.h"
#include "Poco/AutoPtr.h"
using Poco::Logger;
using Poco::SplitterChannel;
using Poco::ConsoleChannel;
using Poco::SimpleFileChannel;
using Poco::AutoPtr;
int main(int argc, char** argv)
{
    AutoPtr<ConsoleChannel> pCons(new ConsoleChannel);
    AutoPtr<SimpleFileChannel> pFile(new SimpleFileChannel("test.log"));
    AutoPtr<SplitterChannel> pSplitter(new SplitterChannel);
    pSplitter->addChannel(pCons);
    pSplitter->addChannel(pFile);
    Logger::root().setChannel(pSplitter);
    Logger::root().information("This is a test");
    return 0;
}
