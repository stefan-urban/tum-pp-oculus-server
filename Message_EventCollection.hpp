#ifndef EDVSMESSAGE_EVENTSCOLLECTION_H
#define EDVSMESSAGE_EVENTSCOLLECTION_H


#include "Message.hpp"
#include "EdvsEventsCollection.hpp"


class Message_EventCollection : public Message
{
public:
    void set_events(EdvsEventsCollection e);

    EdvsEventsCollection events()
    {
        return events_;
    }

    std::string serialize();
    void unserialize(std::string const *str);

private:

    EdvsEventsCollection events_;

    std::string convert_event_to_string(Edvs::Event);
    Edvs::Event convert_string_to_event(const std::string str);

};


#endif // EDVSMESSAGE_EVENTSCOLLECTION_H