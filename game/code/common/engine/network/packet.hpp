#ifndef PACKET_HPP
#define PACKET_HPP

//////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// FORWARD DECLARATIONS
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// CONSTANTS
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// CLASSES
//////////////////////////////////////////////////////

class Packet
{
public:	

	Packet( char const * const data, int size );
	~Packet();

	char* GetPacketData();
	int GetPacketSize();

	char* UnpackPacketData();
	int UnpackPacketDataSize();
	
private:	

	char* mPacketDataBuffer;
	int mPacketSize;

};

#endif