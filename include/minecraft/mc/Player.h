#pragma once

#include <code/code.h>
#include <inttypes.h>

#include "Inventory.h"
#include "BlockPos.h"
#include "AABB.h"
#include "../mstd/WString.h"

namespace mc {
    // 0x0270E1A8
    class Player {
    public:
        void getDisplayName(mstd::wstring& ret) {
			code::Func<void, 0x026D2EDC, Player*, mstd::wstring&>()(this, ret);
		}
		
		bool isAllowedToFly() {
			return code::Func<bool, 0x0271AA10, Player*>()(this);
		}

        float getEyeHeight() {
			return code::Func<float, 0x027272C8, Player*>()(this);
		}
		
		// 0272A178 # Player::setXuid((PlayerUID))  sizeof (PlayerUID = )
		void setXuid(void* uid) {
			code::Func<void, 0x0272A178, Player*, void*>()(this, uid);
		}

		bool isAllowedToMine() {
			return code::Func<bool, 0x0272B284, Player*>()(this);
		}

		bool isAllowedToAttackAnimals() {
			return code::Func<bool, 0x0272B304, Player*>()(this);
		}

		bool isModerator() {
			return code::Func<bool, 0x0272B714, Player*>()(this);
		}

		float getUnderwaterLightLevel() {
			return code::Func<float, 0x0272CEE0, Player*>()(this);
		}

		void setUnderwaterLightLevel(float underwaterLightLevel) {
			code::Func<void, 0x0272CEE8, Player*, float>()(this, underwaterLightLevel);
		}

        uint32_t field_0x0;
		uint32_t field_0x4;
		uint32_t field_0x8;
		uint32_t field_0xC;
		uint32_t field_0x10;
		uint32_t field_0x14;
		uint32_t field_0x18;
		uint32_t field_0x1C;
		uint32_t field_0x20;
		uint32_t field_0x24;
		uint32_t field_0x28;
		uint32_t field_0x2C;
		uint32_t field_0x30;
		uint32_t field_0x34;
		uint32_t field_0x38;
		uint32_t field_0x3C;
		uint32_t field_0x40;
		uint32_t field_0x44;
		BlockPos pos1;
		BlockPos pos2;
		uint64_t field_0x60; 
		uint64_t field_0x68; 
		uint64_t field_0x70; 
		uint64_t field_0x78; 
		uint64_t field_0x80; 
		uint64_t field_0x88; 
		uint64_t field_0x90; 
		uint64_t field_0x98; 
		uint64_t field_0xA0; 
		uint64_t field_0xA8; 
		uint64_t field_0xB0; 
		uint64_t field_0xB8; 
		uint64_t field_0xC0; 
		uint64_t field_0xC8; 
		uint64_t field_0xD0; 
		uint64_t field_0xD8;
		uint64_t field_0xE0; 
		uint64_t field_0xE8;
		uint32_t field_0xF0;
		uint32_t field_0xF4;
		struct Level* lvl;  
		uint64_t field_0xFC; 
		uint64_t field_0x100;
		uint64_t field_0x108;
		double x;          
		double y;          
		double z;          
		double velocityX;  
		double velocityY;  
		double velocityZ;  
		float yaw;         
		float pitch;       
		uint32_t unk_0x0;  
		uint32_t unk_0x4;  
		AABB* aabb; 
		uint32_t field_0x15C;
		uint32_t field_0x160;
		uint32_t field_0x164;
		uint32_t field_0x168;
		uint32_t field_0x16C;
		uint32_t field_0x170;
		uint32_t field_0x174;
		uint32_t field_0x178;
		uint32_t field_0x17C;
		uint32_t field_0x180;
		uint32_t field_0x184;
		uint32_t field_0x188;
		uint32_t field_0x18C;
		uint32_t field_0x190;
		uint32_t field_0x194;
		uint32_t field_0x198;
		uint32_t field_0x19C;
		uint32_t field_0x1A0;
		uint32_t field_0x1A4;
		uint32_t field_0x1A8;
		uint32_t field_0x1AC;
		uint32_t field_0x1B0;
		uint32_t field_0x1B4;
		uint32_t field_0x1B8;
		uint32_t field_0x1BC;
		uint32_t field_0x1C0;
		uint32_t field_0x1C4;
		uint32_t field_0x1C8;
		uint32_t field_0x1CC;
		uint32_t field_0x1D0;
		uint32_t field_0x1D4;
		float step;
		uint32_t clipIguess;
		uint32_t field_0x1E0;
		uint32_t field_0x1E4;
		uint32_t field_0x1E8;
		uint32_t field_0x1EC;
		uint32_t field_0x1F0;
		uint32_t field_0x1F4;
		uint32_t field_0x1F8;
		uint32_t field_0x1FC;
		uint32_t field_0x200;
		uint32_t field_0x204;
		uint32_t field_0x208;
		uint32_t field_0x20C;
		uint32_t field_0x210;
		uint32_t field_0x214;
		uint32_t field_0x218;
		uint32_t field_0x21C;
		uint32_t field_0x220;
		uint32_t field_0x224;
		uint32_t field_0x228;
		uint32_t field_0x22C;
		uint32_t field_0x230;
		uint32_t field_0x234;
		uint32_t field_0x238;
		uint32_t field_0x23C;
		uint32_t field_0x240;
		uint32_t field_0x244;
		uint32_t field_0x248;
		uint32_t field_0x24C;
		uint32_t field_0x250;
		uint32_t field_0x254;
		uint32_t field_0x258;
		uint32_t field_0x25C;
		uint32_t field_0x260;
		uint32_t field_0x264;
		uint32_t field_0x268;
		uint32_t field_0x26C;
		uint32_t field_0x270;
		uint32_t field_0x274;
		uint32_t field_0x278;
		uint32_t field_0x27C;
		uint32_t field_0x280;
		uint32_t field_0x284;
		uint32_t field_0x288;
		uint32_t field_0x28C;
		uint32_t field_0x290;
		uint32_t field_0x294;
		uint32_t field_0x298;
		uint32_t field_0x29C;
		uint32_t field_0x2A0;
		uint32_t field_0x2A4;
		uint32_t field_0x2A8;
		uint32_t field_0x2AC;
		uint32_t field_0x2B0;
		uint32_t field_0x2B4;
		uint32_t field_0x2B8;
		uint32_t field_0x2BC;
		uint32_t field_0x2C0;
		uint32_t field_0x2C4;
		uint32_t field_0x2C8;
		uint32_t field_0x2CC;
		uint32_t field_0x2D0;
		uint32_t field_0x2D4;
		uint32_t field_0x2D8;
		uint32_t field_0x2DC;
		uint32_t field_0x2E0;
		uint32_t field_0x2E4;
		uint32_t field_0x2E8;
		uint32_t field_0x2EC;
		uint32_t field_0x2F0;
		uint32_t field_0x2F4;
		uint32_t field_0x2F8;
		uint32_t field_0x2FC;
		uint32_t field_0x300;
		uint32_t field_0x304;
		uint32_t field_0x308;
		uint32_t field_0x30C;
		uint32_t field_0x310;
		uint32_t field_0x314;
		uint32_t field_0x318;
		uint32_t field_0x31C;
		uint32_t field_0x320;
		uint32_t field_0x324;
		uint32_t field_0x328;
		uint32_t field_0x32C;
		uint32_t field_0x330;
		uint32_t field_0x334;
		uint32_t field_0x338;
		uint32_t field_0x33C;
		uint32_t field_0x340;
		uint32_t field_0x344;
		uint32_t field_0x348;
		uint32_t field_0x34C;
		uint32_t field_0x350;
		uint32_t field_0x354;
		uint32_t field_0x358;
		uint32_t field_0x35C;
		uint32_t field_0x360;
		uint32_t field_0x364;
		uint32_t field_0x368;
		uint32_t field_0x36C;
		uint32_t field_0x370;
		uint32_t field_0x374;
		uint32_t field_0x378;
		uint32_t field_0x37C;
		uint32_t field_0x380;
		uint32_t field_0x384;
		uint32_t field_0x388;
		uint32_t field_0x38C;
		uint32_t field_0x390;
		uint32_t field_0x394;
		uint32_t field_0x398;
		uint32_t field_0x39C;
		uint32_t field_0x3A0;
		uint32_t field_0x3A4;
		uint32_t field_0x3A8;
		uint32_t field_0x3AC;
		uint32_t field_0x3B0;
		uint32_t field_0x3B4;
		uint32_t field_0x3B8;
		uint32_t field_0x3BC;
		uint32_t field_0x3C0;
		uint32_t field_0x3C4;
		uint32_t field_0x3C8;
		uint32_t field_0x3CC;
		uint32_t field_0x3D0;
		uint32_t field_0x3D4;
		uint32_t field_0x3D8;
		uint32_t field_0x3DC;
		uint32_t field_0x3E0;
		uint32_t field_0x3E4;
		uint32_t field_0x3E8;
		uint32_t field_0x3EC;
		uint32_t field_0x3F0;
		uint32_t field_0x3F4;
		uint32_t field_0x3F8;
		uint32_t field_0x3FC;
		uint32_t field_0x400;
		uint32_t field_0x404;
		uint32_t field_0x408;
		uint32_t field_0x40C;
		uint32_t field_0x410;
		uint32_t field_0x414;
		uint32_t field_0x418;
		uint32_t field_0x41C;
		uint32_t field_0x420;
		uint32_t field_0x424;
		uint32_t field_0x428;
		uint32_t field_0x42C;
		uint32_t field_0x430;
		uint32_t field_0x434;
		uint32_t field_0x438;
		uint32_t field_0x43C;
		uint32_t field_0x440;
		uint32_t field_0x444;
		uint32_t field_0x448;
		uint32_t field_0x44C;
		uint32_t field_0x450;
		uint32_t field_0x454;
		uint32_t field_0x458;
		uint32_t field_0x45C;
		uint32_t field_0x460;
		uint32_t field_0x464;
		uint32_t field_0x468;
		uint32_t field_0x46C;
		uint32_t field_0x470;
		uint32_t field_0x474;
		uint32_t field_0x478;
		uint32_t field_0x47C;
		uint32_t field_0x480;
		uint32_t field_0x484;
		uint32_t field_0x488;
		uint32_t field_0x48C;
		uint32_t field_0x490;
		uint32_t field_0x494;
		uint32_t field_0x498;
		uint32_t field_0x49C;
		uint32_t field_0x4A0;
		uint32_t field_0x4A4;
		uint32_t field_0x4A8;
		uint32_t field_0x4AC;
		uint32_t field_0x4B0;
		uint32_t field_0x4B4;
		uint32_t field_0x4B8;
		uint32_t field_0x4BC;
		uint32_t field_0x4C0;
		uint32_t field_0x4C4;
		uint32_t field_0x4C8;
		uint32_t field_0x4CC;
		uint32_t field_0x4D0;
		uint32_t field_0x4D4;
		uint32_t field_0x4D8;
		uint32_t field_0x4DC;
		uint32_t field_0x4E0;
		uint32_t field_0x4E4;
		uint32_t field_0x4E8;
		uint32_t field_0x4EC;
		uint32_t field_0x4F0;
		uint32_t field_0x4F4;
		uint32_t field_0x4F8;
		uint32_t field_0x4FC;
		uint32_t field_0x500;
		uint32_t field_0x504;
		uint32_t field_0x508;
		uint32_t field_0x50C;
		uint32_t field_0x510;
		uint32_t field_0x514;
		uint32_t field_0x518;
		uint32_t field_0x51C;
		uint32_t bowPower; // IDK has something to do with Bows i guess
		uint32_t field_0x524;
		uint32_t field_0x528;
		uint32_t field_0x52C;
		uint32_t field_0x530;
		uint32_t field_0x534;
		uint32_t field_0x538;
		uint32_t field_0x53C;
		uint32_t field_0x540;
		uint32_t field_0x544;
		uint32_t field_0x548;
		uint32_t field_0x54C;
		uint32_t field_0x550;
		uint32_t field_0x554;
		uint32_t field_0x558;
		uint32_t field_0x55C;
		uint32_t field_0x560;
		uint32_t field_0x564;
		uint32_t field_0x568;
		uint32_t field_0x56C;
		uint32_t field_0x570;
		uint32_t field_0x574;
		uint32_t field_0x578;
		uint32_t field_0x57C;
		uint32_t field_0x580;
		uint32_t field_0x584;
		uint32_t field_0x588;
		uint32_t field_0x58C;
		uint32_t field_0x590;
		uint32_t field_0x594;
		uint32_t field_0x598;
		uint32_t field_0x59C;
		uint32_t field_0x5A0;
		uint32_t field_0x5A4;
		uint32_t field_0x5A8;
		uint32_t field_0x5AC;
		uint32_t field_0x5B0;
		uint32_t field_0x5B4;
		uint32_t field_0x5B8;
		uint32_t field_0x5BC;
		uint32_t field_0x5C0;
		uint32_t field_0x5C4;
		uint32_t field_0x5C8;
		uint32_t field_0x5CC;
		uint32_t field_0x5D0;
		uint32_t field_0x5D4;
		uint32_t field_0x5D8;
		uint32_t field_0x5DC;
		uint32_t field_0x5E0;
		uint32_t field_0x5E4;
		uint32_t field_0x5E8;
		uint32_t field_0x5EC;
		Inventory* inventory;
		uint32_t field_0x5F4;
		uint32_t field_0x5F8;
		uint32_t field_0x5FC;
		uint32_t field_0x600;
		uint32_t field_0x604;
		uint32_t field_0x608;
		uint32_t field_0x60C;
		uint32_t field_0x610;
		uint32_t field_0x614;
		uint32_t field_0x618;
		uint32_t field_0x61C;
		uint32_t field_0x620;
		uint32_t field_0x624;
		uint32_t field_0x628;
		uint32_t field_0x62C;
		uint32_t field_0x630;
		uint32_t field_0x634;
		uint32_t field_0x638;
		uint32_t field_0x63C;
		uint32_t field_0x640;
		uint32_t field_0x644;
		uint32_t field_0x648;
		uint32_t field_0x64C;
		uint32_t field_0x650;
		uint32_t field_0x654;
		uint32_t field_0x658;
		uint32_t field_0x65C;
		uint32_t field_0x660;
		uint32_t field_0x664;
		uint32_t field_0x668;
		uint32_t field_0x66C;
		uint32_t field_0x670;
		uint32_t field_0x674;
		uint32_t field_0x678;
		uint32_t field_0x67C;
		uint32_t field_0x680;
		uint32_t field_0x684;
		uint32_t field_0x688;
		uint32_t field_0x68C;
		uint32_t field_0x690;
		uint32_t field_0x694;
		uint32_t field_0x698;
		uint32_t field_0x69C;
		mstd::wstring name;
		uint32_t field_0x6C0;
		uint32_t field_0x6C4;
		uint32_t field_0x6C8;
		uint32_t field_0x6CC;
		uint32_t field_0x6D0;
		uint32_t field_0x6D4;
		uint32_t field_0x6D8;
		uint32_t field_0x6DC;
		uint32_t field_0x6E0;
		uint32_t field_0x6E4;
		uint32_t field_0x6E8;
		uint32_t field_0x6EC;
		uint32_t field_0x6F0;
		uint32_t field_0x6F4;
		uint32_t field_0x6F8;
		uint32_t field_0x6FC;
		uint32_t field_0x700;
		uint32_t field_0x704;
		uint32_t field_0x708;
		uint32_t field_0x70C;
		uint32_t field_0x710;
		uint32_t field_0x714;
		uint32_t field_0x718;
		uint32_t field_0x71C;
		uint32_t field_0x720;
		uint32_t field_0x724;
		uint32_t field_0x728;
		uint32_t field_0x72C;
		uint32_t field_0x730;
		float bhop; // idk
		uint32_t field_0x738;
		uint32_t field_0x73C;
		mboost::shared_ptr<uint32_t> field_0x740; // i Guess that's Kinda Right, Maybe change type from uint32_t to *UNKNOWN*
		uint32_t field_0x748;
		uint32_t field_0x74C;
		uint32_t field_0x750;
		uint32_t field_0x754;
		uint32_t field_0x758;
		uint32_t field_0x75C;
		uint32_t field_0x760;
		uint32_t field_0x764;
		uint32_t field_0x768;
		uint32_t field_0x76C;
		uint32_t field_0x770;
		uint32_t field_0x774;
		uint32_t field_0x778;
		uint32_t field_0x77C;
		uint32_t field_0x780;
		UUID uuid;
		uint32_t field_0x794;
		uint32_t field_0x798;
		uint32_t field_0x79C;
		uint32_t field_0x7A0;
		uint32_t field_0x7A4;
		uint32_t field_0x7A8;
		uint32_t field_0x7AC;
		uint32_t field_0x7B0;
		uint32_t field_0x7B4;
		uint32_t field_0x7B8;
		uint32_t field_0x7BC;
		uint32_t field_0x7C0;
		uint32_t field_0x7C4;
		uint32_t field_0x7C8;
		uint32_t field_0x7CC;
		uint32_t field_0x7D0;
		uint32_t field_0x7D4;
		uint32_t field_0x7D8;
		uint32_t skin;
		uint32_t cape;
		uint32_t colourIndex;
		uint32_t field_0x7E8;
		uint32_t field_0x7EC;
		uint32_t field_0x7F0;
		uint32_t field_0x7F4;
		uint32_t field_0x7F8;
		uint32_t field_0x7FC;
		uint32_t field_0x800;
		uint32_t field_0x804;
		uint32_t field_0x808;
		uint32_t field_0x80C;
		uint32_t field_0x810;
		uint32_t field_0x814;
		uint32_t field_0x818;
		uint32_t field_0x81C;
		uint32_t field_0x820;
		uint32_t field_0x824;
		uint32_t field_0x828;
		uint32_t field_0x82C;
		uint32_t field_0x830;
		uint32_t field_0x834;
		uint32_t field_0x838;
		uint32_t field_0x83C;
		uint32_t field_0x840;
		uint32_t field_0x844;
		uint32_t field_0x848;
		uint32_t field_0x84C;
		uint32_t field_0x850;
		uint32_t field_0x854;
		uint32_t field_0x858;
		uint32_t field_0x85C;
		uint32_t field_0x860;
		uint32_t field_0x864;
    };
}