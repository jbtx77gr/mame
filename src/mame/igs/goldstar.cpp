// license:BSD-3-Clause
// copyright-holders: David Haywood, Roberto Fresca, Vas Crabb

/***************************************************************************

  Golden Star
  Cherry Master
  Lucky 8 Lines
  Amcoe CGA games

  Golden Star and Cherry Master seem to be almost the same thing, running on
  different hardware.  There are also various bootlegs / hacks, it isn't clear
  exactly what hardware each runs on, some appear to have no OKI for example.

  Driver by Mirko Buffoni.
  Additional Work: David Haywood & Roberto Fresca.

  The vast majority of the sets in here are probably bootlegs and hacks
  hence the slightly different PCBs, ROM layouts, slightly hacked program ROMs
  etc.

****************************************************************************

  Game notes:
  -----------

  * Wing Game Boards & Games (Originals):

  Various types
    - older PCBs can be green, blue or black
    - newer PCBs are green
    - might also be short & long types of each

  Sub-boards are connected into the Z80 socket and all appear to be bootleg
  upgrades/conversions/hacks.  Are any of them legit?

  W-4   New Lucky 8 Lines
        Bingo
  F-5   New Lucky 8 Lines w/ Witch Bonus - bootleg/hack??
  W-6   Fever Chance
  W-7   Skill Chance
  W-8   Bonus Chance
  W-11  Lucky Star


  * New Lucky 8 Lines:

  Sometimes the game boots with a "Coin Jam" message. Just reset the game to normalize.
  There are 2 sets of controls. Press the BIG key to switch between them.

  Press 9 to enter settings, press START to exit.
  Press 0 to enter stats, press START to exit.
  Keeping pressed 9 + 0 + RESET (F3), will enter the test mode. Press RESET to exit.

  New Lucky 8 Lines has two sets of controls than can be switched through each 'BIG' button.
  Even you can switch controls in middle of the game. When a set of controls are in use,
  the other set is blocked till 'BIG' button is pressed.


  * New Lucky 8 Lines / New Super 8 Lines:

  This set has a regular New Lucky 8 Lines, but allowing bets up to 64.
  It has different settings/parameters, and additional graphics for a game
  called New Super 8 Lines. There are basic reels tiles with a semi-naked woman,
  a sort of Super Mario character from Nintendo, clouds and stars...

  Still can't find how to switch between games.


  * New Lucky 8 Lines / New Super 8 Lines (Witch Bonus):

  Same as above, but allowing bets up to 32 credits.
  It also has different settings/parameters, and a rare feature: the 'Witch Bonus'
  (from Witch Card poker game) is present in the double-up.


  * Cherry Bonus III:

  If a hopper status error appear when the player try to take score,
  pressing Key Out (W) will discharge the credits won.

  Cherry Bonus III has two sets of controls than can be switched through each 'BIG' button.
  Even you can switch controls in middle of the game. When a set of controls are in use,
  the other set is blocked till 'BIG' button is pressed.

  Controls Set2 is using reels stop buttons from Controls Set1.


  * Cherry Master V4 (set 2)

  This set is supposed to be a kind of "stealth".
  The game is hidden into a Tetris game and could be triggered/switched
  in some way. Seems that it was designed for locations/countries where
  gambling games are/were not allowed.

  The game is booting as Cherry Master V4 instead of Tetris ATM...

  Even when the gambling game is working properly, the game is flagged
  as NOT_WORKING till can figure out how can switch between games.


  * Cherry Master '99 (V9B.00)

  Inputs are hooked up as DIP switches for testing purposes.  You can access
  some kind of palette test by momentarily flipping input 2-8 to On position.
  You can access the input port test by flipping input 2-7 to On position while
  the game boots (like other Cherry Master games).  All inputs are hooked up
  correctly.

  When not in the input test, the game appears to be stuck in a loop resetting
  itself after initialising NVRAM.


  * Cherry Master '99 (V9B.00 bootleg / hack)

  Appears to be a bootleg/hack of the other Dyna set - NVRAM initialisation has
  been changed from "DYNA QL-1 V9B.00" to "     QQ-1 V9B.0", very few other
  program ROM changes besides hacking out the Dyna name everywhere.


  * Kkoj Noli

  kkuj nol-i / kkoj noli (better romanization).

  kkuj = stab/kill
  nol-i = bees

  The little red box at bottom of the title translates as "South Korea"

  Seems to be a hack of Lucky 8 Lines.

  - Childish graphics.
  - For Amusement only... There is no payout/keyout line accessed.
  - No stats or service mode.
  - No NVRAM.
  - Two sets of player's controls, as lucky8.
  - No ay8910, so no extra ports.
  - Only 1 DIP switches bank.

  Nominated for the *WORST* hacked gambling game EVER!


  * unkch sets

  In unkch1/unkch2 the payout rate is set with a combination of DSW1-3 (Punti)
  and DSW3-3 (Gettoni/Ticket).  If Punti is set to Ticket, the payout rate is
  the second number of the Gettoni/Ticket setting (100 or 200).  If Punti is set
  to Gettoni, the payout rate is the first number of the Gettoni/Ticket setting
  (10 or 20).  If your points/credits aren't a multiple of the payout rate, you
  lose the remainder.  If you hit Key Out when your points/credits are less than
  100, you get nothing at all.  If Gettoni/Ticket is set to 20/200 and you hit
  Key Out when credits/points are at least 100 but less than 200, tickets will
  be dispensed continuously until you insert another coin - game bug or MAME
  bug?

  Payout rate in unkch3 seems to be set with DSW1-3 (Punti) directly.  This game
  also seems to be able to easily get into a state where tickets are dispensed
  continuously.  Maybe there's something more complicated about the ticket
  dispenser hookup that we're missing?

  In unkch4 the payout rate is set with DSW1-3 (Punti) - 100 for Ticket and 10
  for Gettoni.  It's also nice enough to let you keep the remainder if you hit
  Key Out when your credits/points aren't a multiple of 100.  This is the only
  set that doesn't have issues with dispensing tickets continuously

  unkch3 has a handy input test mode.  To access it, first enable it with DSW4-5,
  then hold the Settings button (9) during boot.


  * Crazy Bonus (crazybon):

  Appears to be from a bootleg conversion set for Poker Master (pkrmast).  There
  is another undumped bootleg conversion set advertised that displays Spirit or
  Dyna copyright depending on DIP settings and has both poker and slots games (the
  set in MAME displays "Crazy Co." copyright and only has a slots game).

  This is a stealth set that hides behind a fake Windows ME desktop if DSW2-6 is
  off.  Push Start followed by Bet five time to access the game.  It will return
  to the desktop after the game is over.  Colours currently appear to be bad on
  the desktop screen.  DSW3-8 disables the button sequence for accessing the game.

  Judging from the contents of the graphics ROMs and the Stats screens, there's a
  poker game buried in there, but there's apparently no way to access it.

  Hold Settings button (9) during boot to access switch test.
  Hold Stats button (0) during boot to access palette test.


  * Super Nove (Playmark) (super9)

  This game has similar memory map than Golden Star. The program writes to init
  the reels RAM/palette (bp C11A), then transfer the control to PC 253h where
  starts to write to some NVRAM chunks. Unfortunately at PC 2DBh there is a call
  to 0C33h, where there are only ASCII strings instead of subroutines.
  Also there are some other calls to the same range, that also lack of code.


  * Tetris + Cherry Master (+K, Canada Version, encrypted) (cmtetrisb)

  Start the game and you can find some garbage due to wrong graphics banks.
  Press the key "insert" to throttle the game. Keep the key pressed till
  you can see what seems the attract working (still with wrong graphics).

  Seems to be sooo slow.... (interrupts?)


  * Bingo (Wing)

  It has a different machine driver to support the different pos of gfx
  layers. I strongly suspect there is a register to adjust the layer position.


  * New Lucky 8 Lines (A900 2nd gen, Cross and Bell Bonus)
  
  This game has new features.
  The game has stops buttons (stops 1-2-3, and stop all) to stop the reels.

  Once you win a game, press STOP 2 to enter the bonus stage / double up,
  and then use STOP 1 & STOP 3 to choose left or right.

  If you get 3 "BAR3" with at least 32 bets, you'll get the bonus listed on lower left.

  To enter the Cross Bonus (JP Chance) you need to bet at least 32 credits.


***************************************************************************/


#include "emu.h"

#include "cpu/m6805/m68705.h"
#include "cpu/mcs51/mcs51.h"
#include "cpu/z80/z80.h"
#include "machine/ds2401.h"
#include "machine/i8255.h"
#include "machine/nvram.h"
#include "machine/segacrp2_device.h"
#include "machine/segacrpt_device.h"
#include "machine/ticket.h"
#include "sound/ay8910.h"
#include "sound/okim6295.h"
#include "sound/sn76496.h"
#include "sound/ymopl.h"
#include "video/ramdac.h"

#include "emupal.h"
#include "screen.h"
#include "speaker.h"
#include "tilemap.h"

#include <algorithm>

#include "bingowng.lh"
#include "cherryb3.lh"
#include "chrygld.lh"
#include "cmaster.lh"
#include "cmasterb.lh"
#include "cmasterc.lh"
#include "cmezspin.lh"
#include "cmpacman.lh"
#include "cmv4.lh"
#include "crazybon.lh"
#include "goldstar.lh"
#include "lucky8.lh"
#include "lucky8p1.lh"
#include "nfb96.lh"
#include "nfb96tx.lh"
#include "pokonl97.lh"
#include "roypok96.lh"
#include "skill98.lh"
#include "tonypok.lh"
#include "unkch.lh"


namespace {

class goldstar_state : public driver_device
{
public:
	goldstar_state(const machine_config &mconfig, device_type type, const char *tag) :
		driver_device(mconfig, type, tag),
		m_fg_vidram(*this, "fg_vidram"),
		m_fg_atrram(*this, "fg_atrram"),
		m_bg_vidram(*this, "bg_vidram"),
		m_bg_atrram(*this, "bg_atrram"),
		m_bg_scroll(*this, "bg_scroll"),
		m_reel_ram(*this, "reel%u_ram", 1U),
		m_reel_scroll(*this, "reel%u_scroll", 1U),
		m_decrypted_opcodes(*this, "decrypted_opcodes"),
		m_maincpu(*this, "maincpu"),
		m_ppi(*this, "ppi8255_%u", 0U),
		m_gfxdecode(*this, "gfxdecode"),
		m_palette(*this, "palette"),
		m_ticket_dispenser(*this, "hopper"),
		m_lamps(*this, "lamp%u", 0U)
	{ }


	void feverch(machine_config &config) ATTR_COLD;
	void goldfrui(machine_config &config) ATTR_COLD;
	void goldstar(machine_config &config) ATTR_COLD;
	void goldstbl(machine_config &config) ATTR_COLD;
	void ladylinr(machine_config &config) ATTR_COLD;
	void ladylinrb(machine_config &config) ATTR_COLD;
	void kkotnoli(machine_config &config) ATTR_COLD;
	void megaline(machine_config &config) ATTR_COLD;
	void moonlght(machine_config &config) ATTR_COLD;
	void super9(machine_config &config) ATTR_COLD;
	void wcherry(machine_config &config) ATTR_COLD;

	void init_chryangl() ATTR_COLD;
	void init_goldstar() ATTR_COLD;
	void init_ladylinrb() ATTR_COLD;
	void init_ladylinrc() ATTR_COLD;
	void init_ladylinrd() ATTR_COLD;
	void init_ladylinre() ATTR_COLD;
	void init_super9() ATTR_COLD;
	void init_wcherry() ATTR_COLD;

	void init_palnibbles() ATTR_COLD;

protected:
	required_shared_ptr<uint8_t> m_fg_vidram;
	required_shared_ptr<uint8_t> m_fg_atrram;

	optional_shared_ptr<uint8_t> m_bg_vidram;
	optional_shared_ptr<uint8_t> m_bg_atrram;

	optional_shared_ptr<uint8_t> m_bg_scroll;

	optional_shared_ptr_array<uint8_t, 3> m_reel_ram;

	optional_shared_ptr_array<uint8_t, 3> m_reel_scroll;

	optional_shared_ptr<uint8_t> m_decrypted_opcodes;

	required_device<cpu_device> m_maincpu;
	optional_device_array<i8255_device, 3> m_ppi;
	required_device<gfxdecode_device> m_gfxdecode;
	required_device<palette_device> m_palette;
	optional_device<ticket_dispenser_device> m_ticket_dispenser;
	output_finder<16> m_lamps;

	tilemap_t *m_reel_tilemap[3] {};

	uint8_t m_bgcolor = 0;
	tilemap_t *m_fg_tilemap = nullptr;
	tilemap_t *m_bg_tilemap = nullptr;
	uint8_t m_cmaster_girl_num = 0U;
	uint8_t m_cmaster_girl_pal = 0U;
	uint8_t m_enable_reg = 0U;
	uint8_t m_cm_girl_scroll = 0U;
	uint8_t m_reel_bank = 0U;
	uint8_t m_tile_bank = 0U;

	virtual void machine_start() override ATTR_COLD { m_lamps.resolve(); }
	virtual void video_start() override ATTR_COLD;

	void p1_lamps_w(uint8_t data);
	void p2_lamps_w(uint8_t data);
	void fg_vidram_w(offs_t offset, uint8_t data);
	void fg_atrram_w(offs_t offset, uint8_t data);
	void bg_vidram_w(offs_t offset, uint8_t data);
	void bg_atrram_w(offs_t offset, uint8_t data);
	template <uint8_t Which> void reel_ram_w(offs_t offset, uint8_t data);
	void goldstar_fa00_w(uint8_t data);
	void cm_palette(palette_device &palette) const ATTR_COLD;
	void lucky8_palette(palette_device &palette) const ATTR_COLD;
	template <bool Has_bg_tmap> uint32_t screen_update_goldstar(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect);

	void common_decrypted_opcodes_map(address_map &map) ATTR_COLD;
	void goldstar_map(address_map &map) ATTR_COLD;
	void goldstar_readport(address_map &map) ATTR_COLD;
	void super972_decrypted_opcodes_map(address_map &map) ATTR_COLD;

	TILE_GET_INFO_MEMBER(get_goldstar_fg_tile_info);
	template <uint8_t Which> TILE_GET_INFO_MEMBER(get_reel_tile_info);

private:
	uint8_t m_dataoffset = 0;

	void protection_w(uint8_t data);
	uint8_t protection_r();

	void feverch_map(address_map &map) ATTR_COLD;
	void feverch_portmap(address_map &map) ATTR_COLD;
	void kkotnoli_map(address_map &map) ATTR_COLD;
	void ladylinr_map(address_map &map) ATTR_COLD;
	void megaline_map(address_map &map) ATTR_COLD;
	void megaline_portmap(address_map &map) ATTR_COLD;
	void super9_map(address_map &map) ATTR_COLD;
	void wcherry_map(address_map &map) ATTR_COLD;
	void wcherry_readwriteport(address_map &map) ATTR_COLD;
};


class cmaster_state : public goldstar_state
{
public:
	cmaster_state(const machine_config &mconfig, device_type type, const char *tag) :
		goldstar_state(mconfig, type, tag)
	{ }

	void amaztsk(machine_config &config) ATTR_COLD;
	void amcoe1(machine_config &config) ATTR_COLD;
	void amcoe1a(machine_config &config) ATTR_COLD;
	void amcoe2(machine_config &config) ATTR_COLD;
	void animalhs(machine_config &config) ATTR_COLD;
	void chryangl(machine_config &config) ATTR_COLD;
	void cm(machine_config &config) ATTR_COLD;
	void cmast91(machine_config &config) ATTR_COLD;
	void cmast92(machine_config &config) ATTR_COLD;
	void cmasterc(machine_config &config) ATTR_COLD;
	void cmfb55(machine_config &config) ATTR_COLD;
	void cmtetrisb(machine_config &config) ATTR_COLD;
	void cmtetriskr(machine_config &config) ATTR_COLD;
	void cmv4zg(machine_config &config) ATTR_COLD;
	void crazybon(machine_config &config) ATTR_COLD;
	void crazybonb(machine_config &config) ATTR_COLD;
	void eldoradd(machine_config &config) ATTR_COLD;
	void eldoraddoa(machine_config &config) ATTR_COLD;
	void jkrmast(machine_config &config) ATTR_COLD;
	void pkrmast(machine_config &config) ATTR_COLD;
	void nfm(machine_config &config) ATTR_COLD;
	void super7(machine_config &config) ATTR_COLD;

	void init_alienatt() ATTR_COLD;
	void init_animalhs() ATTR_COLD;
	void init_chthree() ATTR_COLD;
	void init_cll() ATTR_COLD;
	void init_cm() ATTR_COLD;
	void init_cmast91() ATTR_COLD;
	void init_cmezspina() ATTR_COLD;
	void init_cmpacmanb() ATTR_COLD;
	void init_cmtetrisc() ATTR_COLD;
	void init_cmtetrisd() ATTR_COLD;
	void init_cmtetriskr() ATTR_COLD;
	void init_cmv4() ATTR_COLD;
	void init_crazybonb() ATTR_COLD;
	void init_eldoraddoa() ATTR_COLD;
	void init_fb2010() ATTR_COLD;
	void init_hamhouse() ATTR_COLD;
	void init_hamhouse9() ATTR_COLD;
	void init_jkrmast() ATTR_COLD;
	void init_ll3() ATTR_COLD;
	void init_match133() ATTR_COLD;
	void init_nfb96_a() ATTR_COLD;
	void init_nfb96_b() ATTR_COLD;
	void init_nfb96_c1() ATTR_COLD;
	void init_nfb96_c1_2() ATTR_COLD;
	void init_nfb96_c2() ATTR_COLD;
	void init_nfb96_d() ATTR_COLD;
	void init_nfb96_dk() ATTR_COLD;
	void init_nfb96_g() ATTR_COLD;
	void init_nfb96sea() ATTR_COLD;
	void init_pkrmast() ATTR_COLD;
	void init_po33() ATTR_COLD;
	void init_rp35() ATTR_COLD;
	void init_rp36() ATTR_COLD;
	void init_rp36c3() ATTR_COLD;
	void init_rp96sub() ATTR_COLD;
	void init_schery97() ATTR_COLD;
	void init_schery97a() ATTR_COLD;
	void init_skill98() ATTR_COLD;
	void init_super7() ATTR_COLD;
	void init_tcl() ATTR_COLD;
	void init_tonypok() ATTR_COLD;
	template <uint8_t Xor_value> void init_tsk() ATTR_COLD;
	void init_wcat3a() ATTR_COLD;

protected:
	virtual void video_start() override ATTR_COLD;

	TILE_GET_INFO_MEMBER(get_cherrym_fg_tile_info);
	TILE_GET_INFO_MEMBER(get_cherrym_bg_tile_info);

private:
	void outport0_w(uint8_t data);
	void girl_scroll_w(uint8_t data);
	void background_col_w(uint8_t data);
	void coincount_w(uint8_t data);

	uint32_t screen_update_amcoe1a(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect);
	uint32_t screen_update_cmast91(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect);
	void cmast91_palette(palette_device &palette) const ATTR_COLD;
	void nfm_palette(palette_device &palette) const ATTR_COLD;

	DECLARE_VIDEO_START(jkrmast);

	void amcoe1_portmap(address_map &map) ATTR_COLD;
	void amcoe2_portmap(address_map &map) ATTR_COLD;
	void animalhs_map(address_map &map) ATTR_COLD;
	void animalhs_portmap(address_map &map) ATTR_COLD;
	void chryangl_decrypted_opcodes_map(address_map &map) ATTR_COLD;
	void cm_map(address_map &map) ATTR_COLD;
	void cm_portmap(address_map &map) ATTR_COLD;
	void cmast91_portmap(address_map &map) ATTR_COLD;
	void cmast92_map(address_map &map) ATTR_COLD;
	void cmast92_portmap(address_map &map) ATTR_COLD;
	void cmtetrisb_portmap(address_map &map) ATTR_COLD;
	void cmtetriskr_portmap(address_map &map) ATTR_COLD;
	void cmv4zg_portmap(address_map &map) ATTR_COLD;
	void crazybon_portmap(address_map &map) ATTR_COLD;
	void eldoraddoa_portmap(address_map &map) ATTR_COLD;
	void jkrmast_map(address_map &map) ATTR_COLD;
	void jkrmast_portmap(address_map &map) ATTR_COLD;
	void nfm_map(address_map &map) ATTR_COLD;
	void nfm_portmap(address_map &map) ATTR_COLD;
	void pkrmast_portmap(address_map &map) ATTR_COLD;
	void super7_map(address_map &map) ATTR_COLD;
	void super7_portmap(address_map &map) ATTR_COLD;

	// installed by various driver init handlers to get stuff to work
	template <uint8_t V> uint8_t fixedval_r() { return V; }
};

class cmast97_state : public cmaster_state
{
public:
	cmast97_state(const machine_config &mconfig, device_type type, const char *tag) :
		cmaster_state(mconfig, type, tag),
		m_gfx_view(*this, "gfx_view")
	{ }

	void cmast97(machine_config &config) ATTR_COLD;

protected:
	virtual void video_start() override ATTR_COLD;

private:
	memory_view m_gfx_view;

	void cmast97_palette_init(palette_device &palette) const ATTR_COLD;
	TILE_GET_INFO_MEMBER(get_cmast97_bg_tile_info);
	uint32_t screen_update_cmast97(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect);

	void cmast97_map(address_map &map) ATTR_COLD;
	void cmast97_portmap(address_map &map) ATTR_COLD;
};

class wingco_state : public goldstar_state
{
public:
	wingco_state(const machine_config &mconfig, device_type type, const char *tag) :
		goldstar_state(mconfig, type, tag),
		m_fl7w4_id(*this, "fl7w4_id"),
		m_mcu(*this, "mcu"),
		m_tmcu(*this, "tmcu"),
		m_nvram(*this, "nvram")
	{ }

	void animalw(machine_config &config) ATTR_COLD;
	void bingowng(machine_config &config) ATTR_COLD;
	void bingownga(machine_config &config) ATTR_COLD;
	void flam7_tw(machine_config &config) ATTR_COLD;
	void flam7_w4(machine_config &config) ATTR_COLD;
	void flaming7(machine_config &config) ATTR_COLD;
	void lucky8(machine_config &config) ATTR_COLD;
	void lucky8f(machine_config &config) ATTR_COLD;
	void lucky8k(machine_config &config) ATTR_COLD;
	void lucky8p(machine_config &config) ATTR_COLD;
	void lucky8t(machine_config &config) ATTR_COLD;
	void lucky8tet(machine_config &config) ATTR_COLD;
	void luckybar(machine_config &config) ATTR_COLD;
	void luckylad(machine_config &config) ATTR_COLD;
	void magodds(machine_config &config) ATTR_COLD;
	void mbstar(machine_config &config) ATTR_COLD;
	void nd8lines(machine_config &config) ATTR_COLD;
	void super972(machine_config &config) ATTR_COLD;
	void superdrg(machine_config &config) ATTR_COLD;
	void wcat3(machine_config &config) ATTR_COLD;

	void init_cb2() ATTR_COLD;
	void init_flam7_tw() ATTR_COLD;
	void init_flaming7() ATTR_COLD;
	void init_lucky8a() ATTR_COLD;
	void init_lucky8f() ATTR_COLD;
	void init_lucky8l() ATTR_COLD;
	void init_lucky8m() ATTR_COLD;
	void init_lucky8n() ATTR_COLD;
	void init_lucky8p() ATTR_COLD;
	void init_lucky8r() ATTR_COLD;
	void init_lucky8s() ATTR_COLD;
	void init_magoddsc() ATTR_COLD;
	void init_luckylad() ATTR_COLD;
	void init_nd8lines() ATTR_COLD;
	void init_super972() ATTR_COLD;
	void init_wcat() ATTR_COLD;
	void init_wcat3() ATTR_COLD;
	void init_l8tet() ATTR_COLD;

protected:
	virtual void machine_start() override ATTR_COLD;

private:
	DECLARE_VIDEO_START(bingowng);
	DECLARE_VIDEO_START(magical);

	void magodds_outb850_w(uint8_t data);
	void magodds_outb860_w(uint8_t data);
	void fl7w4_outc802_w(uint8_t data);
	void system_outputa_w(uint8_t data);
	void system_outputb_w(uint8_t data);
	void system_outputc_w(uint8_t data);
	void ay8910_outputa_w(uint8_t data);
	void ay8910_outputb_w(uint8_t data);

	// handlers for lucky bar MCU ports
	uint8_t mcu_portb_r();
	void mcu_porta_w(uint8_t data);
	void mcu_portb_w(uint8_t data);
	void mcu_portc_w(uint8_t data);

	uint8_t nvram_r(offs_t offset);

	void magodds_palette(palette_device &palette) const ATTR_COLD;
	uint32_t screen_update_bingowng(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect);
	uint32_t screen_update_magical(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect);
	uint32_t screen_update_mbstar(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect);

	void masked_irq(int state);
	
	void z80_io_w(offs_t offset, uint8_t data);
	uint8_t z80_io_r(offs_t offset);
	void tmcu_io_w(offs_t offset, uint8_t data);
	uint8_t tmcu_io_r(offs_t offset);
	void tmcu_p1_out(uint8_t data);
	uint8_t m_z80_io_c0;
	uint8_t tetin3_r();

	

	TILE_GET_INFO_MEMBER(get_magical_fg_tile_info);
	//virtual void machine_start() override { goldstar_state::machine_start(); m_tile_bank = 0; }

private:
	optional_device<ds2401_device> m_fl7w4_id;
	optional_device<m68705p_device> m_mcu;
	optional_device<i80c51_device> m_tmcu;
	optional_shared_ptr<uint8_t> m_nvram;

	uint8_t m_nmi_enable = 0U;
	uint8_t m_vidreg = 0U;
	uint8_t m_tcount = 0;
	bool m_z80_p02 = false;
	uint8_t m_mcu_p1;

	void animalw_map(address_map &map) ATTR_COLD;
	void flaming7_map(address_map &map) ATTR_COLD;
	void lucky8_map(address_map &map) ATTR_COLD;
	void lucky8p_map(address_map &map) ATTR_COLD;
	void lucky8tet_ioport(address_map &map) ATTR_COLD;
	void luckybar_map(address_map &map) ATTR_COLD;
	void magodds_map(address_map &map) ATTR_COLD;
	void mbstar_map(address_map &map) ATTR_COLD;
	void nd8lines_map(address_map &map) ATTR_COLD;
	void superdrg_map(address_map &map) ATTR_COLD;
	void superdrg_opcodes_map(address_map &map) ATTR_COLD;
	void wcat3_map(address_map &map) ATTR_COLD;
	void tmcu_program_map(address_map &map) ATTR_COLD;
	void tmcu_io_map(address_map &map) ATTR_COLD;
};


class cb3_state : public goldstar_state
{
public:
	cb3_state(const machine_config &mconfig, device_type type, const char *tag) :
		goldstar_state(mconfig, type, tag)
	{ }

	void init_cb3() ATTR_COLD;
	void init_cb3c() ATTR_COLD;
	void init_cb3e() ATTR_COLD;
	void init_cb3f() ATTR_COLD;
	void init_cb3g() ATTR_COLD;
	void init_cherrys() ATTR_COLD;
	void init_chry10() ATTR_COLD;
	void init_chrygld() ATTR_COLD;

	void cb3c(machine_config &config) ATTR_COLD;
	void cb3e(machine_config &config) ATTR_COLD;
	void cherrys(machine_config &config) ATTR_COLD;
	void chryangla(machine_config &config) ATTR_COLD;
	void chrygld(machine_config &config) ATTR_COLD;
	void ncb3(machine_config &config) ATTR_COLD;

private:
	void ncb3_port81_w(uint8_t data);

	void do_blockswaps(uint8_t *rom) ATTR_COLD;
	void dump_to_file(uint8_t *rom) ATTR_COLD;

	uint8_t cb3_decrypt(uint8_t cipherText, uint16_t address) ATTR_COLD;
	uint8_t cb3f_decrypt(uint8_t cipherText, uint16_t address) ATTR_COLD;
	uint8_t chry10_decrypt(uint8_t cipherText) ATTR_COLD;

	void chryangla_map(address_map &map) ATTR_COLD;
	void chryangla_decrypted_opcodes_map(address_map &map) ATTR_COLD;
	void ncb3_map(address_map &map) ATTR_COLD;
	void ncb3_readwriteport(address_map &map) ATTR_COLD;
};


class sanghopm_state : public goldstar_state
{
public:
	sanghopm_state(const machine_config &mconfig, device_type type, const char *tag) :
		goldstar_state(mconfig, type, tag),
		m_reel_attrram(*this, "reel%u_attrram", 1U)
	{ }

	void star100(machine_config &config) ATTR_COLD;

protected:
	virtual void video_start() override ATTR_COLD;

private:
	required_shared_ptr_array<uint8_t, 3> m_reel_attrram;

	void enable_w(uint8_t data);
	void coincount_w(uint8_t data);

	template <uint8_t Which> void reel_attrram_w(offs_t offset, uint8_t data);

	uint32_t screen_update_sangho(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect);

	void ramdac_map(address_map &map) ATTR_COLD;
	void star100_map(address_map &map) ATTR_COLD;
	void star100_readport(address_map &map) ATTR_COLD;


	TILE_GET_INFO_MEMBER(get_fg_tile_info);
	TILE_GET_INFO_MEMBER(get_bg_tile_info);
	template <uint8_t Which> TILE_GET_INFO_MEMBER(get_reel_tile_info);
};


class unkch_state : public cmaster_state
{
public:
	unkch_state(const machine_config &mconfig, device_type type, const char *tag) :
		cmaster_state(mconfig, type, tag),
		m_reel_attrram(*this, "reel%u_attrram", 1U),
		m_ticket_dispenser(*this, "tickets")
	{ }

	void bonusch(machine_config &config) ATTR_COLD;
	void rolling(machine_config &config) ATTR_COLD;
	void unkch(machine_config &config) ATTR_COLD;

	void init_unkch1() ATTR_COLD;
	void init_unkch3() ATTR_COLD;
	void init_unkch4() ATTR_COLD;

protected:
	virtual void machine_start() override ATTR_COLD;
	virtual void video_start() override ATTR_COLD;

private:
	required_shared_ptr_array<uint8_t, 3> m_reel_attrram;

	optional_device<ticket_dispenser_device> m_ticket_dispenser;

	uint8_t m_vblank_irq_enable = 0U;
	uint8_t m_vidreg = 0U;

	void coincount_w(uint8_t data);
	void unkcm_0x02_w(uint8_t data);
	void unkcm_0x03_w(uint8_t data);

	template <uint8_t Which> void reel_attrram_w(offs_t offset, uint8_t data);

	uint32_t screen_update_unkch(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect);

	void vblank_irq(int state);

	void bonusch_map(address_map &map) ATTR_COLD;
	void bonusch_portmap(address_map &map) ATTR_COLD;
	void unkch_map(address_map &map) ATTR_COLD;
	void unkch_portmap(address_map &map) ATTR_COLD;

	template <uint8_t Which> TILE_GET_INFO_MEMBER(get_reel_tile_info);
};


void wingco_state::machine_start()
{
	goldstar_state::machine_start();
	m_tile_bank = 0;

	save_item(NAME(m_nmi_enable));
	save_item(NAME(m_vidreg));
}

void unkch_state::machine_start()
{
	cmaster_state::machine_start();

	save_item(NAME(m_vblank_irq_enable));
	save_item(NAME(m_vidreg));
}


/***************************************************************************

  Start the video hardware emulation.

***************************************************************************/


void goldstar_state::fg_vidram_w(offs_t offset, uint8_t data)
{
	m_fg_vidram[offset] = data;
	m_fg_tilemap->mark_tile_dirty(offset);
}

void goldstar_state::fg_atrram_w(offs_t offset, uint8_t data)
{
	m_fg_atrram[offset] = data;
	m_fg_tilemap->mark_tile_dirty(offset);
}

void goldstar_state::bg_vidram_w(offs_t offset, uint8_t data)
{
	m_bg_vidram[offset] = data;
	m_bg_tilemap->mark_tile_dirty(offset);
}

void goldstar_state::bg_atrram_w(offs_t offset, uint8_t data)
{
	m_bg_atrram[offset] = data;
	m_bg_tilemap->mark_tile_dirty(offset);
}


TILE_GET_INFO_MEMBER(goldstar_state::get_goldstar_fg_tile_info)
{
	int const code = m_fg_vidram[tile_index];
	int const attr = m_fg_atrram[tile_index];

	tileinfo.set(0,
			code | (attr & 0xf0) << 4,
			attr & 0x0f,
			0);
}


// colour / high tile bits are swapped around
TILE_GET_INFO_MEMBER(cmaster_state::get_cherrym_fg_tile_info)
{
	int const code = m_fg_vidram[tile_index];
	int const attr = m_fg_atrram[tile_index];

	tileinfo.set(0,
			code | (attr & 0x0f) << 8 | m_tile_bank << 12,
			(attr & 0xf0) >> 4,
			0);
}

TILE_GET_INFO_MEMBER(cmaster_state::get_cherrym_bg_tile_info)
{
	tileinfo.set(1,
			m_bg_vidram[tile_index] | (m_reel_bank * 0x100),
			m_bgcolor,
			0);
}

template <uint8_t Which>
void goldstar_state::reel_ram_w(offs_t offset, uint8_t data)
{
	m_reel_ram[Which][offset] = data;
	m_reel_tilemap[Which]->mark_tile_dirty(offset);
}

template <uint8_t Which>
TILE_GET_INFO_MEMBER(goldstar_state::get_reel_tile_info)
{
	tileinfo.set(1,
			m_reel_ram[Which][tile_index] | (m_reel_bank * 0x100),
			m_bgcolor,
			0);
}

void goldstar_state::video_start()
{
	m_reel_tilemap[0] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(goldstar_state::get_reel_tile_info<0>)), TILEMAP_SCAN_ROWS, 8, 32, 64, 8);
	m_reel_tilemap[1] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(goldstar_state::get_reel_tile_info<1>)), TILEMAP_SCAN_ROWS, 8, 32, 64, 8);
	m_reel_tilemap[2] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(goldstar_state::get_reel_tile_info<2>)), TILEMAP_SCAN_ROWS, 8, 32, 64, 8);

	m_reel_tilemap[0]->set_scroll_cols(64);
	m_reel_tilemap[1]->set_scroll_cols(64);
	m_reel_tilemap[2]->set_scroll_cols(64);

	m_fg_tilemap = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(goldstar_state::get_goldstar_fg_tile_info)), TILEMAP_SCAN_ROWS, 8, 8, 64, 32);
	m_fg_tilemap->set_transparent_pen(0);

	// is there an enable reg for this game?
	m_enable_reg = 0x0b;
}

void cmaster_state::video_start()
{
	m_reel_tilemap[0] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(cmaster_state::get_reel_tile_info<0>)), TILEMAP_SCAN_ROWS, 8,32, 64, 8);
	m_reel_tilemap[1] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(cmaster_state::get_reel_tile_info<1>)), TILEMAP_SCAN_ROWS, 8,32, 64, 8);
	m_reel_tilemap[2] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(cmaster_state::get_reel_tile_info<2>)), TILEMAP_SCAN_ROWS, 8,32, 64, 8);

	m_reel_tilemap[0]->set_scroll_cols(64);
	m_reel_tilemap[1]->set_scroll_cols(64);
	m_reel_tilemap[2]->set_scroll_cols(64);

	m_cmaster_girl_num = 0;
	m_cmaster_girl_pal = 0;

	m_fg_tilemap = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(cmaster_state::get_cherrym_fg_tile_info)), TILEMAP_SCAN_ROWS, 8,8, 64, 32);
	m_fg_tilemap->set_transparent_pen(0);

	m_enable_reg = 0x0b;
}

VIDEO_START_MEMBER(cmaster_state, jkrmast)
{
	cmaster_state::video_start();

	m_bg_tilemap = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(cmaster_state::get_cherrym_bg_tile_info)), TILEMAP_SCAN_ROWS, 8, 32, 64, 8);

	m_bg_tilemap->set_scroll_cols(64);

	m_reel_tilemap[0]->set_transparent_pen(0);
	m_reel_tilemap[1]->set_transparent_pen(0);
	m_reel_tilemap[2]->set_transparent_pen(0);

	save_item(NAME(m_reel_bank));
}

void goldstar_state::goldstar_fa00_w(uint8_t data)
{
	// bit 1 toggles continuously - might be irq enable or watchdog reset
	// bit 2 selects background gfx color (I think)
	m_bgcolor = (data & 0x04) >> 2;
	m_reel_tilemap[0]->mark_all_dirty();
	m_reel_tilemap[1]->mark_all_dirty();
	m_reel_tilemap[2]->mark_all_dirty();

	m_ticket_dispenser->motor_w(BIT(data, 7));
}



template <bool Has_bg_tmap>
uint32_t goldstar_state::screen_update_goldstar(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect)
{
	bitmap.fill(rgb_t::black(), cliprect);

	if (!(m_enable_reg & 0x01))
		return 0;

	if (Has_bg_tmap)
	{
		for (int i = 0; i < 64; i++)
			m_bg_tilemap->set_scrolly(i, m_bg_scroll[i]);

		m_bg_tilemap->draw(screen, bitmap, cliprect, 0, 0);
	}

	if (m_enable_reg & 0x08)
	{
		for (int i = 0; i < 64; i++)
		{
			m_reel_tilemap[0]->set_scrolly(i, m_reel_scroll[0][i]);
			m_reel_tilemap[1]->set_scrolly(i, m_reel_scroll[1][i]);
			m_reel_tilemap[2]->set_scrolly(i, m_reel_scroll[2][i]);
		}

		// are these hardcoded, or registers?
		const rectangle visible1(0*8, (14+48)*8-1,  4*8,  (4+7)*8-1);
		const rectangle visible2(0*8, (14+48)*8-1, 12*8, (12+7)*8-1);
		const rectangle visible3(0*8, (14+48)*8-1, 20*8, (20+7)*8-1);

		m_reel_tilemap[0]->draw(screen, bitmap, visible1, 0, 0);
		m_reel_tilemap[1]->draw(screen, bitmap, visible2, 0, 0);
		m_reel_tilemap[2]->draw(screen, bitmap, visible3, 0, 0);
	}

	if (m_enable_reg & 0x04)
	{
		if (memregion("user1")->base())
		{
			gfx_element *gfx = m_gfxdecode->gfx(2);
			int const girlyscroll = (int8_t)((m_cm_girl_scroll & 0xf0));
			int const girlxscroll = (int8_t)((m_cm_girl_scroll & 0x0f) << 4);

			gfx->zoom_transpen(bitmap,cliprect,m_cmaster_girl_num,m_cmaster_girl_pal,0,0,-(girlxscroll*2),-(girlyscroll), 0x20000, 0x10000,0);
		}
	}

	if (m_enable_reg & 0x02)
		m_fg_tilemap->draw(screen, bitmap, cliprect, 0, 0);

	return 0;
}


uint32_t cmaster_state::screen_update_cmast91(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect)
{
	bitmap.fill(rgb_t::black(), cliprect);

	if (!(m_enable_reg & 0x01))
		return 0;

	if (m_enable_reg & 0x08)
	{
		for (int i = 0; i < 64; i++)
		{
			m_reel_tilemap[0]->set_scrolly(i, m_reel_scroll[0][i]);
			m_reel_tilemap[1]->set_scrolly(i, m_reel_scroll[1][i]);
			m_reel_tilemap[2]->set_scrolly(i, m_reel_scroll[2][i]);
		}

		const rectangle visible1(0*8, (14+48)*8-1,  4*8,  (4+7)*8-1);   // same start for reel[0]
		const rectangle visible2(0*8, (14+48)*8-1, 11*8, (12+7)*8-1);   // 4 pixels less for reel[1]
		const rectangle visible3(0*8, (14+48)*8-1, 19*8, (19+7)*8-1);   // 8 pixels less for reel[2]

		m_reel_tilemap[0]->draw(screen, bitmap, visible1, 0, 0);
		m_reel_tilemap[1]->draw(screen, bitmap, visible2, 0, 0);
		m_reel_tilemap[2]->draw(screen, bitmap, visible3, 0, 0);
	}

	if (m_enable_reg & 0x04)
	{
		if (memregion("user1")->base())
		{
			gfx_element *gfx = m_gfxdecode->gfx(2);
			int const girlyscroll = (int8_t)((m_cm_girl_scroll & 0xf0));
			int const girlxscroll = (int8_t)((m_cm_girl_scroll & 0x0f) << 4);

			gfx->zoom_transpen(bitmap,cliprect,m_cmaster_girl_num,m_cmaster_girl_pal,0,0,-(girlxscroll*2),-(girlyscroll), 0x20000, 0x10000,0);
		}
	}

	if (m_enable_reg & 0x02)
		m_fg_tilemap->draw(screen, bitmap, cliprect, 0, 0);

	return 0;
}



void cmaster_state::outport0_w(uint8_t data)
{
/*
  ---- ---x  (global enable or irq enable?)
  ---- --x-  (fg enable)
  ---- -x--  (girl enable?)
  ---- x---  (reels enable)
  xxxx ----  unused?

*/
	//popmessage("outport %02x",data);
	m_enable_reg = data;
}

void cmaster_state::girl_scroll_w(uint8_t data)
{
/*
  xxxx ----  yscroll
  ---- xxxx  xscroll

  this isn't very fine scrolling, but i see no other registers.
  1000 1000 is the center of the screen.

*/
	m_cm_girl_scroll = data;
}

void cmaster_state::background_col_w(uint8_t data)
{
	//printf("cm_background_col_w %02x\n",data);

	// cherry master writes
	// so it's probably
	// 0ggg cc00
	// where g is which girl to display and c is the colour palette
	// (note, this doesn't apply to the amcoe games which have no girls,
	//  I'm unsure how the priority/positioning works)

	m_cmaster_girl_num = (data >> 4) & 0x7;
	m_cmaster_girl_pal = (data >> 2) & 0x3;

	//bgcolor = (data & 0x03) >> 0;

	// apparently some boards have this colour scheme?
	// i'm not convinced it isn't just a different prom on them
	#if 0
	m_bgcolor = 0;
	m_bgcolor |= (data & 0x01) << 1;
	m_bgcolor |= (data & 0x02) >> 1;
	#else
	m_bgcolor = (data & 0x03) >> 0;
	#endif

	m_reel_tilemap[0]->mark_all_dirty();
	m_reel_tilemap[1]->mark_all_dirty();
	m_reel_tilemap[2]->mark_all_dirty();
}


uint32_t cmaster_state::screen_update_amcoe1a(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect)
{
	bitmap.fill(rgb_t::black(), cliprect);

	if (!(m_enable_reg & 0x01))
		return 0;

	if (m_enable_reg & 0x08)
	{
		for (int i = 0; i < 64; i++)
		{
			m_reel_tilemap[0]->set_scrolly(i, m_reel_scroll[0][i]);
			m_reel_tilemap[1]->set_scrolly(i, m_reel_scroll[1][i]);
			m_reel_tilemap[2]->set_scrolly(i, m_reel_scroll[2][i]);
		}

		rectangle const visible1(0*8, (14+48)*8-1,  4*8,  (4+6)*8-1);
		rectangle const visible2(0*8, (14+48)*8-1, 10*8, (10+6)*8-1);
		rectangle const visible3(0*8, (14+48)*8-1, 16*8, (16+6)*8-1);

		m_reel_tilemap[0]->draw(screen, bitmap, visible1, 0, 0);
		m_reel_tilemap[1]->draw(screen, bitmap, visible2, 0, 0);
		m_reel_tilemap[2]->draw(screen, bitmap, visible3, 0, 0);
	}

	if (m_enable_reg & 0x04)
	{
		// no girls
	}

	if (m_enable_reg & 0x02)
		m_fg_tilemap->draw(screen, bitmap, cliprect, 0, 0);

	return 0;
}


TILE_GET_INFO_MEMBER(cmast97_state::get_cmast97_bg_tile_info)
{
	int const code = m_bg_vidram[tile_index];
	int const attr = m_bg_atrram[tile_index];

	tileinfo.set(2,
			code | (attr & 0x0f) << 8,
			(attr & 0xf0) >> 4,
			0);
}

void cmast97_state::video_start()
{
	m_reel_tilemap[0] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(cmast97_state::get_reel_tile_info<0>)), TILEMAP_SCAN_ROWS, 8,32, 64, 8);
	m_reel_tilemap[1] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(cmast97_state::get_reel_tile_info<1>)), TILEMAP_SCAN_ROWS, 8,32, 64, 8);
	m_reel_tilemap[2] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(cmast97_state::get_reel_tile_info<2>)), TILEMAP_SCAN_ROWS, 8,32, 64, 8);

	m_reel_tilemap[0]->set_scroll_cols(64);
	m_reel_tilemap[1]->set_scroll_cols(64);
	m_reel_tilemap[2]->set_scroll_cols(64);

	m_reel_tilemap[0]->set_transparent_pen(0);
	m_reel_tilemap[1]->set_transparent_pen(0);
	m_reel_tilemap[2]->set_transparent_pen(0);

	m_cmaster_girl_num = 0;
	m_cmaster_girl_pal = 0;

	m_fg_tilemap = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(cmast97_state::get_cherrym_fg_tile_info)), TILEMAP_SCAN_ROWS, 8,8, 64, 32);
	m_fg_tilemap->set_transparent_pen(0);
	m_fg_tilemap->set_scrolly(0, -16);

	m_bg_tilemap = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(cmast97_state::get_cmast97_bg_tile_info)), TILEMAP_SCAN_ROWS, 8,8, 64, 32);
}

void cmast97_state::cmast97_palette_init(palette_device &palette) const
{
	// TODO: probably wrong
	uint8_t const *const colours = memregion("proms")->base();
	for (int i = 0; i < 0x200; i++)
	{
		uint8_t const data = colours[i];
		palette.set_pen_color(i, pal3bit(data >> 0), pal3bit(data >> 3), pal2bit(data >> 6));
	}
}

uint32_t cmast97_state::screen_update_cmast97(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect)
{
	bitmap.fill(rgb_t::black(), cliprect);

	if (!(m_enable_reg & 0x01))
		return 0;

	if (m_enable_reg & 0x02)
		m_bg_tilemap->draw(screen, bitmap, cliprect, 0, 0);

	if (m_enable_reg & 0x10)
	{
		for (int i = 0; i < 64; i++)
		{
			m_reel_tilemap[0]->set_scrolly(i, m_reel_scroll[0][i]);
			m_reel_tilemap[1]->set_scrolly(i, m_reel_scroll[1][i]);
			m_reel_tilemap[2]->set_scrolly(i, m_reel_scroll[2][i]);
		}

		m_reel_tilemap[0]->draw(screen, bitmap, cliprect, 0, 0);
		m_reel_tilemap[1]->draw(screen, bitmap, cliprect, 0, 0);
		m_reel_tilemap[2]->draw(screen, bitmap, cliprect, 0, 0);
	}

	if (m_enable_reg & 0x08)
		m_fg_tilemap->draw(screen, bitmap, cliprect, 0, 0);

	return 0;
}


TILE_GET_INFO_MEMBER(wingco_state::get_magical_fg_tile_info)
{
	int const code = m_fg_vidram[tile_index];
	int const attr = m_fg_atrram[tile_index];

	tileinfo.set(0,
			(code | (attr & 0xf0)<<4) + (m_tile_bank * 0x1000),
			attr & 0x0f,
			0);
}


VIDEO_START_MEMBER(wingco_state, bingowng)
{
	m_reel_tilemap[0] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(wingco_state::get_reel_tile_info<0>)), TILEMAP_SCAN_ROWS, 8,32, 64, 8);

	m_reel_tilemap[0]->set_scroll_cols(64);

	m_fg_tilemap = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(wingco_state::get_goldstar_fg_tile_info)), TILEMAP_SCAN_ROWS, 8,8, 64, 32);
	m_fg_tilemap->set_transparent_pen(0);

	// is there an enable reg for this game?
	m_enable_reg = 0x0b;
}

VIDEO_START_MEMBER(wingco_state, magical)
{
	m_reel_tilemap[0] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(wingco_state::get_reel_tile_info<0>)), TILEMAP_SCAN_ROWS, 8, 32, 64, 8);
	m_reel_tilemap[1] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(wingco_state::get_reel_tile_info<1>)), TILEMAP_SCAN_ROWS, 8, 32, 64, 8);
	m_reel_tilemap[2] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(wingco_state::get_reel_tile_info<2>)), TILEMAP_SCAN_ROWS, 8, 32, 64, 8);

	m_reel_tilemap[0]->set_scroll_cols(32);
	m_reel_tilemap[1]->set_scroll_cols(32);
	m_reel_tilemap[2]->set_scroll_cols(32);

	m_fg_tilemap = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(wingco_state::get_magical_fg_tile_info)), TILEMAP_SCAN_ROWS, 8, 8, 64, 32);
	m_fg_tilemap->set_transparent_pen(0);

	// is there an enable reg for this game?
	m_enable_reg = 0x0b;
}


uint32_t wingco_state::screen_update_bingowng(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect)
{
	bitmap.fill(rgb_t::black(), cliprect);

	if (!(m_enable_reg & 0x01))
		return 0;

	if (m_enable_reg & 0x08)
	{
		for (int i = 0; i < 64; i++)
		{
			m_reel_tilemap[0]->set_scrolly(i, m_reel_scroll[0][i]);
		}

		rectangle const visible1(0*8, (14+48)*8-1, 3*8, (4+7)*8-1);
		m_reel_tilemap[0]->draw(screen, bitmap, visible1, 0, 0);
	}

	if (m_enable_reg & 0x04)
	{
		if (memregion("user1")->base())
		{
			gfx_element *gfx = m_gfxdecode->gfx(2);
			int const girlyscroll = (int8_t)((m_cm_girl_scroll & 0xf0));
			int const girlxscroll = (int8_t)((m_cm_girl_scroll & 0x0f) << 4);

			gfx->zoom_transpen(bitmap,cliprect,m_cmaster_girl_num,m_cmaster_girl_pal, 0, 0, -(girlxscroll*2), -(girlyscroll), 0x20000, 0x10000, 0);
		}
	}

	if (m_enable_reg & 0x02)
	{
		m_fg_tilemap->draw(screen, bitmap, cliprect, 0, 0);
	}

	return 0;
}

uint32_t wingco_state::screen_update_magical(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect)
{
	bitmap.fill(rgb_t::black(), cliprect);

	if (!(m_enable_reg & 0x01))
		return 0;

	if (m_enable_reg & 0x08)
	{
		// guess, could be wrong, but different screens clearly need different reel layouts
		if (m_vidreg & 2)
		{
			for (int i = 0; i < 32; i++)
			{
				m_reel_tilemap[0]->set_scrolly(i, m_reel_scroll[0][i*2]);
				m_reel_tilemap[1]->set_scrolly(i, m_reel_scroll[1][i*2]);
			//  m_reel_tilemap[2]->set_scrolly(i, m_reel_scroll[2][i*2]);
			}

			rectangle const visible1alt(0*8, (16+48)*8-1,  4*8,  16*8-1);
			rectangle const visible2alt(0*8, (16+48)*8-1, 16*8,  28*8-1);

			m_reel_tilemap[0]->draw(screen, bitmap, visible1alt, 0, 0);
			m_reel_tilemap[1]->draw(screen, bitmap, visible2alt, 0, 0);
			//m_reel_tilemap[2]->draw(screen, bitmap, &magical_visible3, 0, 0);
		}
		else
		{
			for (int i = 0; i < 32; i++)
			{
				m_reel_tilemap[0]->set_scrolly(i, m_reel_scroll[0][i*2]);
				m_reel_tilemap[1]->set_scrolly(i, m_reel_scroll[1][i*2]);
				m_reel_tilemap[2]->set_scrolly(i, m_reel_scroll[2][i*2]);
			}

			rectangle const visible1(0*8, (14+48)*8-1,  4*8,  (4+8)*8-1);
			rectangle const visible2(0*8, (14+48)*8-1, 12*8, (12+8)*8-1);
			rectangle const visible3(0*8, (14+48)*8-1, 20*8, (20+8)*8-1);

			m_reel_tilemap[0]->draw(screen, bitmap, visible1, 0, 0);
			m_reel_tilemap[1]->draw(screen, bitmap, visible2, 0, 0);
			m_reel_tilemap[2]->draw(screen, bitmap, visible3, 0, 0);
		}
	}

	if (m_enable_reg & 0x02)
		m_fg_tilemap->draw(screen, bitmap, cliprect, 0, 0);

	return 0;
}


uint32_t wingco_state::screen_update_mbstar(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect)
{
	bitmap.fill(rgb_t::black(), cliprect);

	if (!(m_enable_reg & 0x01))
		return 0;

	if (m_enable_reg & 0x08)
	{
		for (int i = 0; i < 64; i++)
		{
			m_reel_tilemap[0]->set_scrolly(i, m_reel_scroll[0][i]);
			m_reel_tilemap[1]->set_scrolly(i, m_reel_scroll[1][i]);
			m_reel_tilemap[2]->set_scrolly(i, m_reel_scroll[2][i]);
		}

		// are these hardcoded, or registers?
		//const rectangle visible1(0*8, (14+48)*8-1,  4*8,  (4+7)*8-1);
		const rectangle visible2(0*8, (14+48)*8-1, 14*8, 32*8-1);  // seems to be the one used...
		//const rectangle visible3(0*8, (14+48)*8-1,  4*8,  (4+7)*8-1);

//      m_reel_tilemap[0]->draw(screen, bitmap, visible1, 0, 0);
		m_reel_tilemap[1]->draw(screen, bitmap, visible2, 0, 0);
//      m_reel_tilemap[2]->draw(screen, bitmap, visible3, 0, 0);
	}

	if (m_enable_reg & 0x02)
		m_fg_tilemap->draw(screen, bitmap, cliprect, 0, 0);

	return 0;
}


template <uint8_t Which>
void sanghopm_state::reel_attrram_w(offs_t offset, uint8_t data)
{
	m_reel_attrram[Which][offset] = data;
	m_reel_tilemap[Which]->mark_tile_dirty(offset);
}


TILE_GET_INFO_MEMBER(sanghopm_state::get_fg_tile_info)
{
	int const code = m_fg_vidram[tile_index];
	int const attr = m_fg_atrram[tile_index];

	tileinfo.set(0,
			code | (attr & 0x0f) << 8,
			(attr & 0x70) >> 4,
			0);
}

TILE_GET_INFO_MEMBER(sanghopm_state::get_bg_tile_info)
{
	int const code = m_bg_vidram[tile_index];
	int const attr = m_bg_atrram[tile_index];

	tileinfo.set(1,
			code | (attr & 0x0f) << 8,
			(attr & 0x70) >> 4,
			0);
}

template <uint8_t Which>
TILE_GET_INFO_MEMBER(sanghopm_state::get_reel_tile_info)
{
	int const code = m_reel_ram[Which][tile_index];
	int const attr = m_reel_attrram[Which][tile_index];

	tileinfo.set(1,
			code | (attr & 0x0f) << 8,
			(attr & 0x70) >> 4,
			0);
}


void sanghopm_state::video_start()
{
	m_bg_tilemap = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(sanghopm_state::get_bg_tile_info)), TILEMAP_SCAN_ROWS, 8, 32, 64, 8);

	m_reel_tilemap[0] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(sanghopm_state::get_reel_tile_info<0>)), TILEMAP_SCAN_ROWS, 8, 32, 64, 8);
	m_reel_tilemap[1] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(sanghopm_state::get_reel_tile_info<1>)), TILEMAP_SCAN_ROWS, 8, 32, 64, 8);
	m_reel_tilemap[2] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(sanghopm_state::get_reel_tile_info<2>)), TILEMAP_SCAN_ROWS, 8, 32, 64, 8);

	m_reel_tilemap[0]->set_scroll_cols(64);
	m_reel_tilemap[1]->set_scroll_cols(64);
	m_reel_tilemap[2]->set_scroll_cols(64);

	m_fg_tilemap = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(sanghopm_state::get_fg_tile_info)), TILEMAP_SCAN_ROWS, 8, 8, 64, 32);
	m_fg_tilemap->set_transparent_pen(0);
}


uint32_t sanghopm_state::screen_update_sangho(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect)
{
	bitmap.fill(rgb_t::black(), cliprect);

	m_bg_tilemap->set_scrolly(0, -16);
	m_bg_tilemap->draw(screen, bitmap, cliprect, 0, 0);

	// enable reels (render all the five layers)
	if (!(m_enable_reg & 0x01))
	{
		for (int i = 0; i < 64; i++)
		{
			m_reel_tilemap[0]->set_scrolly(i, m_reel_scroll[0][i]);
			m_reel_tilemap[1]->set_scrolly(i, m_reel_scroll[1][i]);
			m_reel_tilemap[2]->set_scrolly(i, m_reel_scroll[2][i]);
		}

		// are these hardcoded, or registers?
		rectangle const visible1(0*8, (15+48)*8-1,  4*8,  (4+7)*8-1);
		rectangle const visible2(0*8, (15+48)*8-1, 12*8, (12+7)*8-1);
		rectangle const visible3(0*8, (15+48)*8-1, 20*8, (20+7)*8-1);

		m_reel_tilemap[0]->draw(screen, bitmap, visible1, 0, 0);
		m_reel_tilemap[1]->draw(screen, bitmap, visible2, 0, 0);
		m_reel_tilemap[2]->draw(screen, bitmap, visible3, 0, 0);
	}

	m_fg_tilemap->draw(screen, bitmap, cliprect, 0, 0);

	return 0;
}


template <uint8_t Which>
void unkch_state::reel_attrram_w(offs_t offset, uint8_t data)
{
	m_reel_attrram[Which][offset] = data;
	m_reel_tilemap[Which]->mark_tile_dirty(offset);
}

template <uint8_t Which>
TILE_GET_INFO_MEMBER(unkch_state::get_reel_tile_info)
{
	int const code = m_reel_ram[Which][tile_index];
	int const attr = m_reel_attrram[Which][tile_index];

	tileinfo.set(1,
			code | (attr & 0x0f) << 8,
			(attr & 0xf0) >> 4,
			0);
}


void unkch_state::video_start()
{
	m_reel_tilemap[0] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(unkch_state::get_reel_tile_info<0>)), TILEMAP_SCAN_ROWS, 8, 32, 64, 8);
	m_reel_tilemap[1] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(unkch_state::get_reel_tile_info<1>)), TILEMAP_SCAN_ROWS, 8, 32, 64, 8);
	m_reel_tilemap[2] = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(unkch_state::get_reel_tile_info<2>)), TILEMAP_SCAN_ROWS, 8, 32, 64, 8);

	m_reel_tilemap[0]->set_scroll_cols(32);
	m_reel_tilemap[1]->set_scroll_cols(32);
	m_reel_tilemap[2]->set_scroll_cols(32);

	m_cmaster_girl_num = 0;
	m_cmaster_girl_pal = 0;
	m_vidreg = 0x00;

	m_fg_tilemap = &machine().tilemap().create(*m_gfxdecode, tilemap_get_info_delegate(*this, FUNC(unkch_state::get_cherrym_fg_tile_info)), TILEMAP_SCAN_ROWS, 8, 8, 64, 32);
	m_fg_tilemap->set_transparent_pen(0);

	m_enable_reg = 0x0b;
}

uint32_t unkch_state::screen_update_unkch(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect)
{
	bitmap.fill(rgb_t::black(), cliprect);

	if (!(m_enable_reg & 0x01))
		return 0;

	if (m_enable_reg & 0x08)
	{
		// guess, this could be something else completely!!
		// only draw the first 'reels' tilemap, but fullscreen, using alt registers? (or no scrolling at all? - doubtful, see girl)
		if (m_vidreg & 0x40)
		{
			for (int i = 0; i < 32; i++)
			{
				m_reel_tilemap[0]->set_scrolly(i, -0x08 /*m_reel_scroll[0][(i*2)+1]*/ );
			//  m_reel_tilemap[1]->set_scrolly(i, m_reel_scroll[1][(i*2)+1]);
			//  m_reel_tilemap[2]->set_scrolly(i, m_reel_scroll[2][(i*2)+1]);
			}

			m_reel_tilemap[0]->draw(screen, bitmap, cliprect, 0, 0);

		}
		// or draw the reels normally?
		else
		{
			for (int i= 0; i < 32; i++)
			{
				m_reel_tilemap[0]->set_scrolly(i, m_reel_scroll[0][i*2]);
				m_reel_tilemap[1]->set_scrolly(i, m_reel_scroll[1][i*2]);
				m_reel_tilemap[2]->set_scrolly(i, m_reel_scroll[2][i*2]);
			}

			const rectangle visible1(0*8, (14+48)*8-1,  3*8,  (3+7)*8-1);
			const rectangle visible2(0*8, (14+48)*8-1, 10*8, (10+7)*8-1);
			const rectangle visible3(0*8, (14+48)*8-1, 17*8, (17+7)*8-1);

			m_reel_tilemap[0]->draw(screen, bitmap, visible1, 0, 0);
			m_reel_tilemap[1]->draw(screen, bitmap, visible2, 0, 0);
			m_reel_tilemap[2]->draw(screen, bitmap, visible3, 0, 0);
		}
	}

	if (m_enable_reg & 0x02)
		m_fg_tilemap->draw(screen, bitmap, cliprect, 0, 0);

	return 0;
}

void goldstar_state::protection_w(uint8_t data)
{
	if (data == 0x2a)
		m_dataoffset = 0;
}

uint8_t goldstar_state::protection_r()
{
	static const int data[4] = { 0x47, 0x4f, 0x4c, 0x44 };

	m_dataoffset %= 4;
	return data[m_dataoffset++];
}

void goldstar_state::p1_lamps_w(uint8_t data)
{
/*  bits
  7654 3210     goldstar                            crazybon                ncb3/cb3a               lucky8/bingowng
  ---- ---x     Bet Red / Card 2                                            Stop 2 / Big
  ---- --x-     Stop 3 / Small / Info / Card 1      Start                   Blue Bet / Double       D-UP
  ---- -x--     Bet Blue / Double Up / Card 3                               Stop 1/Take             TAKE
  ---- x---     Stop 1 / Take                       Bet                     Red Bet                 BET
  ---x ----     Stop 2 / Big / Bonus                Stop All / Take Score   Stop 3 / Small / Info   INFO
  --x- ----     Start / Stop All / Card 4           Double Up               Start / Stop All        START
  -x-- ----                                         Small / Info
  x--- ----                                         Big

  7654 3210     cm/cmaster  cmpacman/cmtetris   tonypok     schery97        pokonl97        match98
  ---- ---x                                                 stop/big        bet 10/big      hit/stop
  ---- --x-     d-up        d-up                big/small   d-up            d-up
  ---- -x--     take        take/stop           take/d-up   take/select     take/select     take
  ---- x---     bet         bet                 bet         bet             bet 1           bet
  ---x ----     info        info                            small           small/end
  --x- ----     start       start               deal        start           start           start
  -x-- ----                                     hold
  x--- ----

  all cm/cmaster use the same scheme
  cmv4, cmv801 and crazybon don't light the Take button when it's available for hold pair.
  tonypok uses lamps to indicate current button functions rather than active buttons.
  skill98 is like schery97 but doesn't activate bit 0 for stop.
  nfb96, roypok96 and nc96 sets are like schery97 but they don't activate bit 2 for select.

*/
	m_lamps[0] = BIT(data, 0);
	m_lamps[1] = BIT(data, 1);
	m_lamps[2] = BIT(data, 2);
	m_lamps[3] = BIT(data, 3);
	m_lamps[4] = BIT(data, 4);
	m_lamps[5] = BIT(data, 5);
	m_lamps[6] = BIT(data, 6);
	m_lamps[7] = BIT(data, 7);

//  popmessage("p1 lamps: %02X", data);
}

void goldstar_state::p2_lamps_w(uint8_t data)
{
	m_lamps[8 + 0] = BIT(data, 0);
	m_lamps[8 + 1] = BIT(data, 1);
	m_lamps[8 + 2] = BIT(data, 2);
	m_lamps[8 + 3] = BIT(data, 3);
	m_lamps[8 + 4] = BIT(data, 4);
	m_lamps[8 + 5] = BIT(data, 5);
	m_lamps[8 + 6] = BIT(data, 6);
	m_lamps[8 + 7] = BIT(data, 7);

//  popmessage("p2 lamps: %02X", data);
}

// lucky bar mcu
uint8_t wingco_state::mcu_portb_r()
{
	uint8_t ret;
	ret = machine().rand() & 0xff;
	logerror("MCU port B read: %02x\n", ret);
	return ret;
}

void wingco_state::mcu_porta_w(uint8_t data)
{
	logerror("MCU port A write: %02x\n", data);
}

void wingco_state::mcu_portb_w(uint8_t data)
{
	logerror("MCU port B write: %02x\n", data);
}

void wingco_state::mcu_portc_w(uint8_t data)
{
	logerror("MCU port C write: %02x\n", data);
}


uint8_t wingco_state::nvram_r(offs_t offset)
{
	uint8_t ret = m_nvram[offset];

	if (offset == 0x7ff)
		ret = 0;

	if (offset == 0x7fd)
	{
		switch (m_nvram[0x7fd])
		{
			case 0x01: ret = 0x08; break;
			case 0x04: ret = 0x02; break;
			case 0x10: ret = 0x20; break;
			case 0x40: ret = 0x80; break;
		}
	}

	return ret;
}


void goldstar_state::goldstar_map(address_map &map)
{
	map(0x0000, 0xb7ff).rom();
	map(0xb800, 0xbfff).ram().share("nvram");
	map(0xc000, 0xc7ff).rom();
	map(0xc800, 0xcfff).ram().w(FUNC(goldstar_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xd000, 0xd7ff).ram().w(FUNC(goldstar_state::fg_atrram_w)).share(m_fg_atrram);
	map(0xd800, 0xd9ff).ram().w(FUNC(goldstar_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xe000, 0xe1ff).ram().w(FUNC(goldstar_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xe800, 0xe9ff).ram().w(FUNC(goldstar_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xf040, 0xf07f).ram().share(m_reel_scroll[0]);
	map(0xf080, 0xf0bf).ram().share(m_reel_scroll[1]);
	map(0xf0c0, 0xf0ff).ram().share(m_reel_scroll[2]);

	map(0xf800, 0xf800).portr("IN0");
	map(0xf801, 0xf801).portr("IN1");    // Test Mode
	map(0xf802, 0xf802).portr("DSW1");
//  map(0xf803, 0xf803)
//  map(0xf804, 0xf804)
	map(0xf805, 0xf805).portr("DSW4");   // DSW 4 (also appears in 8910 port)
	map(0xf806, 0xf806).portr("DSW7");
	map(0xf810, 0xf810).portr("UNK1");
	map(0xf811, 0xf811).portr("UNK2");
	map(0xf820, 0xf820).portr("DSW2");
	map(0xf830, 0xf830).rw("aysnd", FUNC(ay8910_device::data_r), FUNC(ay8910_device::data_w));
	map(0xf840, 0xf840).w("aysnd", FUNC(ay8910_device::address_w));
	map(0xf900, 0xf900).w(FUNC(goldstar_state::p1_lamps_w));
	map(0xfa00, 0xfa00).w(FUNC(goldstar_state::goldstar_fa00_w));
	map(0xfb00, 0xfb00).rw("oki", FUNC(okim6295_device::read), FUNC(okim6295_device::write));
	map(0xfd00, 0xfdff).ram().w(m_palette, FUNC(palette_device::write8)).share("palette");
	map(0xfe00, 0xfe00).rw(FUNC(goldstar_state::protection_r), FUNC(goldstar_state::protection_w));
}

void goldstar_state::goldstar_readport(address_map &map)
{
	map.global_mask(0xff);
	map(0x10, 0x10).portr("DSW6");
}

void goldstar_state::super9_map(address_map &map)
{
	map(0x0000, 0xb7ff).rom();
	map(0xb800, 0xbfff).ram().share("nvram");
	map(0xc000, 0xc7ff).rom();
	map(0xc800, 0xcfff).ram().w(FUNC(goldstar_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xd000, 0xd7ff).ram().w(FUNC(goldstar_state::fg_atrram_w)).share(m_fg_atrram);
	map(0xd800, 0xd9ff).ram().w(FUNC(goldstar_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xe000, 0xe1ff).ram().w(FUNC(goldstar_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xe800, 0xe9ff).ram().w(FUNC(goldstar_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xf040, 0xf07f).ram().share(m_reel_scroll[0]);
	map(0xf080, 0xf0bf).ram().share(m_reel_scroll[1]);
	map(0xf0c0, 0xf0ff).ram().share(m_reel_scroll[2]);

	map(0xf800, 0xf800).portr("IN1");
	map(0xf801, 0xf801).portr("IN2");    // Test Mode
	map(0xf802, 0xf802).portr("DSW1");
//  map(0xf803, 0xf803)
//  map(0xf804, 0xf804)
	map(0xf805, 0xf805).portr("DSW4");   // DSW 4 (also appears in 8910 port)
	map(0xf806, 0xf806).portr("IN1");
	map(0xf810, 0xf810).portr("DSW5");
	map(0xf811, 0xf811).portr("IN0");
	map(0xf820, 0xf820).portr("DSW2");
	map(0xf830, 0xf830).rw("aysnd", FUNC(ay8910_device::data_r), FUNC(ay8910_device::data_w));
	map(0xf840, 0xf840).w("aysnd", FUNC(ay8910_device::address_w));
	map(0xf900, 0xf900).w(FUNC(goldstar_state::p1_lamps_w));
	map(0xfa00, 0xfa00).w(FUNC(goldstar_state::goldstar_fa00_w));
	map(0xfb00, 0xfb00).rw("oki", FUNC(okim6295_device::read), FUNC(okim6295_device::write));
	map(0xfc00, 0xfdff).rom();
	map(0xfe00, 0xfeff).ram().w(m_palette, FUNC(palette_device::write8)).share("palette"); // TODO: where's the palette
	map(0xff00, 0xffff).ram();
}

void sanghopm_state::star100_map(address_map &map)
{
	map(0x0000, 0xbfff).rom();

	map(0xc800, 0xcfff).ram().w(FUNC(sanghopm_state::fg_vidram_w)).share(m_fg_vidram);    // videoram 1
	map(0xd000, 0xd7ff).ram().w(FUNC(sanghopm_state::fg_atrram_w)).share(m_fg_atrram);    // atrram 1

	map(0xd800, 0xd83f).ram().share(m_reel_scroll[0]);
	map(0xd840, 0xd9ff).ram();
	map(0xda00, 0xda3f).ram().share(m_reel_scroll[1]);
	map(0xda40, 0xdbff).ram();
	map(0xdc00, 0xdc3f).ram().share(m_reel_scroll[2]);
	map(0xdc40, 0xdfff).ram();

	map(0xe000, 0xe1ff).ram().w(FUNC(sanghopm_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xe200, 0xe3ff).ram().w(FUNC(sanghopm_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xe400, 0xe5ff).ram().w(FUNC(sanghopm_state::reel_ram_w<2>)).share(m_reel_ram[2]);

	map(0xe600, 0xe7ff).ram().w(FUNC(sanghopm_state::bg_vidram_w)).share(m_bg_vidram);    // videoram 2

	map(0xe800, 0xe9ff).ram().w(FUNC(sanghopm_state::reel_attrram_w<0>)).share(m_reel_attrram[0]);
	map(0xea00, 0xebff).ram().w(FUNC(sanghopm_state::reel_attrram_w<1>)).share(m_reel_attrram[1]);
	map(0xec00, 0xedff).ram().w(FUNC(sanghopm_state::reel_attrram_w<2>)).share(m_reel_attrram[2]);

	map(0xee00, 0xefff).ram().w(FUNC(sanghopm_state::bg_atrram_w)).share(m_bg_atrram);    // atrram 2

	map(0xf000, 0xf7ff).ram().share("nvram");
	map(0xf800, 0xffff).ram();

}


void sanghopm_state::coincount_w(uint8_t data)
{
/*
  7654 3210
  ---- ---x  Coin Out counter.
  ---- x---  Coin A counter..
  ---x ----  Coin B counter.
  --x- ----  Key In counter.
  -x-- ----  Coin C counter.
  x--- -xx-  Unknown.

*/
	machine().bookkeeping().coin_counter_w(0, data & 0x08);  // counter1 coin a
	machine().bookkeeping().coin_counter_w(1, data & 0x10);  // counter2 coin b
	machine().bookkeeping().coin_counter_w(2, data & 0x20);  // counter3 key in
	machine().bookkeeping().coin_counter_w(3, data & 0x40);  // counter4 coin c
	machine().bookkeeping().coin_counter_w(4, data & 0x01);  // counter5 payout
}

void sanghopm_state::enable_w(uint8_t data)
{
	m_enable_reg = data;
}

void sanghopm_state::star100_readport(address_map &map)
{
	map.global_mask(0xff);

	map(0x08, 0x08).rw("aysnd", FUNC(ay8910_device::data_r), FUNC(ay8910_device::data_w));
	map(0x0c, 0x0c).w("aysnd", FUNC(ay8910_device::address_w));

	map(0x10, 0x10).portr("IN0");
	map(0x11, 0x11).portr("IN1");
	map(0x12, 0x12).portr("IN2");
	map(0x13, 0x13).portr("IN3");
	map(0x14, 0x14).portr("DSW1");

	map(0x1c, 0x1c).w("ramdac", FUNC(ramdac_device::index_w));
	map(0x1d, 0x1d).w("ramdac", FUNC(ramdac_device::pal_w));
	map(0x1e, 0x1e).w("ramdac", FUNC(ramdac_device::mask_w));

	map(0x20, 0x20).portr("DSW4-0");  // the first 4 bits map to DSW4 1 to 4.
	map(0x21, 0x21).portr("DSW4-1");  // the first 4 bits map to DSW4 5 to 8.

	map(0x24, 0x24).w(FUNC(sanghopm_state::coincount_w));  // coin counters.

	map(0x25, 0x25).portr("DSW2");
	map(0x26, 0x26).portr("DSW3");

	map(0xe0, 0xe0).nopw();           // Writing 0's and 1's constantly.  Watchdog feeder?
	map(0xe1, 0xe1).w(FUNC(sanghopm_state::enable_w));     // enable/disable reels register.

}

/*
  08:  W (3F)   AY8910 data
  0C:  W (07)   AY8910 address

  10: R     Input #0
  11: R     Input #1
  12: R     Input #2
  13: R     Input #3

  14: R     DSW #1

  17:  W

  1C:  W    \ these looks like RAMDAC commands. After write to 1C, there are 3 writes to 1D.
  1D:  W    / bp: 6c5b.
  1E:  W (FF) --> seems the RAMDAC mask.

  20: R    DSW #4-0
  21: R    DSW #4-1
  22:  W
  24:  W
  25: R    DSW #2
  26: R    DSW #3

  2F:  W (9C)

  E0:  W
  E1:  W    Reels enable/disable register

*/

void sanghopm_state::ramdac_map(address_map &map)
{
	map(0x000, 0x3ff).rw("ramdac", FUNC(ramdac_device::ramdac_pal_r), FUNC(ramdac_device::ramdac_rgb666_w));
}

/*
  RAMDAC written commands:

  1C   1D 1D 1D       1C   1D 1D 1D       1C   1D 1D 1D       1C   1D 1D 1D
  -------------       -------------       -------------       -------------
  00   00 00 00       10   00 00 00       20   00 00 00       30   00 00 00
  01   E8 18 06       11   E8 18 06       21   E8 18 06       31   E8 18 06
  02   FC EA 00       12   FC EA 00       22   FC EA 00       32   FC EA 00
  03   FF FF 00       13   FF FF 00       23   FF FF 00       33   FF FF 00
  04   FF 00 00       14   FF 00 00       24   FF 00 00       34   FF 00 00
  05   00 00 FF       15   00 00 FF       25   00 00 FF       35   00 00 FF
  06   00 E6 00       16   00 E6 00       26   00 E6 00       36   00 E6 00
  07   01 F0 02       17   01 F0 02       27   01 F0 02       37   01 F0 02
  08   EF FF E8       18   EF FF E8       28   EF FF E8       38   EF FF E8
  09   12 08 F2       19   12 08 F2       29   12 08 F2       39   12 08 F2
  0A   1A 12 FF       1A   1A 12 FF       2A   1A 12 FF       3A   1A 12 FF
  0B   1F 1F F9       1B   1F 1F F9       2B   1F 1F F9       3B   1F 1F F9
  0C   F9 F9 F9       1C   F9 F9 F9       2C   F9 F9 F9       3C   F9 F9 F9
  0D   EF 18 00       1D   EF 18 00       2D   EF 18 00       3D   EF 18 00
  0E   F0 F0 F0       1E   F0 F0 F0       2E   F0 F0 F0       3E   F0 F0 F0
  0F   FF FF FF       1F   FF 00 00       2F   00 FF FF       3F   00 FF 00


  1C   1D 1D 1D       1C   1D 1D 1D       1C   1D 1D 1D       1C   1D 1D 1D
  -------------       -------------       -------------       -------------
  40   00 00 00       50   00 00 00       60   00 00 00       70   00 00 00
  41   E8 18 06       51   E8 18 06       61   E8 18 06       71   E8 18 06
  42   FC EA 00       52   FC EA 00       62   FC EA 00       72   FC EA 00
  43   FF FF 00       53   FF FF 00       63   FF FF 00       73   FF FF 00
  44   FF 00 00       54   FF 00 00       64   FF 00 00       74   FF 00 00
  45   00 00 FF       55   00 00 FF       65   00 00 FF       75   00 00 FF
  46   00 E6 00       56   00 E6 00       66   00 E6 00       76   00 E6 00
  47   01 F0 02       57   01 F0 02       67   01 F0 02       77   01 F0 02
  48   EF FF E8       58   EF FF E8       68   EF FF E8       78   EF FF E8
  49   12 08 F2       59   12 08 F2       69   12 08 F2       79   12 08 F2
  4A   1A 12 FF       5A   1A 12 FF       6A   1A 12 FF       7A   1A 12 FF
  4B   1F 1F F9       5B   1F 1F F9       6B   1F 1F F9       7B   1F 1F F9
  4C   F9 F9 F9       5C   F9 F9 F9       6C   F9 F9 F9       7C   F9 F9 F9
  4D   EF 18 00       5D   EF 18 00       6D   EF 18 00       7D   EF 18 00
  4E   F0 F0 F0       5E   01 EC FF       6E   00 00 00       7E   00 00 00
  4F   FF FF 00       5F   00 00 00       6F   01 EC FF       7F   00 00 00


  1C   1D 1D 1D       1C   1D 1D 1D       1C   1D 1D 1D       1C   1D 1D 1D
  -------------       -------------       -------------       -------------
  80   28 28 28       90   28 28 28       A0   28 28 28       B0   28 28 28
  81   FF ED E3       91   0B 00 00       A1   18 11 00       B1   02 16 00
  82   FF F7 1E       92   13 00 00       A2   00 E1 00       B2   02 E1 00
  83   FF F8 18       93   1C 00 00       A3   00 E8 00       B3   01 ED 02
  84   14 0B 0B       94   E5 00 00       A4   13 F0 00       B4   02 FA 09
  85   1F 10 0A       95   ED 00 00       A5   FF F7 1E       B5   F1 1A 00
  86   E3 13 08       96   F6 00 00       A6   FF F0 EE       B6   F1 EA 00
  87   E8 18 06       97   FF 05 0D       A7   EF 18 00       B7   1F 00 00
  88   EC 1E 03       98   FF 0C 13       A8   F4 1B 00       B8   F2 00 00
  89   F0 E3 02       99   FF 13 19       A9   FD 1F 00       B9   FF 00 00
  8A   F5 E9 01       9A   FF 1A 1F       AA   FF E3 00       BA   FF 0C 02
  8B   FA EF 01       9B   FF E2 E6       AB   FF EA 00       BB   FF 18 06
  8C   FF F6 00       9C   FF E9 EC       AC   FF F1 00       BC   FF E3 0A
  8D   FF FF 00       9D   FF F0 F2       AD   FF F8 00       BD   FF EC 19
  8E   FF FF 1F       9E   FF F7 F8       AE   FF FF 00       BE   FF F4 1F
  8F   FF FF FF       9F   FF FF FF       AF   FF FF 1F       BF   FF FF FF


  1C   1D 1D 1D       1C   1D 1D 1D       1C   1D 1D 1D       1C   1D 1D 1D
  -------------       -------------       -------------       -------------
  C0   28 28 28       D0   28 28 28       E0   28 28 28       F0   12 12 E0
  C1   F1 E6 00       D1   00 00 E4       E1   00 05 00       F1   1B 00 00
  C2   F8 F1 00       D2   00 00 FF       E2   00 0A 00       F2   E0 10 04
  C3   FF FF 00       D3   00 13 FF       E3   00 10 00       F3   E9 14 05
  C4   14 07 E7       D4   00 1A FF       E4   00 15 00       F4   EF 1E 12
  C5   15 0C EF       D5   00 E8 FF       E5   00 1B 00       F5   EC E3 1A
  C6   1A 12 FA       D6   16 0B 00       E6   00 E0 00       F6   EE 05 04
  C7   1B 16 FA       D7   19 0F 00       E7   00 E6 00       F7   F4 05 04
  C8   1D 1A FB       D8   1D 14 00       E8   04 EC 05       F8   FE 04 04
  C9   1F 1E FC       D9   E5 1A 00       E9   0C F2 0E       F9   F6 E4 15
  CA   E2 E2 FC       DA   EE E0 00       EA   15 F8 18       FA   F8 EC E0
  CB   E6 E7 FD       DB   F6 E6 00       EB   E0 FF E3       FB   FD F0 E4
  CC   EA EC FE       DC   FF ED 00       EC   FD 0C 02       FC   FF F6 E7
  CD   EF F1 FF       DD   FF F6 00       ED   FD 12 0D       FD   FF FA EA
  CE   F6 F8 FF       DE   FF FF 00       EE   FE 1A 18       FE   FF FF F2
  CF   FF FF FF       DF   FF FF FF       EF   FF E4 E4       FF   FF FF FF


  And set again....

  1C   1D 1D 1D       1C   1D 1D 1D
  -------------       -------------
  70   00 00 00       F0   12 12 E0
  71   18 0C F6       F1   1B 00 00
  72   1B 13 0B       F2   E0 10 04
  73   E1 15 1E       F3   E9 14 05
  74   F3 E9 E4       F4   EF 1E 12
  75   F3 E7 00       F5   EC E3 1A
  76   FE 17 E3       F6   EE 05 04
  77   FE 0C F1       F7   F4 05 04
  78   FD E3 13       F8   FE 04 04
  79   FE ED 05       F9   F6 E4 15
  7A   FF F5 03       FA   F8 EC E0
  7B   FF FB 14       FB   FD F0 E4
  7C   FC FB FA       FC   FF F6 E7
  7D   FF FC E0       FD   FF FA EA
  7E   FE FE FC       FE   FF FF F2
  7F   FF 00 FF       FF   FF FF FF

*/


void cb3_state::ncb3_port81_w(uint8_t data)
{
//  if (data!=0x00)
//      popmessage("ncb3_port81_w %02x\n",data);
}


void cb3_state::ncb3_map(address_map &map)
{
	map(0x0000, 0xb7ff).rom();
	map(0xb800, 0xbfff).ram().share("nvram");
	map(0xc000, 0xc7ff).rom();
	map(0xc800, 0xcfff).ram().w(FUNC(cb3_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xd000, 0xd7ff).ram().w(FUNC(cb3_state::fg_atrram_w)).share(m_fg_atrram);
	map(0xd800, 0xd9ff).ram().w(FUNC(cb3_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xe000, 0xe1ff).ram().w(FUNC(cb3_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xe800, 0xe9ff).ram().w(FUNC(cb3_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xf040, 0xf07f).ram().share(m_reel_scroll[0]);
	map(0xf080, 0xf0bf).ram().share(m_reel_scroll[1]);
	map(0xf100, 0xf17f).ram().share(m_reel_scroll[2]); // moved compared to goldstar

	map(0xf800, 0xf803).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xf810, 0xf813).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xf820, 0xf823).rw("ppi8255_2", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input/Output Ports
	map(0xf822, 0xf822).w(FUNC(cb3_state::goldstar_fa00_w));  // hack (connected to ppi output port?, needed for colour banking)

	map(0xf830, 0xf830).rw("aysnd", FUNC(ay8910_device::data_r), FUNC(ay8910_device::data_w));
	map(0xf840, 0xf840).w("aysnd", FUNC(ay8910_device::address_w));
	map(0xf850, 0xf850).w(FUNC(cb3_state::p1_lamps_w));       // Control Set 1 lamps
	map(0xf860, 0xf860).w(FUNC(cb3_state::p2_lamps_w));       // Control Set 2 lamps
	map(0xf870, 0xf870).w("snsnd", FUNC(sn76489_device::write));  // guess... device is initialized, but doesn't seems to be used.
}

void cb3_state::chryangla_map(address_map &map) // most to be verified when the game will show more than test screens only
{
	map(0x0000, 0xbfff).rom();
	map(0xc000, 0xc7ff).ram().share("nvram");
	map(0xc800, 0xcfff).ram().w(FUNC(cb3_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xd000, 0xd7ff).ram().w(FUNC(cb3_state::fg_atrram_w)).share(m_fg_atrram);
	map(0xd800, 0xd9ff).ram().w(FUNC(cb3_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xe000, 0xe1ff).ram().w(FUNC(cb3_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xe800, 0xe9ff).ram().w(FUNC(cb3_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xf040, 0xf07f).ram().share(m_reel_scroll[0]);
	map(0xf080, 0xf0bf).ram().share(m_reel_scroll[1]);
	map(0xf100, 0xf17f).ram().share(m_reel_scroll[2]); // moved compared to goldstar

	map(0xf800, 0xf803).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xf810, 0xf813).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xf820, 0xf823).rw("ppi8255_2", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input/Output Ports
	map(0xf822, 0xf822).w(FUNC(cb3_state::goldstar_fa00_w));  // hack (connected to ppi output port?, needed for colour banking)

	map(0xf830, 0xf830).rw("aysnd", FUNC(ay8910_device::data_r), FUNC(ay8910_device::data_w));
	map(0xf840, 0xf840).w("aysnd", FUNC(ay8910_device::address_w));
	map(0xf850, 0xf850).w(FUNC(cb3_state::p1_lamps_w));       // Control Set 1 lamps
	map(0xf860, 0xf860).w(FUNC(cb3_state::p2_lamps_w));       // Control Set 2 lamps
	map(0xf870, 0xf870).w("snsnd", FUNC(sn76489_device::write));  // guess... device is initialized, but doesn't seems to be used.
}

void cb3_state::chryangla_decrypted_opcodes_map(address_map &map)
{
	map(0x0000, 0xffff).rom().share(m_decrypted_opcodes);
	map(0xf800, 0xffff).ram();
}

void cb3_state::ncb3_readwriteport(address_map &map)
{
	map.global_mask(0xff);
//  map(0x00, 0x00).r(FUNC(cb3_state::ncb3_unkread_r));    // read from 0x00 when controls set 1 is used...
//  map(0x02, 0x02).r(FUNC(cb3_state::ncb3_unkread_r));    // read from 0x02 when controls set 2 is used...
//  map(0x06, 0x06).r(FUNC(cb3_state::ncb3_unkread_r));    // unknown...
//  map(0x08, 0x08).r(FUNC(cb3_state::ncb3_unkread_r));    // unknown...
	map(0x10, 0x10).portr("DSW5");  // confirmed for ncb3
	map(0x81, 0x81).w(FUNC(cb3_state::ncb3_port81_w));  // ---> large writes.

}

/* ncb3 findings...

  c101-c102 = unknown writes...
  f800-f803 = 8255_1 (ctrl=9b) ; portA, B & C (input)
  f810-f813 = 8255_2 (ctrl=9b) ; portA, B & C (input)
  f820-f823 = 8255_3 (ctrl=90) ; portA (input); ports B & C (output)
  f830      = AY8910 RW
  f840      = AY8910 ctrl
  f850      = control set 1 lamps
  f860      = control set 2 lamps
  f870      = PSG (init writes)


  I/O

  00 = RW  (chrygld, ncb3 in ctrl set1)
  02 = R  (W - ncb3 in ctrl set2)
  06 = W
  08 = RW
  81 =  W

  00-0f = initial seq. writes

  Controls Set 1 = write lamps to f850, read from 0002.
  Controls Set 2 = write lamps to f860, read from 0000.

  Controls Set 2 is using reels stop buttons from Controls Set 1.
  So, seems that control set 2 was meant for non-stop reels.

*/

void goldstar_state::wcherry_map(address_map &map)
{
	map(0x0000, 0xb7ff).rom();
	map(0xb800, 0xbfff).ram().share("nvram");
	map(0xc000, 0xc7ff).rom();

	// Video RAM and reels stuff are there just as placeholder, and obviously in wrong offset
	map(0xc800, 0xcfff).ram().w(FUNC(goldstar_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xd000, 0xd7ff).ram().w(FUNC(goldstar_state::fg_atrram_w)).share(m_fg_atrram);
	map(0xd800, 0xd9ff).ram().w(FUNC(goldstar_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xe000, 0xe1ff).ram().w(FUNC(goldstar_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xe800, 0xe9ff).ram().w(FUNC(goldstar_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xf040, 0xf07f).ram().share(m_reel_scroll[0]);
	map(0xf080, 0xf0bf).ram().share(m_reel_scroll[1]);
	map(0xf0c0, 0xf0ff).ram().share(m_reel_scroll[2]);

	// Not really PPI's... They are emulated/simulated inside the CPLDs
	map(0xf600, 0xf603).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xf610, 0xf613).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xf620, 0xf623).rw("ppi8255_2", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input/Output Ports

	map(0xf630, 0xf630).rw("aysnd", FUNC(ay8910_device::data_r), FUNC(ay8910_device::data_w));
	map(0xf640, 0xf640).w("aysnd", FUNC(ay8910_device::address_w));
	map(0xf650, 0xf650).nopw();    //.w(FUNC(goldstar_state::output_w));  // unknown register: 0x3e
	map(0xf660, 0xf660).nopw();    //.w(FUNC(goldstar_state::output_w));  // unknown register: 0x3e
	map(0xf670, 0xf670).w("snsnd", FUNC(sn76489_device::write));  // guess... device is initialized, but doesn't seems to be used.

	map(0xfc00, 0xffff).rom();
}

void goldstar_state::wcherry_readwriteport(address_map &map)
{
	map.global_mask(0xff);
}

/* wcherry findings...

  0000-bfff = ROM space.
  b000-b7ff = NVRAM.
  c000-c7ff = ROM space.

  f600-f603 = 8255_1 (ctrl=9b) ; portA, B & C (input)
  f610-f613 = 8255_2 (ctrl=9b) ; portA, B & C (input)
  f620-f623 = 8255_3 (ctrl=90) ; portA (input); ports B & C (output)
  f630      = AY8910 RW
  f640      = AY8910 ctrl
  f650      = Unknown. Seems a register. Writes 0x3e.
  f660      = Unknown. Seems a register. Writes 0x3e.
  f670      = PSG (init writes)

  I/O

*/


void cmaster_state::cm_map(address_map &map)
{
	map(0x0000, 0xcfff).rom().nopw();

	map(0xd000, 0xd7ff).ram().share("nvram");
	map(0xd800, 0xdfff).ram();

	map(0xe000, 0xe7ff).ram().w(FUNC(cmaster_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xe800, 0xefff).ram().w(FUNC(cmaster_state::fg_atrram_w)).share(m_fg_atrram);

	map(0xf000, 0xf1ff).ram().w(FUNC(cmaster_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xf200, 0xf3ff).ram().w(FUNC(cmaster_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xf400, 0xf5ff).ram().w(FUNC(cmaster_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xf600, 0xf7ff).ram();

	map(0xf800, 0xf87f).ram().share(m_reel_scroll[0]);
	map(0xf880, 0xf9ff).ram();
	map(0xfa00, 0xfa7f).ram().share(m_reel_scroll[1]);
	map(0xfa80, 0xfbff).ram();
	map(0xfc00, 0xfc7f).ram().share(m_reel_scroll[2]);
	map(0xfc80, 0xffff).ram();
}

void cmaster_state::super7_map(address_map &map)
{
	map(0x0000, 0xcfff).rom().nopw();

	map(0xd000, 0xdfff).ram().share("nvram"); // double the size if compared to cmaster

	map(0xe000, 0xe7ff).ram().w(FUNC(cmaster_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xe800, 0xefff).ram().w(FUNC(cmaster_state::fg_atrram_w)).share(m_fg_atrram);

	map(0xf000, 0xf1ff).ram().w(FUNC(cmaster_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xf200, 0xf3ff).ram().w(FUNC(cmaster_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xf400, 0xf5ff).ram().w(FUNC(cmaster_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xf600, 0xf7ff).ram();

	map(0xf800, 0xf87f).ram().share(m_reel_scroll[0]);
	map(0xf880, 0xf9ff).ram();
	map(0xfa00, 0xfa7f).ram().share(m_reel_scroll[1]);
	map(0xfa80, 0xfbff).ram();
	map(0xfc00, 0xfc7f).ram().share(m_reel_scroll[2]);
	map(0xfc80, 0xffff).ram();
}

void cmaster_state::jkrmast_map(address_map &map)
{
	map(0x0000, 0xcfff).rom().nopw();

	map(0xd000, 0xd7ff).ram().share("nvram");
	map(0xd800, 0xdfff).ram();

	map(0xe000, 0xe7ff).ram().w(FUNC(cmaster_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xe800, 0xefff).ram().w(FUNC(cmaster_state::fg_atrram_w)).share(m_fg_atrram);

	map(0xf000, 0xf1ff).ram().w(FUNC(cmaster_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xf200, 0xf3ff).ram().w(FUNC(cmaster_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xf400, 0xf5ff).ram().w(FUNC(cmaster_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xf600, 0xf7ff).ram().w(FUNC(cmaster_state::bg_vidram_w)).share(m_bg_vidram);

	map(0xf800, 0xf87f).ram().share(m_reel_scroll[0]);
	map(0xf880, 0xf9ff).ram();
	map(0xfa00, 0xfa7f).ram().share(m_reel_scroll[1]);
	map(0xfa80, 0xfbff).ram();
	map(0xfc00, 0xfc7f).ram().share(m_reel_scroll[2]);
	map(0xfc80, 0xfdff).ram();
	map(0xfe00, 0xffff).ram().share(m_bg_scroll);
}

void cmaster_state::cmast92_map(address_map &map)
{
	map(0x0000, 0xcfff).rom();

	map(0xe000, 0xefff).ram().share("nvram");

	// TODO: the following ranges are here only to avoid MAME crashing,
	// should be removed and the newer GFX hardware should be emulated.

	map(0xd000, 0xd7ff).ram().w(FUNC(cmaster_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xd800, 0xdfff).ram().w(FUNC(cmaster_state::fg_atrram_w)).share(m_fg_atrram);

	map(0xf000, 0xf1ff).ram().w(FUNC(cmaster_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xf200, 0xf3ff).ram().w(FUNC(cmaster_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xf400, 0xf5ff).ram().w(FUNC(cmaster_state::reel_ram_w<2>)).share(m_reel_ram[2]);

	map(0xf800, 0xf87f).ram().share(m_reel_scroll[0]);
	map(0xfa00, 0xfa7f).ram().share(m_reel_scroll[1]);
	map(0xfc00, 0xfc7f).ram().share(m_reel_scroll[2]);
}

void cmast97_state::cmast97_map(address_map &map)
{
	map(0x0000, 0xcfff).rom().nopw();

	map(0xd000, 0xd7ff).ram().share("nvram");
	map(0xd800, 0xdfff).ram();

	map(0xe000, 0xe7ff).ram().w(FUNC(cmast97_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xe800, 0xefff).ram().w(FUNC(cmast97_state::fg_atrram_w)).share(m_fg_atrram);

	map(0xf000, 0xffff).view(m_gfx_view);
	m_gfx_view[0](0xf000, 0xf7ff).ram().w(FUNC(cmast97_state::bg_vidram_w)).share(m_bg_vidram);
	m_gfx_view[0](0xf800, 0xffff).ram().w(FUNC(cmast97_state::bg_atrram_w)).share(m_bg_atrram);

	m_gfx_view[1](0xf000, 0xf1ff).ram().w(FUNC(cmast97_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	m_gfx_view[1](0xf200, 0xf3ff).ram().w(FUNC(cmast97_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	m_gfx_view[1](0xf400, 0xf5ff).ram().w(FUNC(cmast97_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	m_gfx_view[1](0xf600, 0xf7ff).ram();

	m_gfx_view[1](0xf800, 0xf87f).ram().share(m_reel_scroll[0]);
	m_gfx_view[1](0xf880, 0xf9ff).ram();
	m_gfx_view[1](0xfa00, 0xfa7f).ram().share(m_reel_scroll[1]);
	m_gfx_view[1](0xfa80, 0xfbff).ram();
	m_gfx_view[1](0xfc00, 0xfc7f).ram().share(m_reel_scroll[2]);
	m_gfx_view[1](0xfc80, 0xffff).ram();
}

void cmaster_state::nfm_map(address_map &map)
{
	map(0x0000, 0xd7ff).rom().nopw();

	map(0xd800, 0xdfff).ram().share("nvram");

	map(0xe000, 0xe7ff).ram().w(FUNC(cmaster_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xe800, 0xefff).ram().w(FUNC(cmaster_state::fg_atrram_w)).share(m_fg_atrram);

	map(0xf000, 0xf1ff).ram().w(FUNC(cmaster_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xf200, 0xf3ff).ram().w(FUNC(cmaster_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xf400, 0xf5ff).ram().w(FUNC(cmaster_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xf600, 0xf7ff).ram();

	map(0xf800, 0xf87f).ram().share(m_reel_scroll[0]);
	map(0xf880, 0xf9ff).ram();
	map(0xfa00, 0xfa7f).ram().share(m_reel_scroll[1]);
	map(0xfa80, 0xfbff).ram();
	map(0xfc00, 0xfc7f).ram().share(m_reel_scroll[2]);
	map(0xfc80, 0xffff).ram();
}

void cmaster_state::animalhs_map(address_map &map)
{
	map(0x0000, 0xb7ff).rom().nopw();

	map(0xd000, 0xd7ff).ram().w(FUNC(cmaster_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xd800, 0xdfff).ram().w(FUNC(cmaster_state::fg_atrram_w)).share(m_fg_atrram);

	map(0xe000, 0xe1ff).ram().w(FUNC(cmaster_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xe200, 0xe3ff).ram().w(FUNC(cmaster_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xe400, 0xe5ff).ram().w(FUNC(cmaster_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xe600, 0xe7ff).ram();

	map(0xe800, 0xe87f).ram().share(m_reel_scroll[0]);
	map(0xe880, 0xe9ff).ram();
	map(0xea00, 0xea7f).ram().share(m_reel_scroll[1]);
	map(0xea80, 0xebff).ram();
	map(0xec00, 0xec7f).ram().share(m_reel_scroll[2]);
	map(0xec80, 0xefff).ram();

	map(0xf000, 0xf7ff).ram().share("nvram");
	map(0xf800, 0xffff).ram();
}


void cmaster_state::coincount_w(uint8_t data)
{
/*  bits
  7654 3210
  ---- ---x  Coin Out counter
  ---- x---  Coin D counter
  ---x ----  Coin C counter
  --x- ----  Key In counter
  -x-- ----  Coin A counter
  x--- -xx-  unknown

  interestingly there is no counter for coin B in the cm/cmaster games

*/

	machine().bookkeeping().coin_counter_w(0, data & 0x40);  // Counter 1 Coin A
	machine().bookkeeping().coin_counter_w(1, data & 0x20);  // Counter 2 Key In
	machine().bookkeeping().coin_counter_w(2, data & 0x10);  // Counter 3 Coin C
	machine().bookkeeping().coin_counter_w(3, data & 0x08);  // Counter 4 Coin D
	machine().bookkeeping().coin_counter_w(4, data & 0x01);  // Counter 5 Payout

//  if (data & 0x86) // triggered by fb2010
//      popmessage("counters: %02X", data);

	m_ticket_dispenser->motor_w(BIT(data,7));
//	popmessage("counters-hopper: %02X", data);

}

void cmaster_state::cm_portmap(address_map &map)
{
	map.global_mask(0xff);
	map(0x01, 0x01).r("aysnd", FUNC(ay8910_device::data_r));
	map(0x02, 0x03).w("aysnd", FUNC(ay8910_device::data_address_w));
	map(0x04, 0x07).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Inputs
	map(0x08, 0x0b).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));  // DIP switches
	map(0x10, 0x10).w(FUNC(cmaster_state::outport0_w));
	map(0x11, 0x11).w(FUNC(cmaster_state::coincount_w));
	map(0x12, 0x12).w(FUNC(cmaster_state::p1_lamps_w));
	map(0x13, 0x13).w(FUNC(cmaster_state::background_col_w));
	map(0x14, 0x14).w(FUNC(cmaster_state::girl_scroll_w));
}

void cmaster_state::super7_portmap(address_map &map)
{
	map.global_mask(0xff);
	map(0x03, 0x03).w("aysnd", FUNC(ay8910_device::address_w));
	map(0x04, 0x04).portr("IN0");
	map(0x05, 0x05).portr("IN1");
	map(0x06, 0x06).portr("IN2");
	map(0x10, 0x10).w(FUNC(cmaster_state::outport0_w));
	map(0x11, 0x11).w(FUNC(cmaster_state::coincount_w));
	map(0x12, 0x12).w(FUNC(cmaster_state::p1_lamps_w));
	map(0x13, 0x13).w(FUNC(cmaster_state::background_col_w));
	map(0x14, 0x14).w(FUNC(cmaster_state::girl_scroll_w));
	map(0x81, 0x81).r("aysnd", FUNC(ay8910_device::data_r));
	map(0x82, 0x82).w("aysnd", FUNC(ay8910_device::data_w));
}

void cmast97_state::cmast97_portmap(address_map &map)  // TODO: other reads/writes
{
	map.global_mask(0xff);
	map(0x00, 0x00).lw8(NAME([this] (uint8_t data) { m_enable_reg = data; m_gfx_view.select(BIT(m_enable_reg, 4)); } ));
	map(0x01, 0x01).lw8(NAME([this] (uint8_t data) { m_tile_bank = (data & 0x0c) >> 2; if (data & 0xf3) logerror("unk tile bank w: %02x\n", data); }));
	map(0x09, 0x09).r("aysnd", FUNC(ay8910_device::data_r));
	map(0x0a, 0x0b).w("aysnd", FUNC(ay8910_device::data_address_w));
	map(0x0c, 0x0c).portr("DSW1");
	map(0x0d, 0x0d).portr("DSW2");
	map(0x0e, 0x0e).portr("DSW3");
	map(0x10, 0x10).portr("IN0");
	map(0x11, 0x11).portr("IN1");
	map(0x12, 0x12).portr("IN2");
}

void cmaster_state::cmtetriskr_portmap(address_map &map)
{
	map.global_mask(0xff);
	map(0x01, 0x01).r("aysnd", FUNC(ay8910_device::data_r));
	map(0x02, 0x03).w("aysnd", FUNC(ay8910_device::data_address_w));
	map(0x04, 0x04).portr("IN0");
	map(0x05, 0x05).portr("IN1");
	map(0x06, 0x06).portr("IN2");
	map(0x08, 0x08).portr("DSW1");
	map(0x09, 0x09).portr("DSW2");
	map(0x0a, 0x0a).portr("DSW3");
	map(0x10, 0x10).w(FUNC(cmaster_state::outport0_w));
	map(0x11, 0x11).w(FUNC(cmaster_state::coincount_w));
	map(0x12, 0x12).w(FUNC(cmaster_state::p1_lamps_w));
	map(0x13, 0x13).w(FUNC(cmaster_state::background_col_w));
	map(0x14, 0x14).w(FUNC(cmaster_state::girl_scroll_w));
}

void cmaster_state::cmv4zg_portmap(address_map &map)
{
	map.global_mask(0xff);
	map(0x01, 0x01).r("aysnd", FUNC(ay8910_device::data_r));
	map(0x02, 0x03).w("aysnd", FUNC(ay8910_device::data_address_w));
	map(0x04, 0x04).portr("IN0");
	map(0x15, 0x15).portr("IN1");
	map(0x16, 0x16).portr("IN2");
	//map(0x08, 0x08).r(); // doesn't seem to affect settings
	//map(0x09, 0x09).r(); // doesn't seem to affect settings. Maybe some kind of protection routine? See 0xb006 - b003f in dasm.
	map(0x10, 0x10).w(FUNC(cmaster_state::outport0_w));
	//map(0x11, 0x11).w(FUNC(cmaster_state::coincount_w));
	map(0x0b, 0x0b).w(FUNC(cmaster_state::coincount_w)); // remapped for counters and hopper control (24/08/2025)
	map(0x12, 0x12).w(FUNC(cmaster_state::p1_lamps_w));
	map(0x13, 0x13).w(FUNC(cmaster_state::background_col_w));
	map(0x14, 0x14).w(FUNC(cmaster_state::girl_scroll_w));
}

void cmaster_state::chryangl_decrypted_opcodes_map(address_map &map)
{
	map(0x0000, 0xffff).rom().share(m_decrypted_opcodes);
	map(0xf800, 0xffff).ram();
}

void cmaster_state::crazybon_portmap(address_map &map)
{
	map.global_mask(0xff);

	map(0x04, 0x04).r("aysnd", FUNC(ay8910_device::data_r));
	map(0x08, 0x08).w("aysnd", FUNC(ay8910_device::data_w));
	map(0x0c, 0x0c).w("aysnd", FUNC(ay8910_device::address_w));

	map(0x10, 0x10).portr("IN0");
	map(0x11, 0x11).portr("IN1");
	map(0x12, 0x12).portr("IN2");

	map(0x20, 0x20).portr("DSW3-0");
	map(0x21, 0x21).portr("DSW3-1");
	map(0x22, 0x22).w(FUNC(cmaster_state::p1_lamps_w));

	map(0x24, 0x24).w(FUNC(cmaster_state::coincount_w));
	map(0x25, 0x25).portr("DSW1");
	map(0x26, 0x26).portr("DSW2");

	map(0xf0, 0xf0).nopw();  // Writing 0's and 1's constantly.  Watchdog feeder?
}

void cmaster_state::pkrmast_portmap(address_map &map)
{
	map.global_mask(0xff);

	map(0x02, 0x02).portr("DSW6");
	map(0x03, 0x03).portr("DSW7");
	map(0x04, 0x04).r("aysnd", FUNC(ay8910_device::data_r));
	map(0x08, 0x08).w("aysnd", FUNC(ay8910_device::data_w));
	map(0x0c, 0x0c).w("aysnd", FUNC(ay8910_device::address_w));

	map(0x20, 0x20).portr("DSW1");
	map(0x21, 0x21).portr("DSW2");
	map(0x22, 0x22).portr("DSW3").w(FUNC(cmaster_state::p1_lamps_w));

	map(0x24, 0x24).portr("IN2").w(FUNC(cmaster_state::coincount_w));
	map(0x25, 0x25).portr("IN0");
	map(0x26, 0x26).portr("IN1");

	map(0x29, 0x29).portr("DSW4");  // actually it reads DSW4 and DSW5. Muxed?

	map(0xf0, 0xf0).nopw();  // Writing 0's and 1's constantly.  Watchdog feeder?
}

void cmaster_state::jkrmast_portmap(address_map &map)
{
	map.global_mask(0xff);
	map(0x06, 0x06).portr("DSW1");
	map(0x07, 0x07).portr("DSW2");
	map(0x09, 0x09).r("aysnd", FUNC(ay8910_device::data_r));
	map(0x0a, 0x0b).w("aysnd", FUNC(ay8910_device::data_address_w));
	map(0x10, 0x10).portr("IN1");
	map(0x11, 0x11).portr("IN0");
	map(0x12, 0x12).portr("IN2");
	map(0x17, 0x17).lw8(NAME([this] (uint8_t data) { m_reel_bank = (data & 0x30) >> 4; m_bgcolor = data & 0x03; m_bg_tilemap->mark_all_dirty(); }));
	// map(0x18, 0x18).w // enable reg?
}

void cmaster_state::eldoraddoa_portmap(address_map &map)  // TODO: incomplete!
{
	map.global_mask(0xff);

	map(0x01, 0x01).w("aysnd", FUNC(ay8910_device::data_w));
	map(0x02, 0x02).r("aysnd", FUNC(ay8910_device::data_r));
	map(0x03, 0x03).w("aysnd", FUNC(ay8910_device::address_w));
	map(0x10, 0x10).portr("DSW1");
	map(0x11, 0x11).portr("DSW2");
	map(0x12, 0x12).portr("DSW3");
	map(0x13, 0x13).portr("DSW4");
	map(0x20, 0x20).portr("IN2").lw8(NAME([this] (uint8_t data) { m_reel_bank = (data & 0x30) >> 4; }));  // TODO: other bits are used, too
	map(0x21, 0x21).portr("IN0");
	map(0x22, 0x22).portr("IN1");
	map(0x23, 0x23).lr8(NAME([] () -> uint8_t { return 0xff; }));  // checks battery level here, among other things, writes should be lamps
}

void cmaster_state::animalhs_portmap(address_map &map)  // TODO: incomplete, maybe share base with above eldoraddoa_portmap once both have been verified
{
	map.global_mask(0xff);

	map(0x01, 0x01).w("aysnd", FUNC(ay8910_device::data_w));
	map(0x02, 0x02).r("aysnd", FUNC(ay8910_device::data_r));
	map(0x03, 0x03).w("aysnd", FUNC(ay8910_device::address_w));
	map(0x10, 0x10).portr("DSW1");
	map(0x11, 0x11).portr("DSW2");
	map(0x12, 0x12).portr("DSW3");
	map(0x13, 0x13).portr("DSW4");
	map(0x60, 0x60).portr("IN2").lw8(NAME([this] (uint8_t data) { m_reel_bank = (data & 0x30) >> 4; }));  // TODO: other bits are used, too
	map(0x61, 0x61).portr("IN0");
	map(0x62, 0x62).portr("IN1");
	map(0x63, 0x63).lr8(NAME([] () -> uint8_t { return 0xff; }));  // checks battery level here, among other things, writes should be lamps
}

void cmaster_state::cmast91_portmap(address_map &map)
{
	map.global_mask(0xff);
	map(0x00, 0x00).portr("IN0").w(FUNC(cmaster_state::outport0_w));
	map(0x01, 0x01).portr("IN1").w(FUNC(cmaster_state::background_col_w));
	map(0x02, 0x02).portr("IN2");
	map(0x10, 0x13).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));  // DIP switches
	map(0x21, 0x21).r("aysnd", FUNC(ay8910_device::data_r));
	map(0x22, 0x23).w("aysnd", FUNC(ay8910_device::data_address_w));
}

void cmaster_state::cmast92_portmap(address_map &map)
{
	map.global_mask(0xff);
	map(0x01, 0x01).r("aysnd", FUNC(ay8910_device::data_r));
	map(0x02, 0x03).w("aysnd", FUNC(ay8910_device::data_address_w));
	map(0x20, 0x23).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));  // DIP switches
	map(0x30, 0x30).portr("IN0");
	map(0x31, 0x31).portr("IN1");
	map(0x32, 0x32).portr("IN2");
	// writes to 0x30-0x35 seem to be video related, but different from the other sets in this driver
}

void cmaster_state::amcoe1_portmap(address_map &map)
{
	map.global_mask(0xff);
	map(0x01, 0x01).r("aysnd", FUNC(ay8910_device::data_r));
	map(0x02, 0x03).w("aysnd", FUNC(ay8910_device::data_address_w));
	map(0x04, 0x07).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0x08, 0x0b).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));  // DIP switches
	map(0x10, 0x10).w(FUNC(cmaster_state::outport0_w));
	map(0x11, 0x11).w(FUNC(cmaster_state::coincount_w));
	map(0x12, 0x12).w(FUNC(cmaster_state::p1_lamps_w));
	map(0x13, 0x13).w(FUNC(cmaster_state::background_col_w));
	map(0x20, 0x20).rw("oki", FUNC(okim6295_device::read), FUNC(okim6295_device::write));
}

void cmaster_state::amcoe2_portmap(address_map &map)
{
	map.global_mask(0xff);
	map(0x01, 0x01).r("aysnd", FUNC(ay8910_device::data_r));
	map(0x02, 0x03).w("aysnd", FUNC(ay8910_device::data_address_w));
	map(0x04, 0x07).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0x08, 0x0b).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));  // DIP switches
	map(0x10, 0x10).w(FUNC(cmaster_state::outport0_w));
	map(0x11, 0x11).w(FUNC(cmaster_state::coincount_w));
	map(0x12, 0x12).w(FUNC(cmaster_state::p1_lamps_w));
	map(0x13, 0x13).w(FUNC(cmaster_state::background_col_w));
}

void cmaster_state::nfm_portmap(address_map &map)
{
	amcoe2_portmap(map);

	map(0x17, 0x17).rw("oki", FUNC(okim6295_device::read), FUNC(okim6295_device::write));
}

void wingco_state::lucky8_map(address_map &map)
{
	map(0x0000, 0x7fff).rom();
	map(0x8000, 0x87ff).ram().share("nvram");
	map(0x8800, 0x8fff).ram().w(FUNC(wingco_state::fg_vidram_w)).share(m_fg_vidram);
	map(0x9000, 0x97ff).ram().w(FUNC(wingco_state::fg_atrram_w)).share(m_fg_atrram);
	map(0x9800, 0x99ff).ram().w(FUNC(wingco_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xa000, 0xa1ff).ram().w(FUNC(wingco_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xa800, 0xa9ff).ram().w(FUNC(wingco_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xb040, 0xb07f).ram().share(m_reel_scroll[0]);
	map(0xb080, 0xb0bf).ram().share(m_reel_scroll[1]);
	map(0xb100, 0xb17f).ram().share(m_reel_scroll[2]);

	map(0xb800, 0xb803).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xb810, 0xb813).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xb820, 0xb823).rw("ppi8255_2", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input/Output Ports
	map(0xb830, 0xb830).rw("aysnd", FUNC(ay8910_device::data_r), FUNC(ay8910_device::data_w));
	map(0xb840, 0xb840).w("aysnd", FUNC(ay8910_device::address_w));  // no sound... only use both ports for DSWs
	map(0xb850, 0xb850).w(FUNC(wingco_state::p1_lamps_w));
	map(0xb860, 0xb860).w(FUNC(wingco_state::p2_lamps_w));
	map(0xb870, 0xb870).w("snsnd", FUNC(sn76489_device::write));  // sound
	map(0xc000, 0xf7ff).rom();  // could be used by some sets like super972.
	map(0xf800, 0xffff).ram();
}

void wingco_state::luckybar_map(address_map &map)
{
	lucky8_map(map);
	map(0x8000, 0x87ff).ram().r(FUNC(wingco_state::nvram_r)).share(m_nvram);
}

void wingco_state::lucky8p_map(address_map &map)
{
	lucky8_map(map);

	map(0xf800, 0xffff).rom();
}

void wingco_state::animalw_map(address_map &map)
{
	lucky8_map(map);

	map(0xc000, 0xcfff).rom().region("maincpu", 0x4000);
	map(0xd000, 0xdfff).rom().region("maincpu", 0x5000);
	map(0xe000, 0xefff).rom().region("maincpu", 0x3000);
}


void wingco_state::nd8lines_map(address_map &map)
{
	map(0x0000, 0x7fff).rom();
	map(0x8000, 0x87ff).ram().share("nvram");
	map(0x8800, 0x8fff).ram().w(FUNC(wingco_state::fg_vidram_w)).share(m_fg_vidram);
	map(0x9000, 0x97ff).ram().w(FUNC(wingco_state::fg_atrram_w)).share(m_fg_atrram);
	map(0x9800, 0x99ff).ram().w(FUNC(wingco_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xa000, 0xa1ff).ram().w(FUNC(wingco_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xa800, 0xa9ff).ram().w(FUNC(wingco_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xb040, 0xb07f).ram().share(m_reel_scroll[0]);
	map(0xb080, 0xb0bf).ram().share(m_reel_scroll[1]);
	map(0xb100, 0xb17f).ram().share(m_reel_scroll[2]);
	map(0xb800, 0xb803).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));
	map(0xb810, 0xb813).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));
	map(0xb820, 0xb820).w(FUNC(wingco_state::system_outputc_w));
	map(0xb830, 0xb830).portr("DSW1");
	map(0xb840, 0xb840).portr("DSW3");
	map(0xb850, 0xb850).w(FUNC(wingco_state::p1_lamps_w));
	map(0xb860, 0xb860).w(FUNC(wingco_state::p2_lamps_w));
	map(0xb870, 0xb870).w("snsnd", FUNC(sn76489a_device::write)); // seems to write with swapped nibbles if compared to lucky8
	map(0xf800, 0xffff).ram();
}

void wingco_state::superdrg_map(address_map &map)
{
	map(0x0000, 0x7fff).rom();
	map(0x8000, 0x87ff).ram().share("nvram");
	map(0x8800, 0x8fff).ram().w(FUNC(wingco_state::fg_vidram_w)).share(m_fg_vidram);
	map(0x9000, 0x97ff).ram().w(FUNC(wingco_state::fg_atrram_w)).share(m_fg_atrram);
	map(0x9800, 0x99ff).ram().w(FUNC(wingco_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xa000, 0xa1ff).ram().w(FUNC(wingco_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xa800, 0xa9ff).ram().w(FUNC(wingco_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xb040, 0xb07f).ram().share(m_reel_scroll[0]);
	map(0xb080, 0xb0bf).ram().share(m_reel_scroll[1]);
	map(0xb100, 0xb17f).ram().share(m_reel_scroll[2]);

	map(0xb800, 0xb803).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));
	map(0xb810, 0xb813).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));
	map(0xb820, 0xb823).rw("ppi8255_2", FUNC(i8255_device::read), FUNC(i8255_device::write));
	map(0xb830, 0xb833).rw("ppi8255_3", FUNC(i8255_device::read), FUNC(i8255_device::write));
	map(0xb850, 0xb850).w(FUNC(wingco_state::p1_lamps_w));
	map(0xb860, 0xb860).w(FUNC(wingco_state::p2_lamps_w));
	map(0xb870, 0xb870).w("snsnd", FUNC(sn76489_device::write));
	map(0xb8f0, 0xb8f1).w("ym2413", FUNC(ym2413_device::write));
	// TODO: see below in suprdrg_opcodes_map
	map(0xc800, 0xffff).rom();
}

void goldstar_state::common_decrypted_opcodes_map(address_map &map)
{
	map(0x0000, 0x7fff).rom().share(m_decrypted_opcodes);
}

void goldstar_state::super972_decrypted_opcodes_map(address_map &map)
{
	map(0x0000, 0xffff).rom().share(m_decrypted_opcodes);
}

void wingco_state::superdrg_opcodes_map(address_map &map)
{
	map(0x0000, 0x7fff).rom().region("maincpu", 0x10000);
	// TODO: there's some weird shenanigan here. The game tries to read from 0xc400 but there's only 0xff there
	// So the game resets. By leaving it unmapped, 0x00 (NOP) is returned, and when the PC reaches 0xc800 the
	// game seems to more ore less run. Just a lucky coincidence, but later on luck subsides. What is actually
	// going on here?
	map(0xc800, 0xffff).rom().region("maincpu", 0x1c800);
}

void wingco_state::flaming7_map(address_map &map)
{
	map(0x0000, 0x7fff).rom();
	map(0x8000, 0x87ff).ram().share("nvram");
	map(0x8800, 0x8fff).ram().w(FUNC(wingco_state::fg_vidram_w)).share(m_fg_vidram);
	map(0x9000, 0x97ff).ram().w(FUNC(wingco_state::fg_atrram_w)).share(m_fg_atrram);

	map(0x9800, 0x99ff).ram().w(FUNC(wingco_state::reel_ram_w<0>)).share(m_reel_ram[0]);
//  map(0x9a00, 0x9fff).ram();
	map(0xa000, 0xa1ff).ram().w(FUNC(wingco_state::reel_ram_w<1>)).share(m_reel_ram[1]);
//  map(0xa200, 0xa7ff).ram();
	map(0xa800, 0xa9ff).ram().w(FUNC(wingco_state::reel_ram_w<2>)).share(m_reel_ram[2]);
//  map(0xaa00, 0xafff).ram();

//  map(0xb000, 0xb03f).ram();
	map(0xb040, 0xb07f).ram().share(m_reel_scroll[0]);
	map(0xb080, 0xb0bf).ram().share(m_reel_scroll[1]);
//  map(0xb0c0, 0xb0ff).ram();
	map(0xb100, 0xb17f).ram().share(m_reel_scroll[2]);
	map(0xb180, 0xb7ff).ram();

	map(0xb800, 0xb803).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports (92)
	map(0xb810, 0xb813).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports (9B)
	map(0xb820, 0xb823).rw("ppi8255_2", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input/Output Ports (90)
	map(0xb830, 0xb830).rw("aysnd", FUNC(ay8910_device::data_r), FUNC(ay8910_device::data_w));
	map(0xb840, 0xb840).w("aysnd", FUNC(ay8910_device::address_w));  // no sound... only use both ports for DSWs
	map(0xb850, 0xb850).w(FUNC(wingco_state::p1_lamps_w));
	map(0xb860, 0xb860).w(FUNC(wingco_state::p2_lamps_w));
	map(0xb870, 0xb870).w("snsnd", FUNC(sn76489_device::write));  // sound
//  map(0xc000, 0xd3ff).ram();
	map(0xf800, 0xffff).ram();
}
/*
  W 9A00-B7FF FF
 RW B000-B7FF 00

 Flaming7 custom hardware writes the bonus
 graphics at 9A80-9A89, and the "reel scroll"
 at B0C0-B0FF...

*/


/* need to check item by item...

    PPIs are OK:
    B800 = 9B (A, B, C, all input)
    B810 = 9B (A, B, C, all input)
    B820 = 90 (A input, B & C output)

    RAM/ROM/NVRAM are OK.

    Reels RAM and scroll are OK.
    (only reel 2 seems to be used by the game)

    Video & atr RAM are OK.

    PSG is OK.

    AY8910 ports are OK.

*/
void wingco_state::mbstar_map(address_map &map)
{
	map(0x0000, 0x7fff).rom();
	map(0x8000, 0x87ff).ram().share("nvram");
	map(0x8800, 0x8fff).ram().w(FUNC(wingco_state::fg_vidram_w)).share(m_fg_vidram);
	map(0x9000, 0x97ff).ram().w(FUNC(wingco_state::fg_atrram_w)).share(m_fg_atrram);
	map(0x9800, 0x99ff).ram().w(FUNC(wingco_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xa000, 0xa1ff).ram().w(FUNC(wingco_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xa800, 0xa9ff).ram().w(FUNC(wingco_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xb040, 0xb07f).ram().share(m_reel_scroll[0]);
	map(0xb080, 0xb0bf).ram().share(m_reel_scroll[1]);
	map(0xb100, 0xb17f).ram().share(m_reel_scroll[2]);

	map(0xb800, 0xb803).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xb810, 0xb813).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xb820, 0xb823).rw("ppi8255_2", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input/Output Ports
	map(0xb830, 0xb830).rw("aysnd", FUNC(ay8910_device::data_r), FUNC(ay8910_device::data_w));
	map(0xb840, 0xb840).w("aysnd", FUNC(ay8910_device::address_w));  // no sound... only use both ports for DSWs
	map(0xb850, 0xb850).w(FUNC(wingco_state::p1_lamps_w));
	map(0xb860, 0xb860).w(FUNC(wingco_state::p2_lamps_w));
	map(0xb870, 0xb870).w("snsnd", FUNC(sn76489_device::write));  // sound
	map(0xc000, 0xf7ff).rom();
	map(0xf800, 0xffff).ram();
}


void wingco_state::magodds_outb850_w(uint8_t data)
{
	// guess, could be wrong, this might just be lights

	if (data&0x20)
		m_tile_bank = 1;
	else
		m_tile_bank = 0;

	//popmessage("magodds_outb850_w %02x\n", data);

	m_fg_tilemap->mark_all_dirty();

}

void wingco_state::magodds_outb860_w(uint8_t data)
{
//  popmessage("magodds_outb860_w %02x\n", data);
}

void wingco_state::fl7w4_outc802_w(uint8_t data)
{
	m_fl7w4_id->write((data >> 6) & 0x01);
}

void wingco_state::magodds_map(address_map &map)
{
	map(0x0000, 0x7fff).rom();
	// where does the extra rom data map?? it seems like it should come straight
	// after the existing rom, but it can't if this is a plain z80?
	map(0x8000, 0x87ff).ram().share("nvram");
	map(0x8800, 0x8fff).ram().w(FUNC(wingco_state::fg_vidram_w)).share(m_fg_vidram);
	map(0x9000, 0x97ff).ram().w(FUNC(wingco_state::fg_atrram_w)).share(m_fg_atrram);
	map(0x9800, 0x99ff).ram().w(FUNC(wingco_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xa000, 0xa1ff).ram().w(FUNC(wingco_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xa900, 0xaaff).ram().w(FUNC(wingco_state::reel_ram_w<2>)).share(m_reel_ram[2]);  // +0x100 compared to lucky8
	map(0xb040, 0xb07f).ram().share(m_reel_scroll[0]);
	map(0xb080, 0xb0bf).ram().share(m_reel_scroll[1]);
	map(0xb100, 0xb17f).ram().share(m_reel_scroll[2]);

	map(0xb800, 0xb803).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xb810, 0xb813).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xb820, 0xb823).rw("ppi8255_2", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input/Output Ports
	map(0xb830, 0xb830).rw("aysnd", FUNC(ay8910_device::data_r), FUNC(ay8910_device::data_w));
	map(0xb840, 0xb840).w("aysnd", FUNC(ay8910_device::address_w));  // no sound... only use both ports for DSWs
	map(0xb850, 0xb850).w(FUNC(wingco_state::magodds_outb850_w));    // lamps
	map(0xb860, 0xb860).w(FUNC(wingco_state::magodds_outb860_w));    // watchdog
	map(0xb870, 0xb870).w("snsnd", FUNC(sn76489_device::write));     // sound
	map(0xc000, 0xffff).rom().region("maincpu", 0xc000);
}

void goldstar_state::kkotnoli_map(address_map &map)
{
	map(0x0000, 0x7fff).rom();
	map(0x8000, 0x87ff).ram();  // definitely no NVRAM
	map(0x8800, 0x8fff).ram().w(FUNC(goldstar_state::fg_vidram_w)).share(m_fg_vidram);
	map(0x9000, 0x97ff).ram().w(FUNC(goldstar_state::fg_atrram_w)).share(m_fg_atrram);
	map(0x9800, 0x99ff).ram().w(FUNC(goldstar_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xa000, 0xa1ff).ram().w(FUNC(goldstar_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xa800, 0xa9ff).ram().w(FUNC(goldstar_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xb040, 0xb07f).ram().share(m_reel_scroll[0]);
	map(0xb080, 0xb0bf).ram().share(m_reel_scroll[1]);
	map(0xb100, 0xb17f).ram().share(m_reel_scroll[2]);

	map(0xb800, 0xb803).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xb810, 0xb813).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xb820, 0xb823).rw("ppi8255_2", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Port
	map(0xb830, 0xb830).nopw();  // no ay8910
	map(0xb840, 0xb840).nopw();  // no ay8910
	map(0xb850, 0xb850).w(FUNC(goldstar_state::p1_lamps_w));
	map(0xb870, 0xb870).w("snsnd", FUNC(sn76489_device::write));  // sound
	map(0xf800, 0xffff).ram();
}


//void goldstar_state::ladylinr_outport_w(uint8_t data)
//{
/* LAMPS (b840)...

   .... ...x
   .... ..x.
   .... .x..
   .... x...  BET
   ...x ....  SMALL/INFO
   ..x. ....  START
   .x.. ....
   x... ....
*/
//  popmessage("Output: %02X", data);
//}

void goldstar_state::ladylinr_map(address_map &map)
{
	map(0x0000, 0x7fff).rom();
	map(0x8000, 0x87ff).ram().share("nvram");
	map(0x8800, 0x8fff).ram().w(FUNC(goldstar_state::fg_vidram_w)).share(m_fg_vidram);
	map(0x9000, 0x97ff).ram().w(FUNC(goldstar_state::fg_atrram_w)).share(m_fg_atrram);
	map(0x9800, 0x99ff).ram().w(FUNC(goldstar_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xa000, 0xa1ff).ram().w(FUNC(goldstar_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xa800, 0xa9ff).ram().w(FUNC(goldstar_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xb040, 0xb07f).ram().share(m_reel_scroll[0]);
	map(0xb080, 0xb0bf).ram().share(m_reel_scroll[1]);
	map(0xb100, 0xb17f).ram().share(m_reel_scroll[2]);

	map(0xb800, 0xb803).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xb810, 0xb813).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));  // DSW bank
	map(0xb830, 0xb830).w("aysnd", FUNC(ay8910_device::address_w));  // no sound... unused?
	map(0xb840, 0xb840).rw("aysnd", FUNC(ay8910_device::data_r), FUNC(ay8910_device::data_w));
	map(0xb850, 0xb850).nopw();  // just turn off the lamps, if exist
	map(0xb870, 0xb870).w("snsnd", FUNC(sn76489_device::write));  // sound
	map(0xf800, 0xffff).ram();
}

void wingco_state::wcat3_map(address_map &map)
{
	map(0x0000, 0x7fff).rom();
	map(0x8000, 0x87ff).ram().share("nvram");
	map(0x8800, 0x8fff).ram().w(FUNC(wingco_state::fg_vidram_w)).share(m_fg_vidram);
	map(0x9000, 0x97ff).ram().w(FUNC(wingco_state::fg_atrram_w)).share(m_fg_atrram);
	map(0x9800, 0x99ff).ram().w(FUNC(wingco_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xa000, 0xa1ff).ram().w(FUNC(wingco_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xa800, 0xa9ff).ram().w(FUNC(wingco_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xb040, 0xb07f).ram().share(m_reel_scroll[0]);
	map(0xb080, 0xb0bf).ram().share(m_reel_scroll[1]);
	map(0xb100, 0xb17f).ram().share(m_reel_scroll[2]);

	map(0xb800, 0xb803).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xb810, 0xb813).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input Ports
	map(0xb820, 0xb823).rw("ppi8255_2", FUNC(i8255_device::read), FUNC(i8255_device::write));  // Input/Output Ports
	map(0xb830, 0xb830).rw("aysnd", FUNC(ay8910_device::data_r), FUNC(ay8910_device::data_w));
	map(0xb840, 0xb840).w("aysnd", FUNC(ay8910_device::address_w));  // no sound... only use both ports for DSWs
	map(0xb850, 0xb850).w(FUNC(wingco_state::p1_lamps_w));
	map(0xb870, 0xb870).w("snsnd", FUNC(sn76489_device::write));  // sound
//  map(0xc000, 0xc003).rw("ppi8255_3", FUNC(i8255_device::read), FUNC(i8255_device::write));  // another PPI initialized?
	map(0xd000, 0xefff).rom();
	map(0xf000, 0xffff).ram();
}


// newer / more capable hw
void unkch_state::unkch_map(address_map &map)
{
	map(0x0000, 0xbfff).rom();
	map(0xc000, 0xc1ff).ram().w(m_palette, FUNC(palette_device::write8)).share("palette");
	map(0xc800, 0xc9ff).ram().w(m_palette, FUNC(palette_device::write8_ext)).share("palette_ext");

	map(0xd000, 0xd7ff).ram().share("nvram");

	map(0xd840, 0xd87f).ram().share(m_reel_scroll[0]);
	map(0xd880, 0xd8bf).ram().share(m_reel_scroll[1]);
	map(0xd900, 0xd93f).ram().share(m_reel_scroll[2]);
	map(0xdfc0, 0xdfff).ram();

	map(0xe000, 0xe7ff).ram().w(FUNC(unkch_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xe800, 0xefff).ram().w(FUNC(unkch_state::fg_atrram_w)).share(m_fg_atrram);

	map(0xf000, 0xf1ff).ram().w(FUNC(unkch_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xf200, 0xf3ff).ram().w(FUNC(unkch_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xf400, 0xf5ff).ram().w(FUNC(unkch_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xf600, 0xf7ff).ram();
	map(0xf800, 0xf9ff).ram().w(FUNC(unkch_state::reel_attrram_w<0>)).share(m_reel_attrram[0]);
	map(0xfa00, 0xfbff).ram().w(FUNC(unkch_state::reel_attrram_w<1>)).share(m_reel_attrram[1]);
	map(0xfc00, 0xfdff).ram().w(FUNC(unkch_state::reel_attrram_w<2>)).share(m_reel_attrram[2]);
	map(0xfe00, 0xffff).ram();
}


void unkch_state::coincount_w(uint8_t data)
{
/*
  7654 3210
  ---- --x-  Payout counter (rate set with DIP switches)
  ---- -x--  Credit counter (1 pulse/10 credits)
  ---- x---  Key In counter
  --xx ----  used for something during ticket dispensing
  x--- ----  Ticket Dispenser Motor
  -x-- ---x  unused/unknown

*/

	m_ticket_dispenser->motor_w(!BIT(data, 7));

	machine().bookkeeping().coin_counter_w(0, data & 0x04);  // Credit counter
	machine().bookkeeping().coin_counter_w(1, data & 0x08);  // Key In counter
	machine().bookkeeping().coin_counter_w(2, data & 0x02);  // payout counter

	//popmessage("coin counters: %02x", data);
}

void unkch_state::unkcm_0x02_w(uint8_t data)
{
/*  bits
  7654 3210
  ---- ---x     button lamp: Bet-A / Stop 2
  ---- --x-     button lamp: Start / Stop All
  ---- -x--     button lamp: Info / Small / Stop 3
  ---- x---     button lamp: Big
  ---x ----     button lamp: Bet-B / D-Up
  --x- ----     button lamp: Take / Stop 1
  -x-- ----     unknown/unused
  x--- ----     vblank IRQ enable

  these sets use crude PWM to dim lamp 2 which requires
  filament physics simulation to work properly

*/

	//popmessage("unkcm_0x02_w %02x", data);

	m_vblank_irq_enable = data & 0x80;
	if (!m_vblank_irq_enable)
		m_maincpu->set_input_line(INPUT_LINE_NMI, CLEAR_LINE);

	m_lamps[0] = BIT(data, 0);  // Bet-A / Stop 2
	m_lamps[1] = BIT(data, 1);  // Start / Stop All
	m_lamps[2] = BIT(data, 2);  // Info / Small / Stop 3
	m_lamps[3] = BIT(data, 3);  // Big
	m_lamps[4] = BIT(data, 4);  // Bet-B / D-Up
	m_lamps[5] = BIT(data, 5);  // Take / Stop 1
}

void unkch_state::unkcm_0x03_w(uint8_t data)
{
	// -x-- ----   seems to toggle when a 'normal' tilemap
	//             should be displayed instead of the reels?

	m_vidreg = data;

	//popmessage("unkcm_0x03_w %02x", data);
}


void unkch_state::unkch_portmap(address_map &map)
{
	map.global_mask(0xff);

	map(0x01, 0x01).w(FUNC(unkch_state::coincount_w));
	map(0x02, 0x02).w(FUNC(unkch_state::unkcm_0x02_w));
	map(0x03, 0x03).w(FUNC(unkch_state::unkcm_0x03_w));

	map(0x08, 0x08).portr("IN0");
	map(0x09, 0x09).portr("IN1");
	map(0x0a, 0x0a).portr("DSW4");
	map(0x0b, 0x0b).portr("DSW3");

	map(0x10, 0x10).r("aysnd", FUNC(ay8910_device::data_r));
	map(0x11, 0x11).w("aysnd", FUNC(ay8910_device::data_w));
	map(0x12, 0x12).w("aysnd", FUNC(ay8910_device::address_w));
}


void goldstar_state::megaline_map(address_map &map)
{
	map(0x0000, 0x9fff).rom();

	map(0xd000, 0xd03f).ram().share(m_reel_scroll[0]);
	map(0xd200, 0xd23f).ram().share(m_reel_scroll[1]);
	map(0xd400, 0xd43f).ram().share(m_reel_scroll[2]);

	map(0xd800, 0xd9ff).ram().w(FUNC(goldstar_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xda00, 0xdbff).ram().w(FUNC(goldstar_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xdc00, 0xddff).ram().w(FUNC(goldstar_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xde00, 0xdfff).ram();

	map(0xe000, 0xe7ff).ram().w(FUNC(goldstar_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xe800, 0xefff).ram().w(FUNC(goldstar_state::fg_atrram_w)).share(m_fg_atrram);
	map(0xf000, 0xf7ff).ram();
	map(0xf800, 0xffff).ram();
}

/* unknown I/O byte R/W

  PSGs:    A0 - C0 - E0

*/
void goldstar_state::megaline_portmap(address_map &map)  // TODO: verify everything. Strange reads at 0x0f and 0x07
{
	map.global_mask(0xff);
	map(0x20, 0x20).portr("IN0").nopw();  // ??
	map(0x40, 0x40).portr("IN1").nopw();  // ??
	map(0x60, 0x60).portr("IN2").nopw();  // ??
	map(0x80, 0x80).portr("IN3").nopw();  // ??
	map(0xa0, 0xa0).portr("IN4").w("sn1", FUNC(sn76489_device::write));
	map(0xc0, 0xc0).portr("DSW1").w("sn2", FUNC(sn76489_device::write));
	map(0xe0, 0xe0).portr("DSW2").w("sn3", FUNC(sn76489_device::write));
	map(0xe1, 0xe1).portr("DSW3");
	map(0xe2, 0xe2).portr("DSW4");
	//map(0xe3, 0xe3).portr("DSW5");
}


void unkch_state::bonusch_map(address_map &map)
{
// Reels stuff and RAM are there just as placeholder, and obviously in wrong offset

	map(0x0000, 0xbfff).rom();  // ok

	map(0xd800, 0xdfff).ram();  //.share("nvram");

	map(0xe000, 0xe7ff).ram().w(FUNC(unkch_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xe800, 0xefff).ram().w(FUNC(unkch_state::fg_atrram_w)).share(m_fg_atrram);

// just placeholders

	map(0xf000, 0xf1ff).ram().w(FUNC(unkch_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xf200, 0xf3ff).ram().w(FUNC(unkch_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xf400, 0xf5ff).ram().w(FUNC(unkch_state::reel_ram_w<2>)).share(m_reel_ram[2]);

	map(0xf640, 0xf67f).ram().share(m_reel_scroll[0]);
	map(0xf680, 0xf6bf).ram().share(m_reel_scroll[1]);
	map(0xf700, 0xf73f).ram().share(m_reel_scroll[2]);

	map(0xf800, 0xf9ff).ram().w(FUNC(unkch_state::reel_attrram_w<0>)).share(m_reel_attrram[0]);
	map(0xfa00, 0xfbff).ram().w(FUNC(unkch_state::reel_attrram_w<1>)).share(m_reel_attrram[1]);
	map(0xfc00, 0xfdff).ram().w(FUNC(unkch_state::reel_attrram_w<2>)).share(m_reel_attrram[2]);
}

/* Bonus Chance W-8

  clean 20h, 30h & 40h

  50h = SN76489 #1
  51h = SN76489 #2
  52h = SN76489 #3
  53h = SN76489 #4

  10h = RW
  20h = RW
  30h =  W
  40h =  W

  60h = R

*/
void unkch_state::bonusch_portmap(address_map &map)
{
	map.global_mask(0xff);
	map(0x10, 0x10).portr("IN0");
	map(0x20, 0x20).portr("IN1");
	map(0x50, 0x50).w("sn1", FUNC(sn76489_device::write));  // SN76489 #1
	map(0x51, 0x51).w("sn2", FUNC(sn76489_device::write));  // SN76489 #2
	map(0x52, 0x52).w("sn3", FUNC(sn76489_device::write));  // SN76489 #3
	map(0x53, 0x53).w("sn4", FUNC(sn76489_device::write));  // SN76489 #4
	map(0x60, 0x60).portr("IN3");
}


void wingco_state::lucky8tet_ioport(address_map &map)
{
	map.global_mask(0xff);
	map(0x00, 0xff).rw(FUNC(wingco_state::z80_io_r), FUNC(wingco_state::z80_io_w));
}

void wingco_state::tmcu_program_map(address_map &map)
{
	map(0x0000, 0x1fff).rom().region("tmcu",0);
}

void wingco_state::tmcu_io_map(address_map &map)
{
	map(0x0000, 0x01ff).rw(FUNC(wingco_state::tmcu_io_r), FUNC(wingco_state::tmcu_io_w));
}


void goldstar_state::feverch_map(address_map &map)
{
	map(0x0000, 0x7fff).rom();

	map(0xc000, 0xc7ff).ram();
	map(0xc800, 0xcfff).ram();
	map(0xd000, 0xd7ff).ram().w(FUNC(goldstar_state::fg_vidram_w)).share(m_fg_vidram);
	map(0xd800, 0xdfff).ram().w(FUNC(goldstar_state::fg_atrram_w)).share(m_fg_atrram);

	map(0xe000, 0xe1ff).ram().w(FUNC(goldstar_state::reel_ram_w<0>)).share(m_reel_ram[0]);
	map(0xe200, 0xe3ff).ram().w(FUNC(goldstar_state::reel_ram_w<1>)).share(m_reel_ram[1]);
	map(0xe400, 0xe5ff).ram().w(FUNC(goldstar_state::reel_ram_w<2>)).share(m_reel_ram[2]);
	map(0xe600, 0xe7ff).ram();

	map(0xe800, 0xe83f).ram().share(m_reel_scroll[0]);
	map(0xea00, 0xea3f).ram().share(m_reel_scroll[1]);
	map(0xec00, 0xec3f).ram().share(m_reel_scroll[2]);

	map(0xf000, 0xffff).ram();
}

void goldstar_state::feverch_portmap(address_map &map)
{
	map.global_mask(0xff);
	map(0x00, 0x03).rw("ppi8255_0", FUNC(i8255_device::read), FUNC(i8255_device::write));
	map(0x08, 0x0b).rw("ppi8255_1", FUNC(i8255_device::read), FUNC(i8255_device::write));
	map(0x10, 0x13).rw("ppi8255_2", FUNC(i8255_device::read), FUNC(i8255_device::write));
	map(0x20, 0x20).w("sn1", FUNC(sn76489_device::write));
	map(0x28, 0x28).w("sn2", FUNC(sn76489_device::write));
	map(0x30, 0x30).w("sn3", FUNC(sn76489_device::write));
	//map(0x38, 0x3b)
}

static INPUT_PORTS_START( cmv4_player )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_SLOT_STOP2 ) PORT_NAME("Stop 2 / Big")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP1 ) PORT_NAME("Stop 1 / D-UP")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SLOT_STOP_ALL ) PORT_NAME("Stop All / Take")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP3 ) PORT_NAME("Stop 3 / Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")
INPUT_PORTS_END

static INPUT_PORTS_START( cmv4_coins )
	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME("Coin B")  // Service coin in some cases
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_COIN4 ) PORT_IMPULSE(2) PORT_NAME("Coin D")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN3 ) PORT_IMPULSE(2) PORT_NAME("Coin C")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2) PORT_NAME("Coin A")
INPUT_PORTS_END

static INPUT_PORTS_START( cmv4_service )
	PORT_START("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_CUSTOM ) PORT_READ_LINE_DEVICE_MEMBER("hopper", FUNC(ticket_dispenser_device::line_r)) //PORT_CODE(KEYCODE_7_PAD) PORT_NAME("Hopper Coin")
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_CUSTOM ) // Hopper presence detect
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT ) PORT_NAME("Key Out / Attendant")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN ) PORT_CODE(KEYCODE_8_PAD) PORT_NAME("Hopper Payout")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")  // on some sets a DSW must be on/off to access this menu
INPUT_PORTS_END

static INPUT_PORTS_START( cmv4_dsw1 )
	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x00, "Hold Pair" )                 PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x01, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x00, "Hopper Out Switch" )         PORT_DIPLOCATION("DSW1:2")
	PORT_DIPSETTING(    0x00, "Active Low" )
	PORT_DIPSETTING(    0x02, "Active High" )
	PORT_DIPNAME( 0x04, 0x00, "Payout Mode" )               PORT_DIPLOCATION("DSW1:3")
	PORT_DIPSETTING(    0x00, "Payout Switch" )
	PORT_DIPSETTING(    0x04, "Automatic" )
	PORT_DIPNAME( 0x08, 0x00, "'7' In Double Up Game" )     PORT_DIPLOCATION("DSW1:4")
	PORT_DIPSETTING(    0x00, "Lose" )
	PORT_DIPSETTING(    0x08, "Even" )
	PORT_DIPNAME( 0x10, 0x00, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")
	PORT_DIPSETTING(    0x00, DEF_STR( Low ) )
	PORT_DIPSETTING(    0x10, DEF_STR( High ) )
	PORT_DIPNAME( 0x20, 0x00, "Double Up Game" )            PORT_DIPLOCATION("DSW1:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0xc0, 0x00, "Bet Max" )                   PORT_DIPLOCATION("DSW1:7,8")
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x40, "16" )
	PORT_DIPSETTING(    0x80, "32" )
	PORT_DIPSETTING(    0xc0, "64" )
INPUT_PORTS_END

static INPUT_PORTS_START( cmv4_dsw2 )
	PORT_START("DSW2")
	PORT_DIPNAME( 0x07, 0x07, "Main Game Pay Rate" )        PORT_DIPLOCATION("DSW2:1,2,3")
	PORT_DIPSETTING(    0x07, "1 (Lowest)" )
	PORT_DIPSETTING(    0x06, "2" )
	PORT_DIPSETTING(    0x05, "3" )
	PORT_DIPSETTING(    0x04, "4" )
	PORT_DIPSETTING(    0x03, "5" )
	PORT_DIPSETTING(    0x02, "6" )
	PORT_DIPSETTING(    0x01, "7" )
	PORT_DIPSETTING(    0x00, "8 (Highest)" )
	PORT_DIPNAME( 0x18, 0x18, "Hopper Limit" )              PORT_DIPLOCATION("DSW2:4,5")
	PORT_DIPSETTING(    0x18, "300" )
	PORT_DIPSETTING(    0x10, "500" )
	PORT_DIPSETTING(    0x08, "1000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x20, 0x20, "100+ Odds Sound" )           PORT_DIPLOCATION("DSW2:6")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, "Key In Type" )               PORT_DIPLOCATION("DSW2:7")
	PORT_DIPSETTING(    0x40, "A-Type" )
	PORT_DIPSETTING(    0x00, "B-Type" )
	PORT_DIPNAME( 0x80, 0x00, "Center Super 7 Bet Limit" )  PORT_DIPLOCATION("DSW2:8")
	PORT_DIPSETTING(    0x80, "Unlimited" )
	PORT_DIPSETTING(    0x00, "Limited" )
INPUT_PORTS_END

static INPUT_PORTS_START( cmv4_dsw3 )
	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x03, "Key In Rate" ) PORT_DIPLOCATION("DSW3:1,2")
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_10C ) )    PORT_CONDITION("DSW2",0x40,EQUALS,0x40)  // A-Type
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_20C ) )    PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_50C ) )    PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_100C ) )   PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C ) )     PORT_CONDITION("DSW2",0x40,EQUALS,0x00)  // B-Type
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_10C ) )    PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_25C ) )    PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_50C ) )    PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPNAME( 0x0c, 0x0c, "Coin A Rate" ) PORT_DIPLOCATION("DSW3:3,4")
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x0c, DEF_STR( 1C_10C ) )
	PORT_DIPNAME( 0x30, 0x30, "Coin D Rate" ) PORT_DIPLOCATION("DSW3:5,6")
	PORT_DIPSETTING(    0x30, DEF_STR( 5C_1C ) )    PORT_CONDITION("DSW4",0x10,EQUALS,0x10)  // C-Type
	PORT_DIPSETTING(    0x20, DEF_STR( 2C_1C ) )    PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_1C ) )    PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_2C ) )    PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C ) )    PORT_CONDITION("DSW4",0x10,EQUALS,0x00)  // D-Type
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_10C ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_25C ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x30, DEF_STR( 1C_50C ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPNAME( 0xc0, 0xc0, "Coin C Rate" ) PORT_DIPLOCATION("DSW3:7,8")
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x80, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0xc0, DEF_STR( 1C_10C ) )
INPUT_PORTS_END

static INPUT_PORTS_START( cmv4_dsw4 )
	PORT_START("DSW4")
	PORT_DIPNAME( 0x07, 0x07, "Credit Limit" )            PORT_DIPLOCATION("DSW4:1,2,3")
	PORT_DIPSETTING(    0x07, "5,000" )
	PORT_DIPSETTING(    0x06, "10,000" )
	PORT_DIPSETTING(    0x05, "20,000" )
	PORT_DIPSETTING(    0x04, "30,000" )
	PORT_DIPSETTING(    0x03, "40,000" )
	PORT_DIPSETTING(    0x02, "50,000" )
	PORT_DIPSETTING(    0x01, "100,000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x08, 0x08, "Display Of Payout Limit" ) PORT_DIPLOCATION("DSW4:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, "Type Of Coin D" )          PORT_DIPLOCATION("DSW4:5")
	PORT_DIPSETTING(    0x10, "C-Type" )
	PORT_DIPSETTING(    0x00, "D-Type" )
	PORT_DIPNAME( 0x20, 0x20, "Min. Bet For Bonus Play" ) PORT_DIPLOCATION("DSW4:6")
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x20, "16" )
	PORT_DIPNAME( 0x40, 0x40, "Reel Speed" )              PORT_DIPLOCATION("DSW4:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Low ) )
	PORT_DIPSETTING(    0x00, DEF_STR( High ) )
	PORT_DIPNAME( 0x80, 0x80, "Hopper Out By Coin A" )    PORT_DIPLOCATION("DSW4:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END

INPUT_PORTS_START( cmv4_dsw5 )
	PORT_START("DSW5")
	PORT_DIPNAME( 0x01, 0x01, "Display Of Doll On Demo" )          PORT_DIPLOCATION("DSW5:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x06, 0x06, "Coin In Limit" )                    PORT_DIPLOCATION("DSW5:2,3")
	PORT_DIPSETTING(    0x06, "1,000" )
	PORT_DIPSETTING(    0x04, "5,000" )
	PORT_DIPSETTING(    0x02, "10,000" )
	PORT_DIPSETTING(    0x00, "20,000" )
	PORT_DIPNAME( 0x18, 0x18, "Condition For 3 Kind Of Bonus" )    PORT_DIPLOCATION("DSW5:4,5")
	PORT_DIPSETTING(    0x18, "12-7-1" )
	PORT_DIPSETTING(    0x10, "9-5-1" )
	PORT_DIPSETTING(    0x08, "6-3-1" )
	PORT_DIPSETTING(    0x00, "3-2-1" )
	PORT_DIPNAME( 0x20, 0x20, "Display Of Doll At All Fr. Bonus" ) PORT_DIPLOCATION("DSW5:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Low ) )
	PORT_DIPSETTING(    0x00, DEF_STR( High ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unused ) )                  PORT_DIPLOCATION("DSW5:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, "Test Mode For Disp. Of Doll" )      PORT_DIPLOCATION("DSW5:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END


static INPUT_PORTS_START( cb3_dsw1 )
	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, "Game Style" )                PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, "Tokens" )
	PORT_DIPSETTING(    0x00, "Tickets" )
	PORT_DIPNAME( 0x02, 0x02, "Hopper Out Switch" )         PORT_DIPLOCATION("DSW1:2")
	PORT_DIPSETTING(    0x02, "Active Low" )
	PORT_DIPSETTING(    0x00, "Active High" )
	PORT_DIPNAME( 0x04, 0x04, "Payout Mode" )               PORT_DIPLOCATION("DSW1:3")
	PORT_DIPSETTING(    0x04, "Payout Switch" )
	PORT_DIPSETTING(    0x00, "Automatic" )
	PORT_DIPNAME( 0x08, 0x08, "'7' In Double Up Game" )     PORT_DIPLOCATION("DSW1:4")
	PORT_DIPSETTING(    0x08, "Lose" )
	PORT_DIPSETTING(    0x00, "Even" )
	PORT_DIPNAME( 0x10, 0x10, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")
	PORT_DIPSETTING(    0x10, "80%" )
	PORT_DIPSETTING(    0x00, "90%" )
	PORT_DIPNAME( 0x20, 0x20, "Double Up Game" )            PORT_DIPLOCATION("DSW1:6")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )
	PORT_DIPNAME( 0xc0, 0xc0, "Bet Max" )                   PORT_DIPLOCATION("DSW1:7,8")
	PORT_DIPSETTING(    0xc0, "8" )
	PORT_DIPSETTING(    0x80, "16" )
	PORT_DIPSETTING(    0x40, "32" )
	PORT_DIPSETTING(    0x00, "64" )
INPUT_PORTS_END

static INPUT_PORTS_START( cb3_dsw3 )
	PORT_INCLUDE( cmv4_dsw3 )
	PORT_MODIFY("DSW3")
	PORT_DIPNAME( 0x03, 0x03, "Key In Rate" )   PORT_DIPLOCATION("DSW3:1,2")
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C ) )        PORT_CONDITION("DSW2",0x40,EQUALS,0x40)  // A-Type
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_10C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_25C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_50C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_10C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x00)  // B-Type
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_20C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_50C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_100C ) )      PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPNAME( 0x30, 0x30, "Coin D Rate" )   PORT_DIPLOCATION("DSW3:5,6")
	PORT_DIPSETTING(    0x30, DEF_STR( 5C_1C ) )        PORT_CONDITION("DSW4",0x10,EQUALS,0x10)  // C-Type
	PORT_DIPSETTING(    0x20, DEF_STR( 2C_1C ) )        PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_1C ) )        PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_2C ) )        PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, "1 Ticket/5 Credits" )    PORT_CONDITION("DSW4",0x10,EQUALS,0x00)  // D-Type
	PORT_DIPSETTING(    0x10, "1 Ticket/10 Credits" )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x20, "1 Ticket/25 Credits" )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x30, "1 Ticket/50 Credits" )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
INPUT_PORTS_END

static INPUT_PORTS_START( cb3_dsw4 )
	PORT_INCLUDE( cmv4_dsw4 )
	PORT_MODIFY("DSW4")
	PORT_DIPNAME( 0x10, 0x10, "Coin D Type" )   PORT_DIPLOCATION("DSW4:5")
	PORT_DIPSETTING(    0x10, "C-Type (Tokens)" )
	PORT_DIPSETTING(    0x00, "D-Type (Tickets)" )
	PORT_DIPNAME( 0x80, 0x80, "Coin A Mode" )   PORT_DIPLOCATION("DSW4:8")
	PORT_DIPSETTING(    0x80, "Unexchange" )
	PORT_DIPSETTING(    0x00, "Exchange" )
INPUT_PORTS_END

static INPUT_PORTS_START( cb3_dsw5 )
	PORT_START("DSW5")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unused ) )   PORT_DIPLOCATION("DSW5:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x06, 0x06, "Coin In Limit" )     PORT_DIPLOCATION("DSW5:2,3")
	PORT_DIPSETTING(    0x06, "1,000" )
	PORT_DIPSETTING(    0x04, "5,000" )
	PORT_DIPSETTING(    0x02, "10,000" )
	PORT_DIPSETTING(    0x00, "20,000" )
	PORT_DIPNAME( 0x18, 0x10, "Coin Out Rate" )     PORT_DIPLOCATION("DSW5:4,5")
	PORT_DIPSETTING(    0x00, "100 Credits / 1 Pulse" )
	PORT_DIPSETTING(    0x08, "100 Credits / 5 Pulses" )
	PORT_DIPSETTING(    0x10, "100 Credits / 10 Pulses" )
	PORT_DIPSETTING(    0x18, "100 Credits / 100 Pulses" )
	PORT_DIPNAME( 0x20, 0x20, "Double Up Girl" )    PORT_DIPLOCATION("DSW5:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0xc0, 0xc0, "Coin In Rate" )      PORT_DIPLOCATION("DSW5:7,8")
	PORT_DIPSETTING(    0xc0, "100 Credits / 1 Pulse" )
	PORT_DIPSETTING(    0x40, "100 Credits / 5 Pulses" )
	PORT_DIPSETTING(    0x80, "100 Credits / 10 Pulses" )
	PORT_DIPSETTING(    0x00, "100 Credits / 100 Pulses" )
INPUT_PORTS_END


static INPUT_PORTS_START( cmv801 )
	PORT_INCLUDE( cmv4_player )

	PORT_INCLUDE( cmv4_coins )

	PORT_INCLUDE( cmv4_service )

	PORT_INCLUDE( cmv4_dsw1 )
	PORT_MODIFY("DSW1")
	// Hold Pair OK - use Take button
	// Hopper Out Switch not checked
	// Payout Mode not checked
	// '7' In Double Up Game OK
	PORT_DIPNAME( 0x10, 0x00, "Double Up Game Pay Rate" )  PORT_DIPLOCATION("DSW1:5")  // OK
	PORT_DIPSETTING(    0x00, "80%" )
	PORT_DIPSETTING(    0x10, "90%" )
	// Double Up Game OK
	PORT_DIPNAME( 0xc0, 0xc0, "Bet Max" )                  PORT_DIPLOCATION("DSW1:7,8")  // OK
	PORT_DIPSETTING(    0x00, "16" )
	PORT_DIPSETTING(    0x40, "32" )
	PORT_DIPSETTING(    0x80, "64" )
	PORT_DIPSETTING(    0xc0, "96" )

	PORT_INCLUDE( cmv4_dsw2 )
	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x07, 0x00, "Main Game Pay Rate" )  PORT_DIPLOCATION("DSW2:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "35%" )
	PORT_DIPSETTING(    0x06, "40%" )
	PORT_DIPSETTING(    0x05, "45%" )
	PORT_DIPSETTING(    0x04, "50%" )
	PORT_DIPSETTING(    0x03, "55%" )
	PORT_DIPSETTING(    0x02, "60%" )
	PORT_DIPSETTING(    0x01, "65%" )
	PORT_DIPSETTING(    0x00, "70%" )
	// Hopper Limit OK
	// 100+ Odds Sound not checked
	// Key In Type OK
	// Center Super 7 Bet Limit related with Min. Bet For Bonus Play (DSW4-6)

	PORT_INCLUDE( cmv4_dsw3 )  // all OK

	PORT_INCLUDE( cmv4_dsw4 )  // Display Of Payout Limit not working; all others OK

	PORT_INCLUDE( cmv4_dsw5 )
	PORT_MODIFY("DSW5")
	// Display of Doll On Demo only affects payout table screen
	// Coin In Limit OK
	// Condition For 3 Kind Of Bonus not checked
	// Display Of Doll At All Fr. Bonus not checked
	PORT_DIPNAME( 0x40, 0x40, "Card Shuffle Animation" )    PORT_DIPLOCATION("DSW5:7")  // OK
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	// Test Mode For Disp. Of Doll not working
INPUT_PORTS_END

static INPUT_PORTS_START( cmv4 )
	PORT_INCLUDE( cmv4_player )

	PORT_INCLUDE( cmv4_coins )

	PORT_INCLUDE( cmv4_service )

	PORT_INCLUDE( cmv4_dsw1 )
	PORT_MODIFY("DSW1")
	// Hold Pair OK - use Take button
	// Hopper Out Switch not checked
	// Payout Mode not checked
	// '7' In Double Up Game OK
	PORT_DIPNAME( 0x10, 0x00, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")  // OK
	PORT_DIPSETTING(    0x00, "40%" )
	PORT_DIPSETTING(    0x10, "60%" )
	// Double Up Game OK
	// Bet Max OK

	PORT_INCLUDE( cmv4_dsw2 )
	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x07, 0x00, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "30%" )
	PORT_DIPSETTING(    0x06, "38%" )
	PORT_DIPSETTING(    0x05, "46%" )
	PORT_DIPSETTING(    0x04, "54%" )
	PORT_DIPSETTING(    0x03, "62%" )
	PORT_DIPSETTING(    0x02, "70%" )
	PORT_DIPSETTING(    0x01, "78%" )
	PORT_DIPSETTING(    0x00, "86%" )
	// Hopper Limit OK
	// 100+ Odds Sound not checked
	// Key In Type OK
	// Center Super 7 Bet Limit related with Min. Bet For Bonus Play (DSW4-6)

	PORT_INCLUDE( cmv4_dsw3 )  // all OK

	PORT_INCLUDE( cmv4_dsw4 )  // all OK

	PORT_INCLUDE( cmv4_dsw5 )
	// Display of Doll On Demo only affects payout table screen
	// Coin In Limit OK
	// Condition For 3 Kind Of Bonus not checked
	// Display Of Doll At All Fr. Bonus not checked
	// DSW5-7 listed as unused
	// Test Mode For Disp. Of Doll not working
INPUT_PORTS_END

static INPUT_PORTS_START( animalhs )
	PORT_INCLUDE( cmv4 )

	PORT_START("DSW6")
	PORT_DIPNAME( 0x01, 0x01, "DSW6" )                  PORT_DIPLOCATION("DSW6:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW6:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW6:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW6:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW6:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW6:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW6:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW6:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END

static INPUT_PORTS_START( cmaster )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_SLOT_STOP3 ) PORT_NAME("Stop 3 / Big")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP1 ) PORT_NAME("Stop 1 / D-UP")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_TAKE )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SLOT_STOP_ALL ) PORT_NAME("Bet / Stop All")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP2 ) PORT_NAME("Stop 2 / Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")

	PORT_INCLUDE( cmv4_coins )

	PORT_INCLUDE( cmv4_service )

	PORT_INCLUDE( cmv4_dsw1 )
	PORT_MODIFY("DSW1")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unused ) )           PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	// Hopper Out Switch not checked
	// Payout Mode not checked
	// '7' In Double Up Game OK
	PORT_DIPNAME( 0x10, 0x00, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")  // OK
	PORT_DIPSETTING(    0x00, "60%" )
	PORT_DIPSETTING(    0x10, "70%" )
	// Double Up Game OK
	// Bet Max OK

	PORT_INCLUDE( cmv4_dsw2 )
	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x07, 0x00, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "45%" )
	PORT_DIPSETTING(    0x06, "50%" )
	PORT_DIPSETTING(    0x05, "55%" )
	PORT_DIPSETTING(    0x04, "60%" )
	PORT_DIPSETTING(    0x03, "65%" )
	PORT_DIPSETTING(    0x02, "70%" )
	PORT_DIPSETTING(    0x01, "75%" )
	PORT_DIPSETTING(    0x00, "80%" )
	// Hopper Limit OK
	// 100+ Odds Sound not checked
	// Key In Type OK
	// Center Super 7 Bet Limit related with Min. Bet For Bonus Play (DSW4-6)

	PORT_INCLUDE( cmv4_dsw3 )  // all OK

	PORT_INCLUDE( cmv4_dsw4 )  // all OK

	PORT_INCLUDE( cmv4_dsw5 )
	// Display of Doll On Demo only affects payout table screen
	// Coin In Limit OK
	// Condition For 3 Kind Of Bonus not checked
	// Display Of Doll At All Fr. Bonus not checked
	// DSW5-7 listed as unused
	// Test Mode For Disp. Of Doll not working
INPUT_PORTS_END

static INPUT_PORTS_START( cmasterb )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_GAMBLE_HIGH ) PORT_NAME("Big / Stop All")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_GAMBLE_D_UP )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_TAKE )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_LOW ) PORT_NAME("Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")

	PORT_INCLUDE( cmv4_coins )

	PORT_INCLUDE( cmv4_service )

	PORT_INCLUDE( cmv4_dsw1 )
	PORT_MODIFY("DSW1")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unused ) )           PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	// Hopper Out Switch not checked
	// Payout Mode not checked
	// '7' In Double Up Game OK
	PORT_DIPNAME( 0x10, 0x00, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")  // OK
	PORT_DIPSETTING(    0x00, "80%" )
	PORT_DIPSETTING(    0x10, "90%" )
	// Double Up Game OK
	// Bet Max OK

	PORT_INCLUDE( cmv4_dsw2 )
	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x07, 0x00, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "55%" )
	PORT_DIPSETTING(    0x06, "60%" )
	PORT_DIPSETTING(    0x05, "65%" )
	PORT_DIPSETTING(    0x04, "70%" )
	PORT_DIPSETTING(    0x03, "75%" )
	PORT_DIPSETTING(    0x02, "80%" )
	PORT_DIPSETTING(    0x01, "85%" )
	PORT_DIPSETTING(    0x00, "90%" )
	// Hopper Limit OK
	// 100+ Odds Sound not checked
	// Key In Type OK
	// Center Super 7 Bet Limit related with Min. Bet For Bonus Play (DSW4-6)

	PORT_INCLUDE( cmv4_dsw3 )  // all OK

	PORT_INCLUDE( cmv4_dsw4 )  // all OK

	PORT_INCLUDE( cmv4_dsw5 )
	// Display of Doll On Demo only affects payout table screen
	// Coin In Limit OK
	// Condition For 3 Kind Of Bonus not checked
	// Display Of Doll At All Fr. Bonus not checked
	// DSW5-7 listed as unused
	// Test Mode For Disp. Of Doll not checked
INPUT_PORTS_END


static INPUT_PORTS_START( cmezspin )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_SLOT_STOP3 ) PORT_NAME("Stop 3 / Big")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP1 ) PORT_NAME("Stop 1 / D-UP")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SLOT_STOP_ALL ) PORT_NAME("Stop All / Take")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP2 ) PORT_NAME("Stop 2 / Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")

	PORT_INCLUDE( cmv4_coins )

	PORT_INCLUDE( cmv4_service )

	PORT_INCLUDE( cmv4_dsw1 )
	PORT_MODIFY("DSW1")
	// Hold Pair OK
	// Hopper Out Switch not checked
	// Payout Mode not checked
	PORT_DIPNAME( 0x08, 0x00, "'7' In Double Up Game" )     PORT_DIPLOCATION("DSW1:4")  // OK
	PORT_DIPSETTING(    0x00, "Win" )
	PORT_DIPSETTING(    0x08, "Even" )
	PORT_DIPNAME( 0x10, 0x00, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")  // OK
	PORT_DIPSETTING(    0x00, "70%" )
	PORT_DIPSETTING(    0x10, "80%" )
	// Double Up Game OK
	PORT_DIPNAME( 0xc0, 0x00, "Bet Max" )                   PORT_DIPLOCATION("DSW1:7,8")  // OK
	PORT_DIPSETTING(    0x00, "16" )
	PORT_DIPSETTING(    0x40, "32" )
	PORT_DIPSETTING(    0x80, "64" )
	PORT_DIPSETTING(    0xc0, "96" )

	PORT_INCLUDE( cmv4_dsw2 )
	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x03, 0x00, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2")  // OK
	PORT_DIPSETTING(    0x03, "55%" )
	PORT_DIPSETTING(    0x02, "60%" )
	PORT_DIPSETTING(    0x01, "65%" )
	PORT_DIPSETTING(    0x00, "70%" )
	PORT_DIPNAME( 0x04, 0x00, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW2:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	// Hopper Limit not checked
	// 100+ Odds Sound not checked
	// Key In Type OK
	// Center Super 7 Bet Limit related with Min. Bet For Bonus Play (DSW4-6) - not checked

	PORT_INCLUDE( cmv4_dsw3 )  // all OK

	PORT_INCLUDE( cmv4_dsw4 )
	PORT_MODIFY("DSW4")
	// Credit Limit not checked
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW4:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	// Type Of Coin D OK
	// Min. Bet For Bonus Play OK
	// Reel Speed OK
	// Hopper Out By Coin A OK

	PORT_INCLUDE( cmv4_dsw5 )
	// Display of Doll On Demo only affects payout table screen
	// Coin In Limit OK
	// Condition For 3 Kind Of Bonus OK
	// Display Of Doll At All Fr. Bonus not checked
	// DSW5-7 listed as unused
	// Test Mode For Disp. Of Doll not checked
INPUT_PORTS_END


static INPUT_PORTS_START( cmasterc )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_SLOT_STOP1 ) PORT_NAME("Big / Stop 1")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP2 ) PORT_NAME("D-UP / Stop 2")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_TAKE )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP3 ) PORT_NAME("Small / Info / Stop 3")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")

	PORT_INCLUDE( cmv4_coins )

	PORT_INCLUDE( cmv4_service )

	PORT_INCLUDE( cmv4_dsw1 )
	PORT_MODIFY("DSW1")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unused ) )           PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	// Hopper Out Switch not checked
	// Payout Mode not checked
	// '7' In Double Up Game OK
	PORT_DIPNAME( 0x10, 0x00, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")  // OK
	PORT_DIPSETTING(    0x00, "80%" )
	PORT_DIPSETTING(    0x10, "90%" )
	// Double Up Game OK
	// Bet Max OK

	PORT_INCLUDE( cmv4_dsw2 )
	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x07, 0x00, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "55%" )
	PORT_DIPSETTING(    0x06, "60%" )
	PORT_DIPSETTING(    0x05, "65%" )
	PORT_DIPSETTING(    0x04, "70%" )
	PORT_DIPSETTING(    0x03, "75%" )
	PORT_DIPSETTING(    0x02, "80%" )
	PORT_DIPSETTING(    0x01, "85%" )
	PORT_DIPSETTING(    0x00, "90%" )
	// Hopper Limit OK
	// 100+ Odds Sound not checked
	// Key In Type OK
	// Center Super 7 Bet Limit related with Min. Bet For Bonus Play (DSW4-6)

	PORT_INCLUDE( cmv4_dsw3 )  // all OK

	PORT_INCLUDE( cmv4_dsw4 )  // all OK

	PORT_INCLUDE( cmv4_dsw5 )
	// Display of Doll On Demo only affects payout table screen
	// Coin In Limit OK
	// Condition For 3 Kind Of Bonus not checked
	// Display Of Doll At All Fr. Bonus not checked
	// DSW5-7 listed as unused
	// Test Mode For Disp. Of Doll not checked
INPUT_PORTS_END


static INPUT_PORTS_START( cmasterg )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_GAMBLE_HIGH ) PORT_NAME("Big / Stop All")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_GAMBLE_D_UP )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_TAKE )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_LOW ) PORT_NAME("Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")

	PORT_INCLUDE( cmv4_coins )

	PORT_INCLUDE( cmv4_service )

	PORT_INCLUDE( cmv4_dsw1 )
	PORT_MODIFY("DSW1")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unused ) )           PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	// Hopper Out Switch not checked
	// Payout Mode not checked
	// '7' In Double Up Game OK
	PORT_DIPNAME( 0x10, 0x00, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")  // OK
	PORT_DIPSETTING(    0x00, "60%" )
	PORT_DIPSETTING(    0x10, "70%" )
	// Double Up Game OK
	// Bet Max OK

	PORT_INCLUDE( cmv4_dsw2 )
	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x07, 0x00, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "45%" )
	PORT_DIPSETTING(    0x06, "50%" )
	PORT_DIPSETTING(    0x05, "55%" )
	PORT_DIPSETTING(    0x04, "60%" )
	PORT_DIPSETTING(    0x03, "65%" )
	PORT_DIPSETTING(    0x02, "70%" )
	PORT_DIPSETTING(    0x01, "75%" )
	PORT_DIPSETTING(    0x00, "80%" )
	// Hopper Limit OK
	// 100+ Odds Sound not checked
	// Key In Type OK
	// Center Super 7 Bet Limit related with Min. Bet For Bonus Play (DSW4-6)

	PORT_INCLUDE( cmv4_dsw3 )  // all OK

	PORT_INCLUDE( cmv4_dsw4 )  // all OK

	PORT_INCLUDE( cmv4_dsw5 )
	// Display of Doll On Demo only affects payout table screen
	// Coin In Limit OK
	// Condition For 3 Kind Of Bonus not checked
	// Display Of Doll At All Fr. Bonus not checked
	// DSW5-7 listed as unused
	// Test Mode For Disp. Of Doll not checked
INPUT_PORTS_END

static INPUT_PORTS_START( cmasterh )
	PORT_INCLUDE( cmasterb )

	PORT_MODIFY("DSW1")
	PORT_DIPNAME( 0x01, 0x01, "Enable stats menu" ) PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, DEF_STR( On ) )
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
INPUT_PORTS_END

// only 2 banks of 8 switches
static INPUT_PORTS_START( super7 ) // TODO: verify everything
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_SLOT_STOP3 ) PORT_NAME("Stop 3 / Big")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP1 ) PORT_NAME("Stop 1 / D-UP")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_TAKE )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SLOT_STOP_ALL ) PORT_NAME("Bet / Stop All")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP2 ) PORT_NAME("Stop 2 / Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")

	PORT_INCLUDE( cmv4_coins )

	PORT_INCLUDE( cmv4_service )

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x07, 0x07, "Main Game Pay Rate" ) PORT_DIPLOCATION("DSW2:1,2,3")
	PORT_DIPSETTING(    0x00, "45%" )
	PORT_DIPSETTING(    0x04, "50%" )
	PORT_DIPSETTING(    0x02, "55%" )
	PORT_DIPSETTING(    0x01, "65%" )
	PORT_DIPSETTING(    0x06, "60%" )
	PORT_DIPSETTING(    0x05, "70%" )
	PORT_DIPSETTING(    0x03, "75%" )
	PORT_DIPSETTING(    0x07, "80%" )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW2:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW2:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW2:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW2:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW2:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END

static INPUT_PORTS_START( cmast91 )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_GAMBLE_HIGH ) PORT_NAME("Big")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_GAMBLE_D_UP )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SLOT_STOP1 ) PORT_NAME("Stop 1 / Take")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SLOT_STOP2 ) PORT_NAME("Stop 2 / Bet" )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP3 ) PORT_NAME("Stop 3 / Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start / Stop All")

	PORT_INCLUDE( cmv4_coins )

	PORT_INCLUDE( cmv4_service )

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unused ) )           PORT_DIPLOCATION("DSW1:1")  // OK
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, "Hopper Out Switch" )         PORT_DIPLOCATION("DSW1:2")  // OK
	PORT_DIPSETTING(    0x02, "Active Low" )
	PORT_DIPSETTING(    0x00, "Active High" )
	PORT_DIPNAME( 0x04, 0x00, "Payout Mode" )               PORT_DIPLOCATION("DSW1:3")  // OK
	PORT_DIPSETTING(    0x04, "Payout Switch" )
	PORT_DIPSETTING(    0x00, "Automatic" )
	PORT_DIPNAME( 0x08, 0x00, "'7' In Double Up Game" )     PORT_DIPLOCATION("DSW1:4")  // OK
	PORT_DIPSETTING(    0x08, "Even" )
	PORT_DIPSETTING(    0x00, "Loss" )
	PORT_DIPNAME( 0x10, 0x00, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")  // OK
	PORT_DIPSETTING(    0x00, "80%" )
	PORT_DIPSETTING(    0x10, "90%" )
	PORT_DIPNAME( 0x20, 0x00, "Double Up Game" )            PORT_DIPLOCATION("DSW1:6")  // OK
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0xc0, 0xc0, "Bet Max" )                   PORT_DIPLOCATION("DSW1:7,8")  // OK
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x40, "16" )
	PORT_DIPSETTING(    0x80, "32" )
	PORT_DIPSETTING(    0xc0, "64" )

	PORT_INCLUDE( cmv4_dsw2 )
	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x07, 0x00, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "45%" )
	PORT_DIPSETTING(    0x06, "50%" )
	PORT_DIPSETTING(    0x05, "55%" )
	PORT_DIPSETTING(    0x04, "60%" )
	PORT_DIPSETTING(    0x03, "65%" )
	PORT_DIPSETTING(    0x02, "70%" )
	PORT_DIPSETTING(    0x01, "75%" )
	PORT_DIPSETTING(    0x00, "80%" )
	// Hopper Limit OK
	// 100+ Odds Sound not checked
	// Key In Type OK
	// Center Super 7 Bet Limit related with Min. Bet For Bonus Play (DSW4-6)

	PORT_INCLUDE( cmv4_dsw3 )  // all OK

	PORT_INCLUDE( cmv4_dsw4 )  // all OK

	PORT_INCLUDE( cmv4_dsw5 )
	PORT_MODIFY("DSW5")
	// Coin In Limit OK
	// Condition For 3 Kind Of Bonus not checked
	PORT_DIPNAME( 0x40, 0x40, "Skill Stop" )        PORT_DIPLOCATION("DSW5:7")  // OK
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW5:8")  // normally Test Mode For Disp. Of Doll, but no ladies in this set
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END


static INPUT_PORTS_START( cmast99 )
	PORT_START("IN0")  // called "PLAYER" in input test
	PORT_DIPNAME( 0x01, 0x01, "0-1" )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, "0-2" )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, "0-3" )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, "0-4" )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, "0-5" )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, "0-6" )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, "0-7" )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, "0-8" )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("IN1")  // called "COIN" in input test
	PORT_DIPNAME( 0x01, 0x01, "1-1" )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, "1-2" )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, "1-3" )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, "1-4" )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, "1-5" )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, "1-6" )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, "1-7" )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, "1-8" )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )


	PORT_START("IN2")  // called "TEST" in input test
	PORT_DIPNAME( 0x01, 0x01, "2-1" )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, "2-2" )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, "2-3" )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, "2-4" )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, "2-5" )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, "2-6" )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, "2-7" )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, "2-8" )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW1")
	PORT_DIPNAME( 0x03, 0x03, "Game Min Bet" )              PORT_DIPLOCATION("DSW1:1,2")
	PORT_DIPSETTING(    0x03, "15" )
	PORT_DIPSETTING(    0x02, "30" )
	PORT_DIPSETTING(    0x01, "45" )
	PORT_DIPSETTING(    0x00, "60" )
	PORT_DIPNAME( 0x04, 0x04, "Double Mode" )               PORT_DIPLOCATION("DSW1:3")
	PORT_DIPSETTING(    0x00, "No (collect)" )
	PORT_DIPSETTING(    0x04, "Yes (double)" )
	PORT_DIPNAME( 0x18, 0x18, "Max Bet" )                   PORT_DIPLOCATION("DSW1:4,5")
	PORT_DIPSETTING(    0x00, "15" )
	PORT_DIPSETTING(    0x08, "30" )
	PORT_DIPSETTING(    0x10, "60" )
	PORT_DIPSETTING(    0x18, "99" )
	PORT_DIPNAME( 0x20, 0x20, "Double Picture" )            PORT_DIPLOCATION("DSW1:6")
	PORT_DIPSETTING(    0x20, "Fruit" )
	PORT_DIPSETTING(    0x00, "???" ) // not listed in manual
	PORT_DIPNAME( 0x40, 0x40, "Payout Rate" )               PORT_DIPLOCATION("DSW1:7")
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x40, "100" )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW1:8") // not listed in manual
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x07, 0x06, "Main Game Pay Rate" )        PORT_DIPLOCATION("DSW2:1,2,3")
	PORT_DIPSETTING(    0x00, "55%" )
	PORT_DIPSETTING(    0x01, "60%" )
	PORT_DIPSETTING(    0x02, "65%" )
	PORT_DIPSETTING(    0x03, "70%" )
	PORT_DIPSETTING(    0x04, "75%" )
	PORT_DIPSETTING(    0x05, "80%" )
	PORT_DIPSETTING(    0x06, "85%" )
	PORT_DIPSETTING(    0x07, "90%" )
	PORT_DIPNAME( 0x08, 0x08, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW2:4")
	PORT_DIPSETTING(    0x00, "60%" )
	PORT_DIPSETTING(    0x08, "70%" )
	PORT_DIPNAME( 0x30, 0x20, "Coin In Rate" )              PORT_DIPLOCATION("DSW2:5,6")
	PORT_DIPSETTING(    0x30, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_25C ) )
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_50C ) )
	PORT_DIPNAME( 0xc0, 0xc0, "Key In Rate" )               PORT_DIPLOCATION("DSW2:7,8")
	PORT_DIPSETTING(    0xc0, DEF_STR( 1C_100C ) )
	PORT_DIPSETTING(    0x80, "1 Coin/110 Credits" )
	PORT_DIPSETTING(    0x40, "1 Coin/120 Credits" )
	PORT_DIPSETTING(    0x00, "1 Coin/500 Credits" )

	PORT_START("DSW3") // manual doesn't have explicit defaults, so taking first listed setting for each switch as default
	PORT_DIPNAME( 0x01, 0x00, "Bonus 2 Poll Mode" )                                         PORT_DIPLOCATION("DSW3:1")
	PORT_DIPSETTING(    0x00, DEF_STR( Easy ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Hard ) )
	PORT_DIPNAME( 0x02, 0x00, "Bonus 3 Poll Mode" )                                         PORT_DIPLOCATION("DSW3:2")
	PORT_DIPSETTING(    0x00, DEF_STR( Easy ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Hard ) )
	PORT_DIPNAME( 0x04, 0x04, "???" )                                                       PORT_DIPLOCATION("DSW3:3")  // no name given in manual, but settings listed
	PORT_DIPSETTING(    0x04, "30-40-50" )
	PORT_DIPSETTING(    0x00, "40-55-70" )
	PORT_DIPNAME( 0x08, 0x08, "When Watermelon Appear in Center Credit of Bonus Up Mode" )  PORT_DIPLOCATION("DSW3:4")
	PORT_DIPSETTING(    0x08, "1-3-5" )
	PORT_DIPSETTING(    0x00, "2-4-6" )
	PORT_DIPNAME( 0x10, 0x10, "When Bet, Credit of Bonus Up Mode" )                         PORT_DIPLOCATION("DSW3:5")
	PORT_DIPSETTING(    0x10, "1-3-5" )
	PORT_DIPSETTING(    0x00, "2-4-6" )
	PORT_DIPNAME( 0x20, 0x20, "The Max Credit of Bonus 1-3" )                               PORT_DIPLOCATION("DSW3:6")
	PORT_DIPSETTING(    0x20, "999-1999-3999" )
	PORT_DIPSETTING(    0x00, "2000-3000-4500" )
	PORT_DIPNAME( 0x40, 0x40, "Start Up Credit of Bonus 1-3" )                              PORT_DIPLOCATION("DSW3:7")
	PORT_DIPSETTING(    0x00, "330-660-990" )
	PORT_DIPSETTING(    0x40, "499-999-1999" )
	PORT_DIPNAME( 0x80, 0x80, "Start Up Credit of Extra Bonus" )                            PORT_DIPLOCATION("DSW3:8")
	PORT_DIPSETTING(    0x80, "330" )
	PORT_DIPSETTING(    0x00, "550" )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x07, 0x00, "Max Pay Credit Limit" )  PORT_DIPLOCATION("DSW4:1,2,3")
	PORT_DIPSETTING(    0x07,   "5,000" )
	PORT_DIPSETTING(    0x06,  "10,000" )
	PORT_DIPSETTING(    0x05,  "15,000" )
	PORT_DIPSETTING(    0x04,  "20,000" )
	PORT_DIPSETTING(    0x03,  "30,000" )
	PORT_DIPSETTING(    0x02,  "40,000" )
	PORT_DIPSETTING(    0x01,  "50,000" )
	PORT_DIPSETTING(    0x00, "100,000" )
	PORT_DIPNAME( 0x08, 0x08, "Display Credit Limit" )  PORT_DIPLOCATION("DSW4:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, "Add On Bonus Poll" )     PORT_DIPLOCATION("DSW4:5")
	PORT_DIPSETTING(    0x00, "6-3-1" )
	PORT_DIPSETTING(    0x10, "9-5-1" )
	PORT_DIPNAME( 0x20, 0x20, "Add On Bonus Min Bet" )  PORT_DIPLOCATION("DSW4:6")
	PORT_DIPSETTING(    0x20, "16" )
	PORT_DIPSETTING(    0x00, "32" )
	PORT_DIPNAME( 0x40, 0x40, "Game Speed" )            PORT_DIPLOCATION("DSW4:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Normal ) )
	PORT_DIPSETTING(    0x00, "Fast" )
	PORT_DIPNAME( 0x80, 0x80, "Alarm Sound" )           PORT_DIPLOCATION("DSW4:8")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )

	PORT_START("DSW5")
	PORT_DIPNAME( 0x03, 0x03, "Key In Limit" )                          PORT_DIPLOCATION("DSW5:1,2")
	PORT_DIPSETTING(    0x00,  "1,000" )
	PORT_DIPSETTING(    0x01,  "5,000" )
	PORT_DIPSETTING(    0x02, "10,000" )
	PORT_DIPSETTING(    0x03, "20,000" )
	PORT_DIPNAME( 0x04, 0x04, "Bonus Girl" )                            PORT_DIPLOCATION("DSW5:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x38, 0x38, "Credit Earned, Profit Table Set Zero" )  PORT_DIPLOCATION("DSW5:4,5,6")
	PORT_DIPSETTING(    0x00,  "20,000" )
	PORT_DIPSETTING(    0x08,  "30,000" )
	PORT_DIPSETTING(    0x10,  "40,000" )
	PORT_DIPSETTING(    0x18,  "50,000" )
	PORT_DIPSETTING(    0x20,  "70,000" )
	PORT_DIPSETTING(    0x28, "100,000" )
	PORT_DIPSETTING(    0x30, "200,000" )
	PORT_DIPSETTING(    0x38, "990,000" )
	PORT_DIPNAME( 0x40, 0x00, "Bonus 2 Poll Rate" )                     PORT_DIPLOCATION("DSW5:7")
	PORT_DIPSETTING(    0x00, DEF_STR( Normal ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Hard ) )
	PORT_DIPNAME( 0x80, 0x00, "Bonus 3 Poll Rate" )                     PORT_DIPLOCATION("DSW5:8")
	PORT_DIPSETTING(    0x00, DEF_STR( Normal ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Hard ) )
INPUT_PORTS_END


static INPUT_PORTS_START( goldstar )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )    // appear in the input test but seems to lacks of function
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )    // appear in the input test but seems to lacks of function
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_V) PORT_NAME("Bet Red / 2")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP3 ) PORT_CODE(KEYCODE_C) PORT_NAME("Stop 3 / Small / 1 / Info")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_B) PORT_NAME("Bet Blue / D-UP / 3")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SLOT_STOP1 ) PORT_CODE(KEYCODE_Z) PORT_NAME("Stop 1 / Take")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP2 ) PORT_CODE(KEYCODE_X) PORT_NAME("Stop 2 / Big / Ticket")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_N) PORT_NAME("Start / Stop All / 4")

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_NAME("Coin A")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_NAME("Coin B")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN ) PORT_READ_LINE_DEVICE_MEMBER("hopper", FUNC(ticket_dispenser_device::line_r))
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_UNKNOWN )	
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_8_PAD) PORT_NAME("HopperÂ Payout")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")

	PORT_INCLUDE( cb3_dsw1 )
	PORT_MODIFY("DSW1")
	// Game Style not checked
	// Hopper Out Switch not checked
	// Payout Mode not checked
	// '7' In Double Up Game OK
	PORT_DIPNAME( 0x10, 0x10, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")  // OK
	PORT_DIPSETTING(    0x10, "60%" )
	PORT_DIPSETTING(    0x00, "70%" )
	// Double Up Game OK
	PORT_DIPNAME( 0xc0, 0x00, "Bet Max" )                   PORT_DIPLOCATION("DSW1:7,8")  // OK
	PORT_DIPSETTING(    0xc0, "8" )
	PORT_DIPSETTING(    0x80, "16" )
	PORT_DIPSETTING(    0x40, "32" )
	PORT_DIPSETTING(    0x00, "50" )

	PORT_START("UNK1")
	PORT_BIT( 0xff, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("UNK2")
	PORT_BIT( 0xff, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x07, 0x00, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2,3" )  // Does this work?  Settings screen always shows "28F3%".
	PORT_DIPSETTING(    0x07, "40%" )
	PORT_DIPSETTING(    0x06, "45%" )
	PORT_DIPSETTING(    0x05, "50%" )
	PORT_DIPSETTING(    0x04, "55%" )
	PORT_DIPSETTING(    0x03, "60%" )
	PORT_DIPSETTING(    0x02, "65%" )
	PORT_DIPSETTING(    0x01, "70%" )
	PORT_DIPSETTING(    0x00, "75%" )
	PORT_DIPNAME( 0x18, 0x00, "Hopper Limit" )          PORT_DIPLOCATION("DSW2:4,5" )
	PORT_DIPSETTING(    0x18, "300" )
	PORT_DIPSETTING(    0x10, "500" )
	PORT_DIPSETTING(    0x08, "1000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x20, 0x00, "100 Odds Sound" )        PORT_DIPLOCATION("DSW2:6" )
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x00, "Key-In Type" )           PORT_DIPLOCATION("DSW2:7" )
	PORT_DIPSETTING(    0x40, "B-Type" )
	PORT_DIPSETTING(    0x00, "A-Type" )
	PORT_DIPNAME( 0x80, 0x00, "Center Super 7 Bet Limit" ) PORT_DIPLOCATION("DSW2:8" )
	PORT_DIPSETTING(    0x80, "Unlimited" )
	PORT_DIPSETTING(    0x00, "Limited" )

	PORT_START("DSW3")  // Neither of these work.  Does the manual say this is what they do, or is it just nonsense?
	PORT_DIPNAME( 0x0c, 0x00, DEF_STR( Coin_A ) )       PORT_DIPLOCATION("DSW3:1,2" )
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_50C ) )
	PORT_DIPSETTING(    0x0c, DEF_STR( 1C_100C ) )
	PORT_DIPNAME( 0xc0, 0x40, "Coin C" )                PORT_DIPLOCATION("DSW3:3,4" )
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x80, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0xc0, DEF_STR( 1C_10C ) )

	PORT_INCLUDE( cmv4_dsw4 )
	PORT_MODIFY("DSW4")
	// Credit Limit OK
	// Display Of Payout Limit OK
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW4:5")  // not checked
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	// Min. Bet For Bonus Play OK
	// Reel Speed OK
	PORT_DIPNAME( 0x80, 0x00, "Ticket Payment" )    PORT_DIPLOCATION("DSW4:8")  // not checked
	PORT_DIPSETTING(    0x80, "1 Ticket/100" )
	PORT_DIPSETTING(    0x00, "Pay All" )

	PORT_START("DSW6")
	PORT_BIT( 0xff, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("DSW7")  // Where is hooked???
	PORT_BIT( 0xdf, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_DIPNAME( 0x20, 0x00, "Show Woman" )        PORT_DIPLOCATION("DSW7:1" )
	PORT_DIPSETTING(    0x20, DEF_STR( No ) )
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )
INPUT_PORTS_END

static INPUT_PORTS_START( chrygld )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON2 ) PORT_CODE(KEYCODE_X) PORT_NAME("Stop 2 / Big / Bonus Game")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON5 ) PORT_CODE(KEYCODE_B) PORT_NAME("Blue Bet / D-UP / Card 3")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON1 ) PORT_CODE(KEYCODE_Z) PORT_NAME("Stop 1 / Take")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON4 ) PORT_CODE(KEYCODE_V) PORT_NAME("Red Bet / Card 2")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON3 ) PORT_CODE(KEYCODE_C) PORT_NAME("Stop 3 / Small / Info / Card 1")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON6 ) PORT_CODE(KEYCODE_N) PORT_NAME("Start / Stop All / Card 4")

	PORT_INCLUDE( cmv4_coins )

	PORT_INCLUDE( cmv4_service )

	PORT_START("IN3")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_INCLUDE( cb3_dsw1 )
	PORT_MODIFY("DSW1")
	// Game Style not checked
	// Hopper Out Switch not checked
	// Payout Mode not checked
	// '7' In Double Up Game OK
	// Double Up Game Pay Rate OK
	// Double Up Game OK
	PORT_DIPNAME( 0xc0, 0xc0, "Bet Max" )   PORT_DIPLOCATION("DSW1:7,8")  // OK
	PORT_DIPSETTING(    0xc0, "8" )
	PORT_DIPSETTING(    0x80, "16" )
	PORT_DIPSETTING(    0x40, "32" )
	PORT_DIPSETTING(    0x00, "50" )

	PORT_INCLUDE( cmv4_dsw2 )
	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x07, 0x00, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2,3")  // OK
	PORT_DIPSETTING(    0x00, "55%" )
	PORT_DIPSETTING(    0x01, "60%" )
	PORT_DIPSETTING(    0x02, "65%" )
	PORT_DIPSETTING(    0x03, "70%" )
	PORT_DIPSETTING(    0x04, "75%" )
	PORT_DIPSETTING(    0x05, "80%" )
	PORT_DIPSETTING(    0x06, "85%" )
	PORT_DIPSETTING(    0x07, "90%" )
	// Hopper limit not checked
	// 100+ Odds Sound not checked
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW2:7")  // normally Key In Type but doesn't affect rate for this game
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	// Center Super 7 Bet Limit related with Min. Bet For Bonus Play (DSW4-6)

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x03, "Key In Rate" ) PORT_DIPLOCATION("DSW3:1,2")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_50C ) )
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_100C ) )
	PORT_DIPNAME( 0x0c, 0x0c, "Coin A Rate" ) PORT_DIPLOCATION("DSW3:3,4")  // OK - unused value also produces 1C/10C
	PORT_DIPSETTING(    0x0c, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_50C ) )
	PORT_DIPNAME( 0x30, 0x30, "Coin D Rate" )   PORT_DIPLOCATION("DSW3:5,6")  // OK
	PORT_DIPSETTING(    0x30, DEF_STR( 5C_1C ) )        PORT_CONDITION("DSW4",0x10,EQUALS,0x10)  // C-Type
	PORT_DIPSETTING(    0x20, DEF_STR( 2C_1C ) )        PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_1C ) )        PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_2C ) )        PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, "1 Ticket/5 Credits" )    PORT_CONDITION("DSW4",0x10,EQUALS,0x00)  // D-Type
	PORT_DIPSETTING(    0x10, "1 Ticket/10 Credits" )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x20, "1 Ticket/20 Credits" )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x30, "1 Ticket/50 Credits" )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPNAME( 0xc0, 0xc0, "Coin C Rate" ) PORT_DIPLOCATION("DSW3:7,8")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x80, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0xc0, DEF_STR( 1C_10C ) )

	PORT_INCLUDE( cb3_dsw4 )  // all OK

	PORT_INCLUDE( cb3_dsw5 )  // DSW5 is not connected yet. Where the hell is connected?
INPUT_PORTS_END

// dip switches from manual, values & inputs are a guess from cmasterb
static INPUT_PORTS_START( chryangl )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_GAMBLE_HIGH ) PORT_NAME("Big / Stop All")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_GAMBLE_D_UP )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_TAKE )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_LOW ) PORT_NAME("Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")

	PORT_INCLUDE( cmv4_coins )

	PORT_INCLUDE( cmv4_service )

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unused ) )   PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, "Hopper Out Switch" ) PORT_DIPLOCATION("DSW1:2")
	PORT_DIPSETTING(    0x02, "Active Low" )
	PORT_DIPSETTING(    0x00, "Active High" )
	PORT_DIPNAME( 0x04, 0x00, "Payout Mode" )       PORT_DIPLOCATION("DSW1:3")
	PORT_DIPSETTING(    0x04, "Switch" )
	PORT_DIPSETTING(    0x00, "Automatic" )
	PORT_DIPNAME( 0x08, 0x00, "W-UP '7'" )          PORT_DIPLOCATION("DSW1:4")
	PORT_DIPSETTING(    0x08, "Loss" )
	PORT_DIPSETTING(    0x00, "Even" )
	PORT_DIPNAME( 0x10, 0x00, "W-UP Pay Rate" )     PORT_DIPLOCATION("DSW1:5")
	PORT_DIPSETTING(    0x00, "80%" )
	PORT_DIPSETTING(    0x10, "90%" )
	PORT_DIPNAME( 0x20, 0x00, "W-UP Game" )         PORT_DIPLOCATION("DSW1:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0xc0, 0xc0, "Bet Max" )           PORT_DIPLOCATION("DSW1:7,8")
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x40, "16" )
	PORT_DIPSETTING(    0x80, "32" )
	PORT_DIPSETTING(    0xc0, "64" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x07, 0x03, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2,3")
	PORT_DIPSETTING(    0x07, "40%" )
	PORT_DIPSETTING(    0x06, "45%" )
	PORT_DIPSETTING(    0x05, "50%" )
	PORT_DIPSETTING(    0x04, "55%" )
	PORT_DIPSETTING(    0x03, "60%" )
	PORT_DIPSETTING(    0x02, "65%" )
	PORT_DIPSETTING(    0x01, "70%" )
	PORT_DIPSETTING(    0x00, "75%" )
	PORT_DIPNAME( 0x18, 0x00, "Hopper Limit" )          PORT_DIPLOCATION("DSW2:4,5")
	PORT_DIPSETTING(    0x18, "300" )
	PORT_DIPSETTING(    0x10, "500" )
	PORT_DIPSETTING(    0x08, "1000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x20, 0x00, "100 Odds Sound" )        PORT_DIPLOCATION("DSW2:6")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, "Key-In Type" )           PORT_DIPLOCATION("DSW2:7")
	PORT_DIPSETTING(    0x40, "A-Type" )
	PORT_DIPSETTING(    0x00, "B-Type" )
	PORT_DIPNAME( 0x80, 0x00, "Center Super 7 Bet Limit" )  PORT_DIPLOCATION("DSW2:8")
	PORT_DIPSETTING(    0x80, "Unlimited" )
	PORT_DIPSETTING(    0x00, "Limited" )

	PORT_START("DSW3")  // note in manual says "Reverse these settings" for entire DSW3 ???
	PORT_DIPNAME( 0x01, 0x01, "Unused" )                PORT_DIPLOCATION("DSW3:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x06, 0x06, "Coin In Limit" )         PORT_DIPLOCATION("DSW3:2,3")
	PORT_DIPSETTING(    0x06, "1,000" )
	PORT_DIPSETTING(    0x04, "5,000" )
	PORT_DIPSETTING(    0x02, "10,000" )
	PORT_DIPSETTING(    0x00, "20,000" )
	PORT_DIPNAME( 0x18, 0x00, "Credit Back" )           PORT_DIPLOCATION("DSW3:4,5")
	PORT_DIPSETTING(    0x18, "10 In 1 Back" )
	PORT_DIPSETTING(    0x10, "8 In 1 Back" )
	PORT_DIPSETTING(    0x08, "6 In 1 Back" )
	PORT_DIPSETTING(    0x00, "No Coins Back" )
	PORT_DIPNAME( 0x20, 0x00, "Display Of Doll At All Fr. Bonus" ) PORT_DIPLOCATION("DSW3:6")
	PORT_DIPSETTING(    0x20, "Off" )
	PORT_DIPSETTING(    0x00, "On" )
	PORT_DIPNAME( 0x40, 0x40, "Unused" )                PORT_DIPLOCATION("DSW3:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unused ) )       PORT_DIPLOCATION("DSW3:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x07, 0x05, "Credit Limit" )              PORT_DIPLOCATION("DSW4:1,2,3")
	PORT_DIPSETTING(    0x07, "5,000" )
	PORT_DIPSETTING(    0x06, "10,000" )
	PORT_DIPSETTING(    0x05, "20,000" )
	PORT_DIPSETTING(    0x04, "30,000" )
	PORT_DIPSETTING(    0x03, "40,000" )
	PORT_DIPSETTING(    0x02, "50,000" )
	PORT_DIPSETTING(    0x01, "100,000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x08, 0x00, "Display Of Payout Limit" )   PORT_DIPLOCATION("DSW4:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, "Type Of Coin D" )            PORT_DIPLOCATION("DSW4:5")
	PORT_DIPSETTING(    0x10, "C-Type" )
	PORT_DIPSETTING(    0x00, "D-Type" )
	PORT_DIPNAME( 0x20, 0x20, "Min. Bet For Bonus Play" )   PORT_DIPLOCATION("DSW4:6")
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x20, "16" )
	PORT_DIPNAME( 0x40, 0x40, "Reel Speed" )                PORT_DIPLOCATION("DSW4:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Low ) )
	PORT_DIPSETTING(    0x00, DEF_STR( High ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unused ) )           PORT_DIPLOCATION("DSW4:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW5")
	PORT_DIPNAME( 0x03, 0x00, "Key In Rate" )   PORT_DIPLOCATION("DSW5:1,2")
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_10C ) )   PORT_CONDITION("DSW2",0x40,EQUALS,0x40)  // A-Type
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_20C ) )   PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_50C ) )   PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_100C ) )  PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_10C ) )   PORT_CONDITION("DSW2",0x40,EQUALS,0x00)  // B-Type
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_20C ) )   PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_50C ) )   PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_100C ) )  PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPNAME( 0x0c, 0x0c, "Coin A Rate" )   PORT_DIPLOCATION("DSW5:3,4")
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x0c, DEF_STR( 1C_10C ) )
	PORT_DIPNAME( 0x30, 0x30, "Coin D Rate" )   PORT_DIPLOCATION("DSW5:5,6")
	PORT_DIPSETTING(    0x30, DEF_STR( 5C_1C ) )    PORT_CONDITION("DSW4",0x10,EQUALS,0x10)  // C-Type
	PORT_DIPSETTING(    0x20, DEF_STR( 2C_1C ) )    PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_1C ) )    PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_2C ) )    PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C ) )    PORT_CONDITION("DSW4",0x10,EQUALS,0x00)  // D-Type
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_10C ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_25C ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x30, DEF_STR( 1C_50C ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPNAME( 0xc0, 0xc0, "Coin C Rate" )   PORT_DIPLOCATION("DSW5:7,8")
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x80, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0xc0, DEF_STR( 1C_10C ) )
INPUT_PORTS_END

// no manual - best guesses
static INPUT_PORTS_START( tonypok )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_POKER_HOLD2 ) PORT_NAME("Hold 2 / Big / Red")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_POKER_HOLD3 ) PORT_NAME("Hold 3 / D-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_POKER_HOLD4 ) PORT_NAME("Hold 4 / Take")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_POKER_HOLD5 ) PORT_NAME("Hold 5 / Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_POKER_HOLD1 ) PORT_NAME("Hold 1 / Small / Black")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start / Deal / Draw")

	PORT_INCLUDE( cmv4_coins )

	PORT_INCLUDE( cmv4_service )

	PORT_START("DSW1")  // needs to be mapped correctly
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW1:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW1:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW1:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW1:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW1:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW1:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW1:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x07, 0x07, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2,3")  // OK
	PORT_DIPSETTING(    0x00, "40%" )
	PORT_DIPSETTING(    0x01, "45%" )
	PORT_DIPSETTING(    0x02, "50%" )
	PORT_DIPSETTING(    0x03, "60%" )
	PORT_DIPSETTING(    0x04, "65%" )
	PORT_DIPSETTING(    0x05, "70%" )
	PORT_DIPSETTING(    0x06, "75%" )
	PORT_DIPSETTING(    0x07, "80%" )
	PORT_DIPNAME( 0x18, 0x18, "Hopper Limit" )          PORT_DIPLOCATION("DSW2:4,5")  // not checked
	PORT_DIPSETTING(    0x18, "300" )
	PORT_DIPSETTING(    0x10, "500" )
	PORT_DIPSETTING(    0x08, "1000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x20, 0x20, "100 Odds Sound" )        PORT_DIPLOCATION("DSW2:6")  // not checked
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, "Key In Type" )           PORT_DIPLOCATION("DSW2:7")  // OK
	PORT_DIPSETTING(    0x40, "A-Type" )
	PORT_DIPSETTING(    0x00, "B-Type" )
	PORT_DIPNAME( 0x80, 0x80, "Coin D Rate" )           PORT_DIPLOCATION("DSW2:8")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x80, DEF_STR( 1C_5C ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x03, "Key In Rate" )       PORT_DIPLOCATION("DSW3:1,2")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_10C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x40)  // A-Type
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_20C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_50C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_100C ) )      PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C ) )        PORT_CONDITION("DSW2",0x40,EQUALS,0x00)  // B-Type
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_10C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_25C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_50C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPNAME( 0x04, 0x04, "Coin A Rate" )       PORT_DIPLOCATION("DSW3:3")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_2C ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW3:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW3:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW3:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW3:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW3:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x07, 0x07, "Coin In Limit" )         PORT_DIPLOCATION("DSW4:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "1,000" )
	PORT_DIPSETTING(    0x05, "5,000" )
	PORT_DIPSETTING(    0x02, "10,000" )
	PORT_DIPSETTING(    0x00, "20,000" )
	PORT_DIPNAME( 0x08, 0x08, "Instant W-Up Game" )     PORT_DIPLOCATION("DSW4:4")      // OK
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )   // play W-up game right away from bet screen!
	PORT_DIPNAME( 0x10, 0x10, "Attract Mode Demo" )     PORT_DIPLOCATION("DSW4:5")      // OK
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )  // Title screen only
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )   // Title screen and demo
	PORT_DIPNAME( 0x20, 0x20, "Bonus Game Type" )       PORT_DIPLOCATION("DSW4:6")      // OK
	PORT_DIPSETTING(    0x20, "Big / Small" )
	PORT_DIPSETTING(    0x00, "Black / Red" )
	PORT_DIPNAME( 0x40, 0x40, "Card Type" )             PORT_DIPLOCATION("DSW4:7")      // OK
	PORT_DIPSETTING(    0x40, "Standard" )
	PORT_DIPSETTING(    0x00, "Jets" )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW4:8")      // OK
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW5")
	PORT_DIPNAME( 0x07, 0x07, "Lowest Winning Hand" )   PORT_DIPLOCATION("DSW5:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "2 Pair" )
	PORT_DIPSETTING(    0x06, "Any Pair" )
	PORT_DIPSETTING(    0x05, "6s Or Higher" )
	PORT_DIPSETTING(    0x04, "10s Or Higher" )
	PORT_DIPSETTING(    0x03, "Jacks Or Higher" )
	PORT_DIPSETTING(    0x02, "Queens Or Higher" )
	PORT_DIPSETTING(    0x01, "Kings Or Higher" )
	PORT_DIPSETTING(    0x00, "Ace Pair" )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW5:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, "Number Of Draws" )       PORT_DIPLOCATION("DSW5:5")  // OK
	PORT_DIPSETTING(    0x10, "1" )
	PORT_DIPSETTING(    0x00, "2" )
	PORT_DIPNAME( 0x20, 0x00, "Joker In Deck" )         PORT_DIPLOCATION("DSW5:6")
	PORT_DIPSETTING(    0x20, DEF_STR( No ) )
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )
	PORT_DIPNAME( 0xc0, 0xc0, "Minimum Bet" )           PORT_DIPLOCATION("DSW5:7,8")  // OK
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0xc0, "10" )
	PORT_DIPSETTING(    0x80, "20")
	PORT_DIPSETTING(    0x40, "30" )
INPUT_PORTS_END

/* taken from manual - (it's a starting point)
   consider everything unverified
   not all DIP banks are actually hooked up as I/O map
   is currently based on what crazybon actually reads
*/
static INPUT_PORTS_START( pkrmast )
	PORT_START("IN0") // PLAYER
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_BUTTON1 )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_BUTTON2 )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_V) PORT_NAME("Bet Red / 2")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP3 ) PORT_CODE(KEYCODE_C) PORT_NAME("Stop 3 / Small / 1 / Info")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_B) PORT_NAME("Bet Blue / D-UP / 3")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SLOT_STOP1 ) PORT_CODE(KEYCODE_Z) PORT_NAME("Stop 1 / Take")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP2 ) PORT_CODE(KEYCODE_X) PORT_NAME("Stop 2 / Big / Ticket")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_CODE(KEYCODE_N) PORT_NAME("Start / Stop All / 4")

	PORT_START("IN1") // COIN
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_Q) PORT_NAME("IN1:1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_W) PORT_NAME("IN1:2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_E) PORT_NAME("IN1:3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_R) PORT_NAME("IN1:4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_T) PORT_NAME("IN1:5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_Y) PORT_NAME("IN1:6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_U) PORT_NAME("IN1:7")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_I) PORT_NAME("IN1:8")

	PORT_START("IN2") // TEST
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_A) PORT_NAME("IN2:1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_S) PORT_NAME("IN2:2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_D) PORT_NAME("IN2:3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_F) PORT_NAME("IN2:4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_G) PORT_NAME("IN2:5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_H) PORT_NAME("IN2:6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_J) PORT_NAME("IN2:7")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_K) PORT_NAME("IN2:8")

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x00, "Freeze Pair On Line" )   PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, "Off" )
	PORT_DIPSETTING(    0x00, "On" )
	PORT_DIPNAME( 0x02, 0x02, "Hopper Out" )            PORT_DIPLOCATION("DSW1:2")
	PORT_DIPSETTING(    0x02, "Active Low" )
	PORT_DIPSETTING(    0x00, "Active High" )
	PORT_DIPNAME( 0x04, 0x04, "Type Of Payout" )        PORT_DIPLOCATION("DSW1:3")
	PORT_DIPSETTING(    0x04, "Switch" )
	PORT_DIPSETTING(    0x00, "Automatic" )
	PORT_DIPNAME( 0x08, 0x00, "W-Up '7'" )              PORT_DIPLOCATION("DSW1:4")
	PORT_DIPSETTING(    0x08, "Loss" )
	PORT_DIPSETTING(    0x00, "Even" )
	PORT_DIPNAME( 0x10, 0x10, "W-Up Pay Rate" )         PORT_DIPLOCATION("DSW1:5")
	PORT_DIPSETTING(    0x10, "70%" )
	PORT_DIPSETTING(    0x00, "80%" )
	PORT_DIPNAME( 0x20, 0x20, "W-Up Game" )             PORT_DIPLOCATION("DSW1:6")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )
	PORT_DIPNAME( 0xc0, 0x00, "Bet Max" )               PORT_DIPLOCATION("DSW1:7,8")
	PORT_DIPSETTING(    0xc0, "16" )
	PORT_DIPSETTING(    0x80, "32" )
	PORT_DIPSETTING(    0x40, "64" )
	PORT_DIPSETTING(    0x00, "96" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x07, 0x00, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2,3")
	PORT_DIPSETTING(    0x07, "30%" )
	PORT_DIPSETTING(    0x06, "40%" )
	PORT_DIPSETTING(    0x05, "45%" )
	PORT_DIPSETTING(    0x04, "50%" )
	PORT_DIPSETTING(    0x03, "55%" )
	PORT_DIPSETTING(    0x02, "60%" )
	PORT_DIPSETTING(    0x01, "65%" )
	PORT_DIPSETTING(    0x00, "70%" )
	PORT_DIPNAME( 0x18, 0x00, "Hopper Limit" )          PORT_DIPLOCATION("DSW2:4,5")
	PORT_DIPSETTING(    0x18, "300" )
	PORT_DIPSETTING(    0x10, "500" )
	PORT_DIPSETTING(    0x08, "1000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x20, 0x00, "100 Odds Sound" )        PORT_DIPLOCATION("DSW2:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x00, "Key In Type" )           PORT_DIPLOCATION("DSW2:7")
	PORT_DIPSETTING(    0x00, "A-Type" )
	PORT_DIPSETTING(    0x40, "B-Type" )
	PORT_DIPNAME( 0x80, 0x00, "Type Of Coin D" )        PORT_DIPLOCATION("DSW2:8")
	PORT_DIPSETTING(    0x00, "C Type" )
	PORT_DIPSETTING(    0x80, "D Type" )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x00, "Key In Rate" )           PORT_DIPLOCATION("DSW3:1,2")
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_10C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x00)  // A Type
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_20C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_50C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_100C ) )      PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C) )         PORT_CONDITION("DSW2",0x40,EQUALS,0x40)  // B Type
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_10C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_25C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_50C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPNAME( 0x0c, 0x00, "Coin A Rate" )           PORT_DIPLOCATION("DSW3:3,4")
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x0c, DEF_STR( 1C_10C ) )
	PORT_DIPNAME( 0x30, 0x00, "Coin D Rate" )           PORT_DIPLOCATION("DSW3:5,6")
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_10C ) )       PORT_CONDITION("DSW2",0x80,EQUALS,0x00)  // C Type
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_20C ) )       PORT_CONDITION("DSW2",0x80,EQUALS,0x00)
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_50C ) )       PORT_CONDITION("DSW2",0x80,EQUALS,0x00)
	PORT_DIPSETTING(    0x30, DEF_STR( 1C_100C ) )      PORT_CONDITION("DSW2",0x80,EQUALS,0x00)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C) )         PORT_CONDITION("DSW2",0x80,EQUALS,0x80)  // D Type
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_10C ) )       PORT_CONDITION("DSW2",0x80,EQUALS,0x80)
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_25C ) )       PORT_CONDITION("DSW2",0x80,EQUALS,0x80)
	PORT_DIPSETTING(    0x30, DEF_STR( 1C_50C ) )       PORT_CONDITION("DSW2",0x80,EQUALS,0x80)
	PORT_DIPNAME( 0xc0, 0x00, "Coin C Rate" )           PORT_DIPLOCATION("DSW3:7,8")
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x80, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0xc0, DEF_STR( 1C_10C ) )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x07, 0x00, "Credit Limit" )                  PORT_DIPLOCATION("DSW4:1,2,3")
	PORT_DIPSETTING(    0x07, "5000" )
	PORT_DIPSETTING(    0x06, "10000" )
	PORT_DIPSETTING(    0x05, "20000" )
	PORT_DIPSETTING(    0x04, "30000" )
	PORT_DIPSETTING(    0x03, "40000" )
	PORT_DIPSETTING(    0x02, "50000" )
	PORT_DIPSETTING(    0x01, "100000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x08, 0x00, "Display Credit Limit" )          PORT_DIPLOCATION("DSW4:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x00, "Bet Limit For Center Super 7" )  PORT_DIPLOCATION("DSW4:5")
	PORT_DIPSETTING(    0x10, "Limited" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x20, 0x00, "Bonus Play Min Bet" )            PORT_DIPLOCATION("DSW4:6")
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x20, "16" )
	PORT_DIPNAME( 0x40, 0x40, "Reel Speed" )                    PORT_DIPLOCATION("DSW4:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Low ) )
	PORT_DIPSETTING(    0x00, DEF_STR( High ) )
	PORT_DIPNAME( 0x80, 0x00, "Hopper Out By Coin A" )          PORT_DIPLOCATION("DSW4:8")
	PORT_DIPSETTING(    0x80, "On" )
	PORT_DIPSETTING(    0x00, "Off" )

	PORT_START("DSW5")
	PORT_DIPNAME( 0x01, 0x00, "Display Doll On Demo" )          PORT_DIPLOCATION("DSW5:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x06, 0x06, "Coin In Limit" )                 PORT_DIPLOCATION("DSW5:2,3")
	PORT_DIPSETTING(    0x00, "1000" )
	PORT_DIPSETTING(    0x02, "5000" )
	PORT_DIPSETTING(    0x04, "10000" )
	PORT_DIPSETTING(    0x06, "20000" )
	PORT_DIPNAME( 0x18, 0x18, "Condition For 3 Kind Bonus" )    PORT_DIPLOCATION("DSW5:4,5")
	PORT_DIPSETTING(    0x18, "3-2-1" )
	PORT_DIPSETTING(    0x10, "6-3-1" )
	PORT_DIPSETTING(    0x08, "9-5-1" )
	PORT_DIPSETTING(    0x00, "12-7-1" )
	PORT_DIPNAME( 0x20, 0x00, "Display Doll On Fruit & Cherry Bonus" )  PORT_DIPLOCATION("DSW5:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x00, "Coin Out Rate" )                 PORT_DIPLOCATION("DSW5:7")
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x40, "10" )
	PORT_DIPNAME( 0x80, 0x00, "Run Cards In W-Up" )             PORT_DIPLOCATION("DSW5:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW6")
	PORT_DIPNAME( 0x01, 0x00, "Card Type" )                     PORT_DIPLOCATION("DSW6:1")
	PORT_DIPSETTING(    0x01, "Cards" )
	PORT_DIPSETTING(    0x00, "Missiles" )
	PORT_DIPNAME( 0x02, 0x02, "Type Of W-Up Game" )             PORT_DIPLOCATION("DSW6:2")
	PORT_DIPSETTING(    0x00, "Big / Small" )
	PORT_DIPSETTING(    0x02, "Red / Black" )
	PORT_DIPNAME( 0x04, 0x00, "Hold After 1st Hold" )           PORT_DIPLOCATION("DSW6:3")
	PORT_DIPSETTING(    0x04, "Off" )
	PORT_DIPSETTING(    0x00, "On" )
	PORT_DIPNAME( 0x08, 0x00, "Royal Win" )                     PORT_DIPLOCATION("DSW6:4")
	PORT_DIPSETTING(    0x08, "Off" )
	PORT_DIPSETTING(    0x00, "On" )
	PORT_DIPNAME( 0x10, 0x00, "Joker" )                         PORT_DIPLOCATION("DSW6:5")
	PORT_DIPSETTING(    0x10, "Off" )
	PORT_DIPSETTING(    0x00, "On" )
	PORT_DIPNAME( 0xe0, 0x00, "One Pair Win Type" )             PORT_DIPLOCATION("DSW6:6,7,8")
	PORT_DIPSETTING(    0x80, "No Win" )
	PORT_DIPSETTING(    0x60, "Any Pair" )
	PORT_DIPSETTING(    0x40, "6s & Better" )
	PORT_DIPSETTING(    0xe0, "10s & Beter" )
	PORT_DIPSETTING(    0xc0, "Jacks & Better" )
	PORT_DIPSETTING(    0xa0, "Queens & Better" )
	PORT_DIPSETTING(    0x20, "Kings & Better" )
	PORT_DIPSETTING(    0x00, "Ace Pair" )

	PORT_START("DSW7")
	PORT_DIPNAME( 0x03, 0x01, "Minimum Bet To Play" )           PORT_DIPLOCATION("DSW7:1,2")
	PORT_DIPSETTING(    0x01, "1" )
	PORT_DIPSETTING(    0x02, "5" )
	PORT_DIPSETTING(    0x03, "8" )
	PORT_DIPSETTING(    0x00, "10" )
	PORT_DIPNAME( 0x0c, 0x04, "Keys Panel Type" )               PORT_DIPLOCATION("DSW7:3,4")
	PORT_DIPSETTING(    0x04, "A Type" )
	PORT_DIPSETTING(    0x0c, "B Type" )
	PORT_DIPSETTING(    0x08, "C Type" )
	PORT_DIPSETTING(    0x00, "D Type" )
	PORT_DIPNAME( 0x10, 0x00, "Chance Bonus" )                  PORT_DIPLOCATION("DSW7:5")
	PORT_DIPSETTING(    0x10, DEF_STR( No ) )
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x20, 0x00, "Sound At Run & Open Cards" )     PORT_DIPLOCATION("DSW7:6")
	PORT_DIPSETTING(    0x20, DEF_STR( No ) )
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )
	PORT_DIPNAME( 0xc0, 0x80, "Main Game Type" )                PORT_DIPLOCATION("DSW7:7,8")
	PORT_DIPSETTING(    0x40, "Cherry Master Only - Full Demo" )
	PORT_DIPSETTING(    0xc0, "Poker Only - Full Demo" )
	PORT_DIPSETTING(    0x80, "Full Demo Of Both Games" )
	PORT_DIPSETTING(    0x00, "Logo Only Demo Of Both Games" )
INPUT_PORTS_END

static INPUT_PORTS_START( jkrmast )
	// test mode shows 3 input ports
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	// test mode shows 4 8-DIP banks
	PORT_START("DSW1")
	PORT_DIPUNKNOWN_DIPLOC(0x01, 0x01, "SW1:1")
	PORT_DIPUNKNOWN_DIPLOC(0x02, 0x02, "SW1:2")
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "SW1:3")
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "SW1:4")
	PORT_DIPUNKNOWN_DIPLOC(0x10, 0x10, "SW1:5")
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "SW1:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "SW1:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "SW1:8")

	PORT_START("DSW2")
	PORT_DIPUNKNOWN_DIPLOC(0x01, 0x01, "SW2:1")
	PORT_DIPUNKNOWN_DIPLOC(0x02, 0x02, "SW2:2")
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "SW2:3")
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "SW2:4")
	PORT_DIPUNKNOWN_DIPLOC(0x10, 0x10, "SW2:5")
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "SW2:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "SW2:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "SW2:8")

	PORT_START("DSW3")
	PORT_DIPUNKNOWN_DIPLOC(0x01, 0x01, "SW3:1")
	PORT_DIPUNKNOWN_DIPLOC(0x02, 0x02, "SW3:2")
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "SW3:3")
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "SW3:4")
	PORT_DIPUNKNOWN_DIPLOC(0x10, 0x10, "SW3:5")
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "SW3:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "SW3:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "SW3:8")

	PORT_START("DSW4")
	PORT_DIPUNKNOWN_DIPLOC(0x01, 0x01, "SW4:1")
	PORT_DIPUNKNOWN_DIPLOC(0x02, 0x02, "SW4:2")
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "SW4:3")
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "SW4:4")
	PORT_DIPUNKNOWN_DIPLOC(0x10, 0x10, "SW4:5")
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "SW4:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "SW4:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "SW4:8")
INPUT_PORTS_END

static INPUT_PORTS_START( chry10 )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON2 ) PORT_CODE(KEYCODE_X) PORT_NAME("Stop 2 / Big / Bonus Game")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON5 ) PORT_CODE(KEYCODE_B) PORT_NAME("Blue Bet / D-UP / Card 3")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON1 ) PORT_CODE(KEYCODE_Z) PORT_NAME("Stop 1 / Take")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON4 ) PORT_CODE(KEYCODE_V) PORT_NAME("Red Bet / Card 2")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON3 ) PORT_CODE(KEYCODE_C) PORT_NAME("Stop 3 / Small / Info / Card 1")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON6 ) PORT_CODE(KEYCODE_N) PORT_NAME("Start / Stop All / Card 4")

	PORT_INCLUDE( cmv4_coins )

	PORT_INCLUDE( cmv4_service )

	PORT_START("IN3")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_INCLUDE( cb3_dsw1 )
	PORT_MODIFY("DSW1")
	// Game Style not checked
	// Hopper Out Switch not checked
	// Payout Mode not checked
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW1:4")  // normally '7' In Double Up Game but doesn't seem to do anything
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	// Double Up Game Pay Rate OK
	// Double Up Game OK
	// Bet Max OK

	PORT_INCLUDE( cmv4_dsw2 )
	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x07, 0x00, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2,3")  // OK
	PORT_DIPSETTING(    0x00, "40%" )
	PORT_DIPSETTING(    0x01, "45%" )
	PORT_DIPSETTING(    0x02, "50%" )
	PORT_DIPSETTING(    0x03, "55%" )
	PORT_DIPSETTING(    0x04, "60%" )
	PORT_DIPSETTING(    0x05, "65%" )
	PORT_DIPSETTING(    0x06, "70%" )
	PORT_DIPSETTING(    0x07, "80%" )
	// Hopper Limit not checked
	// 100+ Odds Sound not checked
	// Key In Type OK - note that definition of A-Type and B-Type are reversed compared to cmv4
	// Center Super 7 Bet Limit related with Min. Bet For Bonus Play (DSW4-6)

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x03, "Key In Rate" ) PORT_DIPLOCATION("DSW3:1,2")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C ) )        PORT_CONDITION("DSW2",0x40,EQUALS,0x40)  // A-Type
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_10C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_25C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_50C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_10C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x00)  // B-Type
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_20C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_50C ) )       PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_100C ) )      PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPNAME( 0x0c, 0x0c, "Coin A Rate" ) PORT_DIPLOCATION("DSW3:3,4")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_50C ) )
	PORT_DIPSETTING(    0x0c, DEF_STR( 1C_100C ) )
	PORT_DIPNAME( 0x30, 0x30, "Coin D Rate" ) PORT_DIPLOCATION("DSW3:5,6")  // OK
	PORT_DIPSETTING(    0x30, DEF_STR( 5C_1C ) )        PORT_CONDITION("DSW4",0x10,EQUALS,0x10)  // C-Type
	PORT_DIPSETTING(    0x20, "2 Coins/10 Credits" )    PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_10C ) )       PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_20C ) )       PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, "1 Ticket/50 Credits" )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)  // D-Type
	PORT_DIPSETTING(    0x10, "1 Ticket/100 Credits" )  PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x20, "1 Ticket/200 Credits" )  PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x30, "1 Ticket/500 Credits" )  PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPNAME( 0xc0, 0xc0, "Coin C Rate" ) PORT_DIPLOCATION("DSW3:7,8")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x80, DEF_STR( 1C_50C ) )
	PORT_DIPSETTING(    0xc0, DEF_STR( 1C_100C ) )

	PORT_INCLUDE( cb3_dsw4 )  // all OK

	PORT_INCLUDE( cb3_dsw5 )
	// DSW5-1 not checked
	// Coin In Limit not working
	// Coin Out Rate not checked
	// Double Up Girl not working (always shows face in demo)
	// Coin In Rate not checked
INPUT_PORTS_END

static INPUT_PORTS_START( ncb3 )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON2 ) PORT_CODE(KEYCODE_X) PORT_NAME("P1 - Stop 2 / Big / Bonus Game / Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON5 ) PORT_CODE(KEYCODE_B) PORT_NAME("P1 - Blue Bet / D-UP / Card 3")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON1 ) PORT_CODE(KEYCODE_Z) PORT_NAME("P1 - Stop 1 / Take")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON4 ) PORT_CODE(KEYCODE_V) PORT_NAME("P1 - Red Bet / Card 2")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON3 ) PORT_CODE(KEYCODE_C) PORT_NAME("P1 - Stop 3 / Small / Info / Card 1")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON6 ) PORT_CODE(KEYCODE_N) PORT_NAME("P1 - Start / Stop All / Card 4")

	PORT_INCLUDE( cmv4_coins )

	PORT_INCLUDE( cmv4_service )

	PORT_START("IN3")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON8 )  PORT_CODE(KEYCODE_S) PORT_NAME("P2 - Stop 2 / Big / Bonus Game / Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON11 ) PORT_CODE(KEYCODE_G) PORT_NAME("P2 - Blue Bet / D-UP / Card 3")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON7 )  PORT_CODE(KEYCODE_A) PORT_NAME("P2 - Stop 1 / Take")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON10 ) PORT_CODE(KEYCODE_F) PORT_NAME("P2 - Red Bet / Card 2")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON9 )  PORT_CODE(KEYCODE_D) PORT_NAME("P2 - Stop 3 / Small / Info / Card 1")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON12 ) PORT_CODE(KEYCODE_H) PORT_NAME("P2 - Start / Stop All / Card 4")

	PORT_INCLUDE( cb3_dsw1 )
	// Game Style not checked
	// Hopper Out Switch not checked
	// Payout Mode not checked
	// '7' In Double Up Game OK
	// Double Up Game Pay Rate OK
	// Double Up Game OK
	// Bet Max OK

	PORT_INCLUDE( cmv4_dsw2 )
	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x07, 0x00, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2,3")  // OK
	PORT_DIPSETTING(    0x00, "55%" )
	PORT_DIPSETTING(    0x01, "60%" )
	PORT_DIPSETTING(    0x02, "65%" )
	PORT_DIPSETTING(    0x03, "70%" )
	PORT_DIPSETTING(    0x04, "75%" )
	PORT_DIPSETTING(    0x05, "80%" )
	PORT_DIPSETTING(    0x06, "85%" )
	PORT_DIPSETTING(    0x07, "90%" )
	// Hopper Limit not checked
	// 100+ Odds Sound not checked
	// Key In Type OK - note that definition of A-Type and B-Type are reversed compared to cmv4
	// Center Super 7 Bet Limit related with Min. Bet For Bonus Play (DSW4-6)

	PORT_INCLUDE( cb3_dsw3 )  // all OK

	PORT_INCLUDE( cb3_dsw4 )  // all OK

	PORT_INCLUDE( cb3_dsw5 )
	// DSW5-1 not checked
	// Coin In Limit not working
	// Coin Out Rate not checked
	// Double Up Girl not working (always shows face in demo)
	// Coin In Rate not checked
INPUT_PORTS_END

static INPUT_PORTS_START( cb3a )
	PORT_INCLUDE( ncb3 )

	PORT_MODIFY("DSW1")
	PORT_DIPNAME( 0x10, 0x10, "W-Up Pay Rate" )     PORT_DIPLOCATION("DSW1:5")  // OK
	PORT_DIPSETTING(    0x00, "50%" )
	PORT_DIPSETTING(    0x10, "80%" )
INPUT_PORTS_END

static INPUT_PORTS_START( lucky8 )
	PORT_START("IN0")  // b800
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON6 ) PORT_CODE(KEYCODE_B) PORT_NAME("P1 - Big / Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON4 ) PORT_CODE(KEYCODE_C) PORT_NAME("P1 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON5 ) PORT_CODE(KEYCODE_V) PORT_NAME("P1 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON1 ) PORT_CODE(KEYCODE_Z) PORT_NAME("P1 - Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON3 ) PORT_CODE(KEYCODE_N) PORT_NAME("P1 - Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON2 ) PORT_CODE(KEYCODE_X) PORT_NAME("P1 - Start")

	PORT_START("IN1")  // b801
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON12 ) PORT_CODE(KEYCODE_G) PORT_NAME("P2 - Big / Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON10 ) PORT_CODE(KEYCODE_D) PORT_NAME("P2 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON11 ) PORT_CODE(KEYCODE_F) PORT_NAME("P2 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON13 ) PORT_CODE(KEYCODE_A) PORT_NAME("P2 - Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON15 ) PORT_CODE(KEYCODE_H) PORT_NAME("P2 - Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON14 ) PORT_CODE(KEYCODE_S) PORT_NAME("P2 - Start")

	PORT_START("IN2")  // b802
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN3")  // b810
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME("Coin B")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_COIN4 ) PORT_IMPULSE(2) PORT_NAME("Coin D")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN3 ) PORT_IMPULSE(2) PORT_NAME("Coin C")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2) PORT_NAME("Coin A")

	PORT_START("IN4")  // b811
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN ) PORT_READ_LINE_DEVICE_MEMBER("hopper", FUNC(ticket_dispenser_device::line_r))
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT ) PORT_NAME("Key Out / Attendant")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_8_PAD) PORT_NAME("Hopper")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unused ) )           PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, "Hopper Coin Switch" )        PORT_DIPLOCATION("DSW1:2")
	PORT_DIPSETTING(    0x02, "Active Low" )
	PORT_DIPSETTING(    0x00, "Active High" )
	PORT_DIPNAME( 0x04, 0x04, "Payout Mode" )               PORT_DIPLOCATION("DSW1:3")
	PORT_DIPSETTING(    0x04, "Payout Switch" )
	PORT_DIPSETTING(    0x00, "Automatic" )
	PORT_DIPNAME( 0x08, 0x00, "'7' In Double Up Game" )     PORT_DIPLOCATION("DSW1:4")      // OK
	PORT_DIPSETTING(    0x08, "Lose" )
	PORT_DIPSETTING(    0x00, "Even" )
	PORT_DIPNAME( 0x10, 0x10, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")      // OK
	PORT_DIPSETTING(    0x10, "80%" )
	PORT_DIPSETTING(    0x00, "90%" )
	PORT_DIPNAME( 0x20, 0x20, "Double Up Game" )            PORT_DIPLOCATION("DSW1:6")      // OK
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )
	PORT_DIPNAME( 0xc0, 0x00, "Special Odds" )              PORT_DIPLOCATION("DSW1:7,8")    // doesn't seem to actually do anything - in W-4 manual but probably unused in these game
	PORT_DIPSETTING(    0xc0, "None" )
	PORT_DIPSETTING(    0x80, "Limited to X 300 (X 1000)" )
	PORT_DIPSETTING(    0x40, "Limited to X 500 (X 5000)" )
	PORT_DIPSETTING(    0x00, "Limited to X 1000 (X 10000)" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x07, 0x07, "Main Game Pay Rate" )        PORT_DIPLOCATION("DSW2:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "80%" )
	PORT_DIPSETTING(    0x06, "83%" )
	PORT_DIPSETTING(    0x05, "86%" )
	PORT_DIPSETTING(    0x04, "89%" )
	PORT_DIPSETTING(    0x03, "92%" )
	PORT_DIPSETTING(    0x02, "95%" )
	PORT_DIPSETTING(    0x01, "98%" )
	PORT_DIPSETTING(    0x00, "101%" )  // ???
	PORT_DIPNAME( 0x18, 0x00, "Hopper Limit" )              PORT_DIPLOCATION("DSW2:4,5")
	PORT_DIPSETTING(    0x18, "300" )
	PORT_DIPSETTING(    0x10, "500" )
	PORT_DIPSETTING(    0x08, "1000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x20, 0x20, "Over 100 Bet Sound" )        PORT_DIPLOCATION("DSW2:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, "Paytable Settings" )         PORT_DIPLOCATION("DSW2:7")
	PORT_DIPSETTING(    0x40, "Low Pay" )
	PORT_DIPSETTING(    0x00, "High Pay" )
	PORT_DIPNAME( 0x80, 0x80, "Double Up Game Type" )       PORT_DIPLOCATION("DSW2:8")  // OK
	PORT_DIPSETTING(    0x80, "Reels (automatic)" )
	PORT_DIPSETTING(    0x00, "Cards (Big/Small)" )

	PORT_START("DSW3")  // marked as DSW4 in manual
	PORT_DIPNAME( 0x0f, 0x07, "Coin D Rate" )       PORT_DIPLOCATION("DSW4:1,2,3,4")  // OK - all other values are 10C/1C
	PORT_DIPSETTING(    0x0f, DEF_STR( 10C_1C ) )
	PORT_DIPSETTING(    0x01, DEF_STR( 5C_1C ) )
	PORT_DIPSETTING(    0x02, DEF_STR( 5C_2C ) )
	PORT_DIPSETTING(    0x03, DEF_STR( 4C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 3C_1C ) )
	PORT_DIPSETTING(    0x05, DEF_STR( 2C_1C ) )
	PORT_DIPSETTING(    0x06, DEF_STR( 2C_3C ) )
	PORT_DIPSETTING(    0x07, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x09, DEF_STR( 1C_3C ) )
	PORT_DIPSETTING(    0x0a, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x0b, DEF_STR( 1C_10C ) )
	PORT_DIPNAME( 0x70, 0x60, "Coin C Rate" )       PORT_DIPLOCATION("DSW4:5,6,7")  // OK - all other values are 10C/1C
	PORT_DIPSETTING(    0x70, DEF_STR( 10C_1C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 9C_1C ) )
	PORT_DIPSETTING(    0x20, DEF_STR( 6C_1C ) )
	PORT_DIPSETTING(    0x30, DEF_STR( 5C_1C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 3C_1C ) )
	PORT_DIPSETTING(    0x50, DEF_STR( 2C_1C ) )
	PORT_DIPSETTING(    0x60, DEF_STR( 1C_1C ) )
	PORT_DIPNAME( 0x80, 0x80, "4th Coin" )          PORT_DIPLOCATION("DSW4:8")      // OK
	PORT_DIPSETTING(    0x80, "As Coin A" )
	PORT_DIPSETTING(    0x00, "As Hopper Line" )

	PORT_START("DSW4")  // marked as DSW3 in manual
	PORT_DIPNAME( 0x07, 0x07, "Key In Rate" )       PORT_DIPLOCATION("DSW3:1,2,3")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_25C ) )
	PORT_DIPSETTING(    0x04, "1 Coin/40 Credits" )
	PORT_DIPSETTING(    0x05, DEF_STR( 1C_50C ) )
	PORT_DIPSETTING(    0x06, "1 Coin/60 Credits" )
	PORT_DIPSETTING(    0x07, DEF_STR( 1C_100C ) )
	PORT_DIPNAME( 0x38, 0x38, "Coin A Rate" )       PORT_DIPLOCATION("DSW3:4,5,6")  // OK
	PORT_DIPSETTING(    0x38, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_4C ) )
	PORT_DIPSETTING(    0x18, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_6C ) )    // manual says 1C/8C
	PORT_DIPSETTING(    0x28, DEF_STR( 1C_10C ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW3:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW3:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END

static INPUT_PORTS_START( lucky8a )
	PORT_INCLUDE( lucky8 )

	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x07, 0x07, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2,3")
	PORT_DIPSETTING(    0x07, "30%" )
	PORT_DIPSETTING(    0x06, "40%" )
	PORT_DIPSETTING(    0x05, "50%" )
	PORT_DIPSETTING(    0x04, "60%" )
	PORT_DIPSETTING(    0x03, "70%" )
	PORT_DIPSETTING(    0x02, "80%" )
	PORT_DIPSETTING(    0x01, "90%" )
	PORT_DIPSETTING(    0x00, "100%" )
INPUT_PORTS_END

static INPUT_PORTS_START( lucky8b )
	PORT_INCLUDE( lucky8 )

	PORT_MODIFY("IN1")      // Player 2 controls not used in this set
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_MODIFY("IN2")
    PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SLOT_STOP3) PORT_CODE(KEYCODE_C) PORT_CODE(KEYCODE_3_PAD) PORT_NAME("P1 - Stop3")
    PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SLOT_STOP2) PORT_CODE(KEYCODE_X) PORT_CODE(KEYCODE_2_PAD) PORT_NAME("P1 - Stop2")
    PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP1) PORT_CODE(KEYCODE_Z) PORT_CODE(KEYCODE_1_PAD) PORT_NAME("P1 - Stop1")

	PORT_MODIFY("DSW1")
	PORT_DIPNAME( 0x10, 0x10, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")      // OK
	PORT_DIPSETTING(    0x10, "60%" )
	PORT_DIPSETTING(    0x00, "75%" )

	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x07, 0x07, "Main Game Pay Rate" )        PORT_DIPLOCATION("DSW2:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "58%" )
	PORT_DIPSETTING(    0x06, "62%" )
	PORT_DIPSETTING(    0x05, "66%" )
	PORT_DIPSETTING(    0x04, "70%" )
	PORT_DIPSETTING(    0x03, "74%" )
	PORT_DIPSETTING(    0x02, "78%" )
	PORT_DIPSETTING(    0x01, "82%" )
	PORT_DIPSETTING(    0x00, "86%" )
INPUT_PORTS_END

static INPUT_PORTS_START( lucky8l )
	PORT_INCLUDE( lucky8 )

	PORT_MODIFY("IN2")
    PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SLOT_STOP3) PORT_CODE(KEYCODE_V) PORT_CODE(KEYCODE_3_PAD) PORT_NAME("P1 - Stop3")
    PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SLOT_STOP2) PORT_CODE(KEYCODE_C) PORT_CODE(KEYCODE_2_PAD) PORT_NAME("P1 - Stop2")
    PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP1) PORT_CODE(KEYCODE_X) PORT_CODE(KEYCODE_1_PAD) PORT_NAME("P1 - Stop1")
INPUT_PORTS_END

static INPUT_PORTS_START( lucky8d )
	PORT_INCLUDE( lucky8 )

	PORT_MODIFY("DSW1")
	PORT_DIPNAME( 0x10, 0x10, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")      // OK
	PORT_DIPSETTING(    0x10, "60%" )
	PORT_DIPSETTING(    0x00, "70%" )

	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x07, 0x07, "Main Game Pay Rate" )        PORT_DIPLOCATION("DSW2:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "43%" )
	PORT_DIPSETTING(    0x06, "47%" )
	PORT_DIPSETTING(    0x05, "53%" )
	PORT_DIPSETTING(    0x04, "57%" )
	PORT_DIPSETTING(    0x03, "63%" )
	PORT_DIPSETTING(    0x02, "67%" )
	PORT_DIPSETTING(    0x01, "73%" )
	PORT_DIPSETTING(    0x00, "79%" )
INPUT_PORTS_END

static INPUT_PORTS_START( ns8linew )
	PORT_START("IN0")  // b800
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON6 ) PORT_CODE(KEYCODE_B) PORT_NAME("P1 - Big / Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON4 ) PORT_CODE(KEYCODE_C) PORT_NAME("P1 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON5 ) PORT_CODE(KEYCODE_V) PORT_NAME("P1 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON1 ) PORT_CODE(KEYCODE_Z) PORT_NAME("P1 - Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON3 ) PORT_CODE(KEYCODE_N) PORT_NAME("P1 - Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON2 ) PORT_CODE(KEYCODE_X) PORT_NAME("P1 - Start")

	PORT_START("IN1")  // b801 - P2 Controls... Leftover? Once switched all lamps turn off and no P2 big/small inputs
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON12 ) PORT_CODE(KEYCODE_G) PORT_NAME("P2 - Big / Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON10 ) PORT_CODE(KEYCODE_D) PORT_NAME("P2 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON11 ) PORT_CODE(KEYCODE_F) PORT_NAME("P2 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON13 ) PORT_CODE(KEYCODE_A) PORT_NAME("P2 - Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON15 ) PORT_CODE(KEYCODE_H) PORT_NAME("P2 - Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON14 ) PORT_CODE(KEYCODE_S) PORT_NAME("P2 - Start")

	PORT_START("IN2")  // b802
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN3")  // b810 - Money in
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME("Coin B");
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_COIN4 ) PORT_IMPULSE(2) PORT_NAME("Coin D");
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN3 ) PORT_IMPULSE(2) PORT_NAME("Coin C");
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2) PORT_NAME("Coin A")

	PORT_START("IN4")  // b811 - Service controls
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_CUSTOM ) PORT_READ_LINE_DEVICE_MEMBER("hopper", FUNC(ticket_dispenser_device::line_r))
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT ) PORT_NAME("Key Out / Attendant")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_8_PAD) PORT_NAME("Hopper")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, "Hopper Coin Switch" )        PORT_DIPLOCATION("DSW1:2")      // not checked
	PORT_DIPSETTING(    0x02, "Active Low" )
	PORT_DIPSETTING(    0x00, "Active High" )
	PORT_DIPNAME( 0x04, 0x04, "Payout Mode" )               PORT_DIPLOCATION("DSW1:3")      // not checked
	PORT_DIPSETTING(    0x04, "Payout Switch" )
	PORT_DIPSETTING(    0x00, "Automatic" )
	PORT_DIPNAME( 0x18, 0x18, "Double-Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:4,5")    // OK
	PORT_DIPSETTING(    0x18, "60%" )
	PORT_DIPSETTING(    0x10, "70%" )
	PORT_DIPSETTING(    0x08, "80%" )
	PORT_DIPSETTING(    0x00, "90%" )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW1:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0xc0, 0x00, "Special Odds" )              PORT_DIPLOCATION("DSW1:7,8")    // not checked
	PORT_DIPSETTING(    0xc0, "None" )
	PORT_DIPSETTING(    0xb0, "Limited to x300 (x1000)" )
	PORT_DIPSETTING(    0x40, "Limited to x500 (x5000)" )
	PORT_DIPSETTING(    0x00, "Limited to x1000 (x10000)" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x03, 0x01, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2")  // OK
	PORT_DIPSETTING(    0x03, "60%" )
	PORT_DIPSETTING(    0x02, "70%" )
	PORT_DIPSETTING(    0x01, "80%" )
	PORT_DIPSETTING(    0x00, "90%" )
	PORT_DIPNAME( 0x04, 0x04, "Double Up Game" )        PORT_DIPLOCATION("DSW2:3")    // OK
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x04, DEF_STR( On ) )
	PORT_DIPNAME( 0x18, 0x00, "Hopper Limit" )          PORT_DIPLOCATION("DSW2:4,5")  // not checked
	PORT_DIPSETTING(    0x18, "300" )
	PORT_DIPSETTING(    0x10, "500" )
	PORT_DIPSETTING(    0x08, "1000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x20, 0x20, "Over 100 Bet Sound" )    PORT_DIPLOCATION("DSW2:6")    // not checked
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, "Odds Table" )            PORT_DIPLOCATION("DSW2:7")    // not checked
	PORT_DIPSETTING(    0x40, "A - Low" )
	PORT_DIPSETTING(    0x00, "B - High" )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW2:8")    // not working
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x0f, 0x07, "Coin D Rate" )           PORT_DIPLOCATION("DSW3:1,2,3,4")  // OK - all other values are all 10C/1C
	PORT_DIPSETTING(    0x0f, DEF_STR( 10C_1C ) )
	PORT_DIPSETTING(    0x01, DEF_STR( 5C_1C ) )
	PORT_DIPSETTING(    0x02, DEF_STR( 5C_2C ) )
	PORT_DIPSETTING(    0x03, DEF_STR( 4C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 3C_1C ) )
	PORT_DIPSETTING(    0x05, DEF_STR( 2C_1C ) )
	PORT_DIPSETTING(    0x06, DEF_STR( 2C_3C ) )
	PORT_DIPSETTING(    0x07, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x09, DEF_STR( 1C_3C ) )
	PORT_DIPSETTING(    0x0a, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x0b, DEF_STR( 1C_10C ) )
	PORT_DIPNAME( 0x70, 0x60, "Coin C Rate" )           PORT_DIPLOCATION("DSW3:5,6,7")   // OK - all other values are 10C/1C
	PORT_DIPSETTING(    0x70, DEF_STR( 10C_1C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 9C_1C ) )
	PORT_DIPSETTING(    0x20, DEF_STR( 6C_1C ) )
	PORT_DIPSETTING(    0x30, DEF_STR( 5C_1C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 3C_1C ) )
	PORT_DIPSETTING(    0x50, DEF_STR( 2C_1C ) )
	PORT_DIPSETTING(    0x60, DEF_STR( 1C_1C ) )
	PORT_DIPNAME( 0x80, 0x80, "4th Coin" )              PORT_DIPLOCATION("DSW3:8")  // OK
	PORT_DIPSETTING(    0x80, "As Coin A" )
	PORT_DIPSETTING(    0x00, "As Hopper Line" )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x07, 0x07, "Key In Rate" )       PORT_DIPLOCATION("DSW4:1,2,3")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_25C ) )
	PORT_DIPSETTING(    0x04, "1 Coin/40 Credits" )
	PORT_DIPSETTING(    0x05, DEF_STR( 1C_50C ) )
	PORT_DIPSETTING(    0x06, "1 Coin/60 Credits" )
	PORT_DIPSETTING(    0x07, DEF_STR( 1C_100C ) )
	PORT_DIPNAME( 0x38, 0x00, "Coin A Rate" )       PORT_DIPLOCATION("DSW4:4,5,6")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_4C ) )
	PORT_DIPSETTING(    0x18, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_6C ) )    // manual says 1c/8c
	PORT_DIPSETTING(    0x28, DEF_STR( 1C_10C ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW4:7")      // not checked
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW4:8")      // not checked
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END


static INPUT_PORTS_START( lucky8t )
	PORT_INCLUDE( lucky8 )

	PORT_MODIFY("IN1")  // b801 - No P2 Controls...
	PORT_BIT( 0xff, IP_ACTIVE_LOW, IPT_UNKNOWN )

	// code expects the b802h bit2 and b811h bit0 ACTIVE HIGH, and b811h bit3 ACTIVE LOW to boot the game.
	PORT_MODIFY("IN2")  // b802
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_UNKNOWN )  // code checks if high to boot
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_J) PORT_CODE(KEYCODE_3_PAD) PORT_NAME("Stop3 (Right)")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_K) PORT_CODE(KEYCODE_2_PAD) PORT_NAME("Stop2 (Bonus Game)")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_L) PORT_CODE(KEYCODE_1_PAD) PORT_NAME("Stop1 (Left)")

	PORT_MODIFY("IN3")  // b810
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_M) PORT_CODE(KEYCODE_0_PAD) PORT_NAME("Stop All");

	PORT_MODIFY("IN4")  // b811
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_UNKNOWN )  // code checks if high to boot
	PORT_BIT( 0x04, IP_ACTIVE_LOW,  IPT_CUSTOM ) PORT_READ_LINE_DEVICE_MEMBER("hopper", FUNC(ticket_dispenser_device::line_r))
	PORT_BIT( 0x08, IP_ACTIVE_LOW,  IPT_UNKNOWN )  // code checks if low to boot

	PORT_MODIFY("DSW1")
	PORT_DIPNAME( 0x01, 0x01, "Max Bet" )               PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, "64" )
	PORT_DIPSETTING(    0x00, "120" )
	PORT_DIPUNKNOWN_DIPLOC(0x02, 0x02, "DSW1:2")
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "DSW1:3")
	PORT_DIPNAME( 0x18, 0x18, "Double-Up Game Pay Rate" )  PORT_DIPLOCATION("DSW1:4,5")    // OK
	PORT_DIPSETTING(    0x18, "60%" )
	PORT_DIPSETTING(    0x10, "70%" )
	PORT_DIPSETTING(    0x08, "80%" )
	PORT_DIPSETTING(    0x00, "90%" )
	PORT_DIPNAME( 0x20, 0x20, "Reel Speed" )            PORT_DIPLOCATION("DSW1:6")
	PORT_DIPSETTING(    0x20, "Normal" )
	PORT_DIPSETTING(    0x00, "Fast" )
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "DSW1:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "DSW1:8")

	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x03, 0x01, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2")  // OK
	PORT_DIPSETTING(    0x03, "60%" )
	PORT_DIPSETTING(    0x02, "70%" )
	PORT_DIPSETTING(    0x01, "80%" )
	PORT_DIPSETTING(    0x00, "90%" )
	PORT_DIPNAME( 0x04, 0x04, "Double Up Game" )        PORT_DIPLOCATION("DSW2:3")    // OK, use stop buttons to play
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x04, DEF_STR( On ) )
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "DSW2:4")
	PORT_DIPUNKNOWN_DIPLOC(0x10, 0x10, "DSW2:5")
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "DSW2:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "DSW2:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "DSW2:8")

	PORT_MODIFY("DSW3")
	PORT_DIPUNKNOWN_DIPLOC(0x01, 0x01, "DSW3:1")
	PORT_DIPUNKNOWN_DIPLOC(0x02, 0x02, "DSW3:2")
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "DSW3:3")
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "DSW3:4")
	PORT_DIPUNKNOWN_DIPLOC(0x10, 0x10, "DSW3:5")
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "DSW3:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "DSW3:7")
	PORT_DIPNAME( 0x80, 0x80, "Minimum Bet" )         PORT_DIPLOCATION("DSW3:8")       // conditional to DSW1-1 max bet
	PORT_DIPSETTING(    0x80, "16" )    PORT_CONDITION("DSW1", 0x01, NOTEQUALS, 0x00)  // for max 64
	PORT_DIPSETTING(    0x00, "32" )    PORT_CONDITION("DSW1", 0x01, NOTEQUALS, 0x00)  // for max 64
	PORT_DIPSETTING(    0x80, "32" )    PORT_CONDITION("DSW1", 0x01, EQUALS, 0x00)     // for max 120
	PORT_DIPSETTING(    0x00, "40" )    PORT_CONDITION("DSW1", 0x01, EQUALS, 0x00)     // for max 120

	PORT_MODIFY("DSW4")
	PORT_DIPNAME( 0x03, 0x03, "Key In Rate" )       PORT_DIPLOCATION("DSW4:1,2")  // OK
	PORT_DIPSETTING(    0x03, "100" )
	PORT_DIPSETTING(    0x00, "500" )
	PORT_DIPSETTING(    0x02, "1000" )
	PORT_DIPSETTING(    0x01, "3000" )
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "DSW4:3")
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "DSW4:4")
	PORT_DIPUNKNOWN_DIPLOC(0x10, 0x10, "DSW4:5")
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "DSW4:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "DSW4:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "DSW4:8")
INPUT_PORTS_END


// TODO: everything
static INPUT_PORTS_START( superdrg )
	PORT_START("IN0")  // b800
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON6 ) PORT_CODE(KEYCODE_B) PORT_NAME("P1 - Big / Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON4 ) PORT_CODE(KEYCODE_C) PORT_NAME("P1 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON5 ) PORT_CODE(KEYCODE_V) PORT_NAME("P1 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON1 ) PORT_CODE(KEYCODE_Z) PORT_NAME("P1 - Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON3 ) PORT_CODE(KEYCODE_N) PORT_NAME("P1 - Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON2 ) PORT_CODE(KEYCODE_X) PORT_NAME("P1 - Start")

	PORT_START("IN1")  // b801
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON12 ) PORT_CODE(KEYCODE_G) PORT_NAME("P2 - Big / Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON10 ) PORT_CODE(KEYCODE_D) PORT_NAME("P2 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON11 ) PORT_CODE(KEYCODE_F) PORT_NAME("P2 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON13 ) PORT_CODE(KEYCODE_A) PORT_NAME("P2 - Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON15 ) PORT_CODE(KEYCODE_H) PORT_NAME("P2 - Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON14 ) PORT_CODE(KEYCODE_S) PORT_NAME("P2 - Start")

	PORT_START("IN2")  // b802
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN3")  // b810
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME("Coin B")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_COIN4 ) PORT_IMPULSE(2) PORT_NAME("Coin D")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN3 ) PORT_IMPULSE(2) PORT_NAME("Coin C")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2) PORT_NAME("Coin A")

	PORT_START("IN4")  // b811
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT ) PORT_NAME("Key Out / Attendant")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_8_PAD) PORT_NAME("Hopper")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")

	PORT_START("DSW1")
	PORT_DIPUNKNOWN_DIPLOC(0x01, 0x01, "DSW1:1")
	PORT_DIPUNKNOWN_DIPLOC(0x02, 0x02, "DSW1:2")
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "DSW1:3")
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "DSW1:4")
	PORT_DIPNAME( 0x10, 0x10, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")  // ok
	PORT_DIPSETTING(    0x10, "80%" )
	PORT_DIPSETTING(    0x00, "90%" )
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "DSW1:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "DSW1:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "DSW1:8")

	PORT_START("DSW2")
	PORT_DIPUNKNOWN_DIPLOC(0x01, 0x01, "DSW2:1")
	PORT_DIPUNKNOWN_DIPLOC(0x02, 0x02, "DSW2:2")
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "DSW2:3")
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "DSW2:4")
	PORT_DIPUNKNOWN_DIPLOC(0x10, 0x10, "DSW2:5")
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "DSW2:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "DSW2:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "DSW2:8")

	PORT_START("DSW3")
	PORT_DIPUNKNOWN_DIPLOC(0x01, 0x01, "DSW3:1")
	PORT_DIPUNKNOWN_DIPLOC(0x02, 0x02, "DSW3:2")
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "DSW3:3")
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "DSW3:4")
	PORT_DIPUNKNOWN_DIPLOC(0x10, 0x10, "DSW3:5")
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "DSW3:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "DSW3:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "DSW3:8")

	PORT_START("DSW4")
	PORT_DIPUNKNOWN_DIPLOC(0x01, 0x01, "DSW4:1")
	PORT_DIPUNKNOWN_DIPLOC(0x02, 0x02, "DSW4:2")
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "DSW4:3")
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "DSW4:4")
	PORT_DIPUNKNOWN_DIPLOC(0x10, 0x10, "DSW4:5")
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "DSW4:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "DSW4:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "DSW4:8")

	PORT_START("DSW5")
	PORT_DIPUNKNOWN_DIPLOC(0x01, 0x01, "DSW5:1")
	PORT_DIPUNKNOWN_DIPLOC(0x02, 0x02, "DSW5:2")
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "DSW5:3")
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "DSW5:4")
	PORT_DIPUNKNOWN_DIPLOC(0x10, 0x10, "DSW5:5")
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "DSW5:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "DSW5:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "DSW5:8")
INPUT_PORTS_END

static INPUT_PORTS_START( nd8lines )  // TODO: need to be done once palette is figured out and effects can be verified
	PORT_START("IN0")  // b800
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_START1 )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_BUTTON1 ) PORT_NAME("Odds table")  // Only works with coins inserted
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_GAMBLE_BET )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN1")  // b801
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN2")  // b802
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN3")  // b810
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT ) PORT_NAME("Key Out / Attendant")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings / Test Mode") PORT_TOGGLE
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN ) PORT_IMPULSE(2)  // should be coins, PORT_IMPULSE needed or the game laments 'coin jam'
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN ) PORT_IMPULSE(2)  // should be coins, PORT_IMPULSE needed or the game laments 'coin jam'
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN ) PORT_IMPULSE(2)  // should be coins,  PORT_IMPULSE needed or the game laments 'coin jam'

	PORT_START("DSW1")
	PORT_DIPUNKNOWN_DIPLOC(0x01, 0x01, "DSW1:1")
	PORT_DIPUNKNOWN_DIPLOC(0x02, 0x02, "DSW1:2")
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "DSW1:3")
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "DSW1:4")
	PORT_DIPNAME( 0x10, 0x10, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")  // ok
	PORT_DIPSETTING(    0x10, "80%" )
	PORT_DIPSETTING(    0x00, "90%" )
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "DSW1:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "DSW1:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "DSW1:8")

	PORT_START("DSW2")
	PORT_DIPUNKNOWN_DIPLOC(0x01, 0x01, "DSW2:1")
	PORT_DIPUNKNOWN_DIPLOC(0x02, 0x02, "DSW2:2")
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "DSW2:3")
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "DSW2:4")
	PORT_DIPUNKNOWN_DIPLOC(0x10, 0x10, "DSW2:5")
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "DSW2:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "DSW2:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "DSW2:8")

	PORT_START("DSW3")
	PORT_DIPUNKNOWN_DIPLOC(0x01, 0x01, "DSW3:1")
	PORT_DIPUNKNOWN_DIPLOC(0x02, 0x02, "DSW3:2")
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "DSW3:3")
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "DSW3:4")
	PORT_DIPUNKNOWN_DIPLOC(0x10, 0x10, "DSW3:5")
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "DSW3:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "DSW3:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "DSW3:8")

	PORT_START("DSW4")
	PORT_DIPUNKNOWN_DIPLOC(0x01, 0x01, "DSW4:1")
	PORT_DIPUNKNOWN_DIPLOC(0x02, 0x02, "DSW4:2")
	PORT_DIPUNKNOWN_DIPLOC(0x04, 0x04, "DSW4:3")
	PORT_DIPUNKNOWN_DIPLOC(0x08, 0x08, "DSW4:4")
	PORT_DIPUNKNOWN_DIPLOC(0x10, 0x10, "DSW4:5")
	PORT_DIPUNKNOWN_DIPLOC(0x20, 0x20, "DSW4:6")
	PORT_DIPUNKNOWN_DIPLOC(0x40, 0x40, "DSW4:7")
	PORT_DIPUNKNOWN_DIPLOC(0x80, 0x80, "DSW4:8")
INPUT_PORTS_END

static INPUT_PORTS_START( ns8linwa )
	PORT_START("IN0")  // b800
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON6 ) PORT_CODE(KEYCODE_B) PORT_NAME("P1 - Big / Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON4 ) PORT_CODE(KEYCODE_C) PORT_NAME("P1 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON5 ) PORT_CODE(KEYCODE_V) PORT_NAME("P1 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON1 ) PORT_CODE(KEYCODE_Z) PORT_NAME("P1 - Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON3 ) PORT_CODE(KEYCODE_N) PORT_NAME("P1 - Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON2 ) PORT_CODE(KEYCODE_X) PORT_NAME("P1 - Start")

	PORT_START("IN1")  // b801 - P2 Controls... Not set
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN2")  // b802
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN3")  // b810 - Money in
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME("Coin B");
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_COIN4 ) PORT_IMPULSE(2) PORT_NAME("Coin D");
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN3 ) PORT_IMPULSE(2) PORT_NAME("Coin C");
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2) PORT_NAME("Coin A")

	PORT_START("IN4")  // b811 - Service controls
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_CUSTOM ) PORT_READ_LINE_DEVICE_MEMBER("hopper", FUNC(ticket_dispenser_device::line_r))
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_UNKNOWN)
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT ) PORT_NAME("Key Out / Attendant")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_8_PAD) PORT_NAME("Hopper")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW1:1")  // not checked
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, "Hopper Coin Switch" )        PORT_DIPLOCATION("DSW1:2")  // not checked
	PORT_DIPSETTING(    0x02, "Active Low" )
	PORT_DIPSETTING(    0x00, "Active High" )
	PORT_DIPNAME( 0x04, 0x04, "Payout Mode" )               PORT_DIPLOCATION("DSW1:3")  // not checked
	PORT_DIPSETTING(    0x04, "Payout Switch" )
	PORT_DIPSETTING(    0x00, "Automatic" )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW1:4")  // not checked
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x30, 0x30, "Double-Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5,6")  // OK
	PORT_DIPSETTING(    0x00, "60%" )  // OK
	PORT_DIPSETTING(    0x10, "65%" )  // OK
	PORT_DIPSETTING(    0x20, "70%" )  // OK
	PORT_DIPSETTING(    0x30, "75%" )  // OK
	PORT_DIPNAME( 0xc0, 0x00, "Special Odds" )              PORT_DIPLOCATION("DSW1:7,8")  // not checked
	PORT_DIPSETTING(    0xc0, "None" )
	PORT_DIPSETTING(    0xb0, "Limited to x300 (x1000)" )
	PORT_DIPSETTING(    0x40, "Limited to x500 (x5000)" )
	PORT_DIPSETTING(    0x00, "Limited to x1000 (x10000)" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x03, 0x01, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:1,2")  // OK
	PORT_DIPSETTING(    0x03, "58%" )  // OK
	PORT_DIPSETTING(    0x02, "62%" )  // OK
	PORT_DIPSETTING(    0x01, "66%" )  // OK
	PORT_DIPSETTING(    0x00, "70%" )  // OK
	PORT_DIPNAME( 0x04, 0x04, "Double Up Game" )        PORT_DIPLOCATION("DSW2:3")  // not checked
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x04, DEF_STR( On ) )
	PORT_DIPNAME( 0x18, 0x00, "Hopper Limit" )          PORT_DIPLOCATION("DSW2:4,5")  // not checked
	PORT_DIPSETTING(    0x18, "300" )
	PORT_DIPSETTING(    0x10, "500" )
	PORT_DIPSETTING(    0x08, "1000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x20, 0x20, "Over 100 Bet Sound" )    PORT_DIPLOCATION("DSW2:6")  // not checked
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, "Odds Table" )            PORT_DIPLOCATION("DSW2:7")  // not checked
	PORT_DIPSETTING(    0x40, "A - Low" )
	PORT_DIPSETTING(    0x00, "B - High" )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW2:8")  // not checked
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x0f, 0x07, "Coin D Rate" )           PORT_DIPLOCATION("DSW3:1,2,3,4")  // not checked
	PORT_DIPSETTING(    0x0f, DEF_STR( 10C_1C ) )
	PORT_DIPSETTING(    0x01, DEF_STR( 5C_1C ) )
	PORT_DIPSETTING(    0x02, DEF_STR( 5C_2C ) )
	PORT_DIPSETTING(    0x03, DEF_STR( 4C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 3C_1C ) )
	PORT_DIPSETTING(    0x05, DEF_STR( 2C_1C ) )
	PORT_DIPSETTING(    0x06, DEF_STR( 2C_3C ) )
	PORT_DIPSETTING(    0x07, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x09, DEF_STR( 1C_3C ) )
	PORT_DIPSETTING(    0x0a, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x0b, DEF_STR( 1C_10C ) )
	PORT_DIPNAME( 0x70, 0x60, "Coin C Rate" )       PORT_DIPLOCATION("DSW3:5,6,7")  // not checked
	PORT_DIPSETTING(    0x70, DEF_STR( 10C_1C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 9C_1C ) )
	PORT_DIPSETTING(    0x20, DEF_STR( 6C_1C ) )
	PORT_DIPSETTING(    0x30, DEF_STR( 5C_1C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 3C_1C ) )
	PORT_DIPSETTING(    0x50, DEF_STR( 2C_1C ) )
	PORT_DIPSETTING(    0x60, DEF_STR( 1C_1C ) )
	PORT_DIPNAME( 0x80, 0x80, "4th Coin" )          PORT_DIPLOCATION("DSW3:8")  // not checked
	PORT_DIPSETTING(    0x80, "As Coin A" )
	PORT_DIPSETTING(    0x00, "As Hopper Line" )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x07, 0x03, "Key In Rate" )       PORT_DIPLOCATION("DSW4:1,2,3")  // OK
	PORT_DIPSETTING(    0x00, "1 Pulse / 5 Credits" )  // OK
	PORT_DIPSETTING(    0x01, "1 Pulse / 10 Credits" )  // OK
	PORT_DIPSETTING(    0x02, "1 Pulse / 20 Credits" )  // OK
	PORT_DIPSETTING(    0x03, "1 Pulse / 100 Credits" )  // OK
	PORT_DIPSETTING(    0x04, "1 Pulse / 110 Credits" )  // OK
	PORT_DIPSETTING(    0x05, "1 Pulse / 120 Credits" )  // OK
	PORT_DIPSETTING(    0x06, "1 Pulse / 130 Credits" )  // OK
	PORT_DIPSETTING(    0x07, "1 Pulse / 500 Credits" )  // OK
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW4:4")  // not checked
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x30, 0x00, "Coin A Rate" )       PORT_DIPLOCATION("DSW4:5,6")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )  // OK
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_2C ) )  // OK
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_5C ) )  // OK
	PORT_DIPSETTING(    0x30, DEF_STR( 1C_10C ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW4:7")  // not checked
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW4:8")  // not checked
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END


static INPUT_PORTS_START( luckylad )  // CHECK & FIX ME
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET ) PORT_NAME("Play (Bet)")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON1 ) PORT_NAME("Odds table")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 )

	PORT_START("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_POKER_HOLD3 ) PORT_NAME("Keep 3")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_POKER_HOLD2 ) PORT_NAME("Keep 2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_POKER_HOLD1 ) PORT_NAME("Keep 1")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN3")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_POKER_HOLD5 ) PORT_NAME("Keep 5")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_POKER_HOLD4 ) PORT_NAME("Keep 4")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2) PORT_NAME("Coin A")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME("Coin B")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_COIN3 ) PORT_IMPULSE(2) PORT_NAME("Coin C")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN4 ) PORT_IMPULSE(2) PORT_NAME("Coin D")

	PORT_START("IN4")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_CUSTOM ) PORT_READ_LINE_DEVICE_MEMBER("hopper", FUNC(ticket_dispenser_device::line_r))
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_UNKNOWN )	
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT ) PORT_NAME("Key Out / Attendant")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_8_PAD) PORT_NAME("Hopper")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Demo_Sounds ) )
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END

static INPUT_PORTS_START( ladylinr )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2)
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN3 ) PORT_IMPULSE(2)
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2)

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_H) PORT_NAME("Hopper Muenze (Hopper Coin")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_J) PORT_NAME("Hopper Voll (Hopper Fill)")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_PAYOUT ) PORT_NAME("Abschreib (Payout)")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Aufsteller (Supervisor)")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Buchhaltung (Bookkeeping)")

	PORT_START("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_SLOT_STOP3 ) PORT_NAME("Hoch (High) / Stop 3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_GAMBLE_D_UP ) PORT_NAME("Gamble (D-UP)")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_TAKE ) PORT_NAME("Nehmen (Take)")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET ) PORT_NAME("Setzen (Bet)")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP1 ) PORT_NAME("Tief (Low) / Stop 1 / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_SLOT_STOP2 ) PORT_NAME("Start / Stop 2")

	PORT_START("DSW1")
	PORT_DIPNAME( 0x03, 0x03, "Remote Credits" )    PORT_DIPLOCATION("DSW1:1,2")    // OK
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x01, "10" )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x03, "100" )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW1:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW1:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Coin_A ) )   PORT_DIPLOCATION("DSW1:5")  // OK
	PORT_DIPSETTING(    0x00, "20 credits" )
	PORT_DIPSETTING(    0x10, "50 Credits" )
	PORT_DIPNAME( 0x20, 0x20, "Coin B & C" )        PORT_DIPLOCATION("DSW1:6")  // OK
	PORT_DIPSETTING(    0x00, "10 credits" )
	PORT_DIPSETTING(    0x20, "20 credits" )
	PORT_DIPNAME( 0x40, 0x40, "Reels Speed" )       PORT_DIPLOCATION("DSW1:7")  // OK
	PORT_DIPSETTING(    0x40, DEF_STR( Normal ) )
	PORT_DIPSETTING(    0x00, DEF_STR( High ) )
	PORT_DIPNAME( 0x80, 0x00, "Input Test Mode" )   PORT_DIPLOCATION("DSW1:8")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )

/*  There are 2 extra DSW banks...
    both are tied to a daughterboard, maybe hooked to a device.
    they are not related to the original hardware, and are not
    listed in the Input Test Mode.
*/
INPUT_PORTS_END

static INPUT_PORTS_START( kkotnoli )
	PORT_START("IN0")   // b800
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON6 ) PORT_CODE(KEYCODE_B) PORT_NAME("P1 - Big / Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON4 ) PORT_CODE(KEYCODE_C) PORT_NAME("P1 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON5 ) PORT_CODE(KEYCODE_V) PORT_NAME("P1 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON1 ) PORT_CODE(KEYCODE_Z) PORT_NAME("P1 - Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON3 ) PORT_CODE(KEYCODE_N) PORT_NAME("P1 - Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON2 ) PORT_CODE(KEYCODE_X) PORT_NAME("P1 - Start")

	PORT_START("IN1")   // b801
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON12 ) PORT_CODE(KEYCODE_G) PORT_NAME("P2 - Big / Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON10 ) PORT_CODE(KEYCODE_D) PORT_NAME("P2 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON11 ) PORT_CODE(KEYCODE_F) PORT_NAME("P2 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON13 ) PORT_CODE(KEYCODE_A) PORT_NAME("P2 - Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON15 ) PORT_CODE(KEYCODE_H) PORT_NAME("P2 - Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON14 ) PORT_CODE(KEYCODE_S) PORT_NAME("P2 - Start")

	PORT_START("IN2")   // b802
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN3")   // b810
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2)  // Coin1 1 coin/1 credit
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2)  // Coin2 10 coins/1 credit
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN3 ) PORT_IMPULSE(2)  // Coin3 2 coins/1 credit
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN4 ) PORT_IMPULSE(2)  // Coin4 1 coin/10 credits

	PORT_START("IN4")   // b811
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("DSW1")  // dips 1-7 appear to do nothing
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW1:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW1:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW1:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW1:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW1:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW1:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x00, "Double Up Game Type" )   PORT_DIPLOCATION("DSW1:8")
	PORT_DIPSETTING(    0x80, "Reels (automatic)" )  // Fix me - reel graphics do not show in game
	PORT_DIPSETTING(    0x00, "Flowers (Big/Small)" )
INPUT_PORTS_END

static INPUT_PORTS_START( bingowng )
	PORT_START("IN0")  // b800
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON6 ) PORT_CODE(KEYCODE_B) PORT_NAME("P1 - Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON4 ) PORT_CODE(KEYCODE_C) PORT_NAME("P1 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON5 ) PORT_CODE(KEYCODE_V) PORT_NAME("P1 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON1 ) PORT_CODE(KEYCODE_Z) PORT_NAME("P1 - Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON3 ) PORT_CODE(KEYCODE_N) PORT_NAME("P1 - Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON2 ) PORT_CODE(KEYCODE_X) PORT_NAME("P1 - Start")

	PORT_START("IN1")  // b801
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON12 ) PORT_CODE(KEYCODE_G) PORT_NAME("P2 - Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON10 ) PORT_CODE(KEYCODE_D) PORT_NAME("P2 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON11 ) PORT_CODE(KEYCODE_F) PORT_NAME("P2 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON13 ) PORT_CODE(KEYCODE_A) PORT_NAME("P2 - Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON15 ) PORT_CODE(KEYCODE_H) PORT_NAME("P2 - Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON14 ) PORT_CODE(KEYCODE_S) PORT_NAME("P2 - Start")

	PORT_START("IN2")  // b802
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN3")  // b810
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_COIN4 ) PORT_IMPULSE(2) PORT_NAME( "Coin D" )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN3 ) PORT_IMPULSE(2) PORT_NAME( "Coin C" )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME( "Coin B" )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2) PORT_NAME( "Coin A" )

	PORT_START("IN4")  // b811
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_CUSTOM ) PORT_READ_LINE_DEVICE_MEMBER("hopper", FUNC(ticket_dispenser_device::line_r))
	PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_UNKNOWN)
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT ) PORT_NAME("Key Out / Attendant")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_8_PAD) PORT_NAME("Hopper")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, "Cabinet Style" )             PORT_DIPLOCATION("DSW1:1")   // not checked
	PORT_DIPSETTING(    0x00, "Cocktail" )
	PORT_DIPSETTING(    0x01, "Upright" )
	PORT_DIPNAME( 0x02, 0x02, "Hopper Coin Switch")         PORT_DIPLOCATION("DSW1:2")   // not checked
	PORT_DIPSETTING(    0x00, "Active Low" )
	PORT_DIPSETTING(    0x02, "Active High" )
	PORT_DIPNAME( 0x04, 0x04, "Payout Type" )               PORT_DIPLOCATION("DSW1:3")   // not checked
	PORT_DIPSETTING(    0x04, "Take Button" )
	PORT_DIPSETTING(    0x00, "Automatic" )
	PORT_DIPNAME( 0x18, 0x18, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:4,5")  // OK
	PORT_DIPSETTING(    0x18, "75%" )
	PORT_DIPSETTING(    0x10, "80%" )
	PORT_DIPSETTING(    0x08, "85%" )
	PORT_DIPSETTING(    0x00, "90%" )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW1:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW1:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW1:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
/*  On a W-4 PCB these are used as: "Special Odds-Prohibition Of Winning...(Odds B)" - see DSW2-7
    PORT_DIPNAME( 0x80, 0x00, "Special Odds" )              PORT_DIPLOCATION("DSW1:7,8")
    PORT_DIPSETTING(    0x00, "None" )
    PORT_DIPSETTING(    0x40, "x300 (x1000)" )
    PORT_DIPSETTING(    0x80, "x500 (x5000" )
    PORT_DIPSETTING(    0xc0, "x1000 (x10000)
*/

	PORT_START("DSW2")
	PORT_DIPNAME( 0x03, 0x02, "Main Game Rate" )        PORT_DIPLOCATION("DSW2:1,2")  // OK
	PORT_DIPSETTING(    0x03, "Very Easy" )
	PORT_DIPSETTING(    0x02, "Easy" )
	PORT_DIPSETTING(    0x01, "Hard" )
	PORT_DIPSETTING(    0x00, "Very Hard" )
	PORT_DIPNAME( 0x04, 0x00, "Double Up Game" )        PORT_DIPLOCATION("DSW2:3")    // OK
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x04, DEF_STR( On ) )
	PORT_DIPNAME( 0x18, 0x18, "Hopper Limit" )          PORT_DIPLOCATION("DSW2:4,5")  // not checked
	PORT_DIPSETTING(    0x18, "300" )
	PORT_DIPSETTING(    0x10, "1000" )
	PORT_DIPSETTING(    0x08, "500" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x20, 0x20, "Sound for 100+ Bet" )    PORT_DIPLOCATION("DSW2:6")    // not checked
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW2:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW2:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
/*  On a W-4 PCB these are used as:
    PORT_DIPNAME( 0x40, 0x40, "Odds" )                  PORT_DIPLOCATION("DSW2:7")
    PORT_DIPSETTING(    0x40, "Type A" )
    PORT_DIPSETTING(    0x00, "Type B" )
    PORT_DIPNAME( 0x80, 0x80, "Type Of W-Up Game" )     PORT_DIPLOCATION("DSW2:8")
    PORT_DIPSETTING(    0x80, "Slots" )
    PORT_DIPSETTING(    0x00, "Big/Small Card" )
*/

	// On a W-4 PCB DSW3 & DSW4 are reversed and all dips on DSW4 are set to off!
	PORT_START("DSW3")
	PORT_DIPNAME( 0x0f, 0x07, "Coin D Rate" )         PORT_DIPLOCATION("DSW3:1,2,3,4")  // OK - other values are all 10C/1C
	PORT_DIPSETTING(    0x0f, DEF_STR( 10C_1C ) )
	PORT_DIPSETTING(    0x01, DEF_STR( 5C_1C ) )
	PORT_DIPSETTING(    0x02, DEF_STR( 5C_2C ) )
	PORT_DIPSETTING(    0x03, DEF_STR( 4C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 3C_1C ) )
	PORT_DIPSETTING(    0x05, DEF_STR( 2C_1C ) )
	PORT_DIPSETTING(    0x06, DEF_STR( 2C_3C ) )
	PORT_DIPSETTING(    0x07, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x09, DEF_STR( 1C_3C ) )
	PORT_DIPNAME( 0x70, 0x60, "Coin C Rate" )         PORT_DIPLOCATION("DSW3:5,6,7")    // OK - other values are 10C/1C
	PORT_DIPSETTING(    0x70, DEF_STR( 10C_1C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 9C_1C ) )
	PORT_DIPSETTING(    0x20, DEF_STR( 6C_1C ) )
	PORT_DIPSETTING(    0x30, DEF_STR( 5C_1C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 3C_1C ) )
	PORT_DIPSETTING(    0x50, DEF_STR( 2C_1C ) )
	PORT_DIPSETTING(    0x60, DEF_STR( 1C_1C ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW3:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW4:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW4:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW4:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW4:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW4:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW4:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW4:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW4:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END

static INPUT_PORTS_START( bingownga )
	PORT_INCLUDE( bingowng )

	PORT_MODIFY("DSW4")
	PORT_DIPNAME( 0x07, 0x07, "Coin B Rate" )         PORT_DIPLOCATION("DSW4:1,2,3")  // OK - all other values are 2C/1C
	PORT_DIPSETTING(    0x07, DEF_STR( 2C_1C ) )
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_3C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_5C ) )
	PORT_DIPNAME( 0x38, 0x38, "Coin A Rate" )         PORT_DIPLOCATION("DSW4:4,5,6")  // OK - all other values are 1C/1C, manual says 0x30 = 1C/100C but it doesn't work
	PORT_DIPSETTING(    0x38, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_4C ) )
	PORT_DIPSETTING(    0x18, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_6C ) )
	PORT_DIPSETTING(    0x28, DEF_STR( 1C_10C ) )
INPUT_PORTS_END

static INPUT_PORTS_START( mbstar )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_1) PORT_NAME("IN0-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_2) PORT_NAME("Increment top's 'S' (bet?)")  // Increment top's 'S' (looks like bet)
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_3) PORT_NAME("IN0-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_4) PORT_NAME("IN0-4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_5) PORT_NAME("Collect")  // Collect. Also used to blank the BK.
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_6) PORT_NAME("IN0-6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_7) PORT_NAME("Bookkeeping: Down")  // BK: down.
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_8) PORT_NAME("Bookkeeping: Set/Enter - Start")  // BK: enter. (start?)

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_Q) PORT_NAME("IN1-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_W) PORT_NAME("IN1-2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_E) PORT_NAME("IN1-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_R) PORT_NAME("IN1-4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_T) PORT_NAME("IN1-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_Y) PORT_NAME("IN1-6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_U) PORT_NAME("IN1-7")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_I) PORT_NAME("IN1-8")

	PORT_START("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_A) PORT_NAME("IN2-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_S) PORT_NAME("IN2-2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_D) PORT_NAME("IN2-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_F) PORT_NAME("IN2-4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_G) PORT_NAME("IN2-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_H) PORT_NAME("IN2-6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_J) PORT_NAME("IN2-7")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_K) PORT_NAME("IN2-8")

	PORT_START("IN3")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_Z) PORT_NAME("IN3-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_X) PORT_NAME("IN3-2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_C) PORT_NAME("IN3-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_V) PORT_NAME("Coin 1") PORT_IMPULSE(2)    // coin 1
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_B) PORT_NAME("Coin 2") PORT_IMPULSE(2)    // coin 2
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_N) PORT_NAME("Note")      // note acceptor
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_M) PORT_NAME("Remote")    // remote credits
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_L) PORT_NAME("Coin 3 (tokens)")    // coin 3 (tokens)

	PORT_START("IN4")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_1_PAD) PORT_NAME("IN4-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_2_PAD) PORT_NAME("Operator Bookkeeping")  // operator bookkeeping
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_3_PAD) PORT_NAME("IN4-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_4_PAD) PORT_NAME("IN4-4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_5_PAD) PORT_NAME("Payout")  // payout?
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_6_PAD) PORT_NAME("IN4-6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_7_PAD) PORT_NAME("IN4-7")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_8_PAD) PORT_NAME("Supervisor Bookkeeping")  // supervisor bookkeeping

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, "DSW1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x01, 0x01, "DSW2")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x00, DEF_STR( Unknown ) )  // enter in a different mode, and no attract.
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )  // seems to accellerate the different mode.
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x01, 0x01, "DSW3")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, "DSW4")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END


static INPUT_PORTS_START( magodds )
	PORT_START("IN0")  // b800
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON6 ) PORT_CODE(KEYCODE_X) PORT_NAME("P1 - Big / Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON4 ) PORT_CODE(KEYCODE_B) PORT_NAME("P1 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON5 ) PORT_CODE(KEYCODE_Z) PORT_NAME("P1 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON1 ) PORT_CODE(KEYCODE_V) PORT_NAME("P1 - Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON3 ) PORT_CODE(KEYCODE_C) PORT_NAME("P1 - Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON2 ) PORT_CODE(KEYCODE_N) PORT_NAME("P1 - Start")

	PORT_START("IN1")  // b801
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON12 ) PORT_CODE(KEYCODE_S) PORT_NAME("P2 - Big / Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON10 ) PORT_CODE(KEYCODE_G) PORT_NAME("P2 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON11 ) PORT_CODE(KEYCODE_A) PORT_NAME("P2 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON13 ) PORT_CODE(KEYCODE_F) PORT_NAME("P2 - Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON15 ) PORT_CODE(KEYCODE_D) PORT_NAME("P2 - Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON14 ) PORT_CODE(KEYCODE_H) PORT_NAME("P2 - Start")

	PORT_START("IN2")  // b802
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN3")  // b810
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_COIN3 ) PORT_IMPULSE(2) PORT_NAME("Coin D")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME("Coin C")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2) PORT_NAME("Coin A")

	PORT_START("IN4")  // b811
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT ) PORT_NAME("Key Out / Attendant")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_8_PAD) PORT_NAME("Hopper")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")

	PORT_START("DSW1")
	PORT_DIPNAME( 0x07, 0x00, "Coin A Rate" )       PORT_DIPLOCATION("DSW1:1,2,3")  // OK
	PORT_DIPSETTING(    0x05, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x06, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x07, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x02, "1 Coin/30 Credits" )
	PORT_DIPSETTING(    0x01, "1 Coin/40 Credits" )
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_50C ) )
	PORT_DIPNAME( 0x38, 0x00, "Key In Rate" )       PORT_DIPLOCATION("DSW1:4,5,6")  // OK - aka Coin B
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x18, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x28, DEF_STR( 1C_25C ) )
	PORT_DIPSETTING(    0x30, "1 Coin/40 Credits" )
	PORT_DIPSETTING(    0x38, DEF_STR( 1C_50C ) )
	PORT_DIPSETTING(    0x08, "1 Coin/60 Credits" )
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_100C ) )
	PORT_DIPNAME( 0xc0, 0x00, "Coin C Rate" )       PORT_DIPLOCATION("DSW1:7,8")    // OK
	PORT_DIPSETTING(    0x40, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x80, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0xc0, DEF_STR( 1C_25C ) )
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_50C ) )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x07, 0x04, "Main Game Level" )   PORT_DIPLOCATION("DSW2:1,2,3")
	PORT_DIPSETTING(    0x00, "+4 - 56%" )
	PORT_DIPSETTING(    0x01, "+3 - 60%" )
	PORT_DIPSETTING(    0x02, "+2 - 64%" )
	PORT_DIPSETTING(    0x03, "+1 - 68%" )
	PORT_DIPSETTING(    0x04, "0 - 72%" )
	PORT_DIPSETTING(    0x05, "-1 - 76%" )
	PORT_DIPSETTING(    0x06, "-2 - 80%" )
	PORT_DIPSETTING(    0x07, "-3 - 84%" )
	PORT_DIPNAME( 0x08, 0x08, "Nudity / Strip" )    PORT_DIPLOCATION("DSW2:4")   // OK
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW2:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW2:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW2:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW2:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW3")  // marked as DSW4
	PORT_DIPNAME( 0x03, 0x03, "Coin In Limit" )     PORT_DIPLOCATION("DSW4:1,2")  // OK
	PORT_DIPSETTING(    0x00, "1000" )
	PORT_DIPSETTING(    0x01, "2000" )
	PORT_DIPSETTING(    0x02, "3000" )
	PORT_DIPSETTING(    0x03, "Unlimited" )
	PORT_DIPNAME( 0x04, 0x00, "Hopper Switch" )     PORT_DIPLOCATION("DSW4:3")  // not checked
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW4:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0xf0, 0xf0, "Coin D Rate" )       PORT_DIPLOCATION("DSW4:5,6,7,8")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 10C_1C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 5C_1C ) )
	PORT_DIPSETTING(    0x20, DEF_STR( 5C_2C ) )
	PORT_DIPSETTING(    0x30, DEF_STR( 4C_1C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 4C_3C ) )
	PORT_DIPSETTING(    0x60, DEF_STR( 3C_1C ) )
	PORT_DIPSETTING(    0x50, DEF_STR( 3C_2C ) )
	PORT_DIPSETTING(    0x70, DEF_STR( 2C_1C ) )
	PORT_DIPSETTING(    0x80, DEF_STR( 2C_3C ) )
	PORT_DIPSETTING(    0x90, DEF_STR( 2C_5C ) )
	PORT_DIPSETTING(    0xf0, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0xe0, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0xd0, DEF_STR( 1C_3C ) )
	PORT_DIPSETTING(    0xc0, DEF_STR( 1C_4C ) )
	PORT_DIPSETTING(    0xb0, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0xa0, DEF_STR( 1C_10C ) )

	PORT_START("DSW4") // marked as DSW3
	PORT_DIPNAME( 0x03, 0x00, "Hopper Limit" )      PORT_DIPLOCATION("DSW3:1,2")  // not checked
	PORT_DIPSETTING(    0x03, "1000" )
	PORT_DIPSETTING(    0x02, "500" )
	PORT_DIPSETTING(    0x01, "300" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x0c, 0x0c, "Max Bet" )           PORT_DIPLOCATION("DSW3:3,4")  // OK
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x04, "16" )
	PORT_DIPSETTING(    0x08, "32" )
	PORT_DIPSETTING(    0x0c, "64" )
	PORT_DIPNAME( 0x70, 0x00, "Credit Limit" )      PORT_DIPLOCATION("DSW3:5,6,7")  // OK
	PORT_DIPSETTING(    0x70, "5000" )
	PORT_DIPSETTING(    0x60, "10000" )
	PORT_DIPSETTING(    0x50, "20000" )
	PORT_DIPSETTING(    0x40, "30000" )
	PORT_DIPSETTING(    0x30, "40000" )
	PORT_DIPSETTING(    0x20, "50000" )
	PORT_DIPSETTING(    0x10, "90000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW3:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END

static INPUT_PORTS_START( schery97 )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_SLOT_STOP_ALL ) PORT_NAME("Stop All / Big")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP1 ) PORT_NAME("Stop 1 / D-UP")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SLOT_STOP3 ) PORT_NAME("Stop 3 / Take / Select Card")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET ) PORT_NAME("Play (Bet)")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP2 ) PORT_NAME("Stop 2 / Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_E) PORT_NAME("Display Pts/Ticket")  // undocumented - works when credited
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME("Note In")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2)

	PORT_START("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT ) PORT_NAME("Key Out / Attendant")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")  // doesn't work in v352c4

	PORT_START("DSW1")
	PORT_DIPNAME( 0x07, 0x03, "Game Level (Difficulty)" )   PORT_DIPLOCATION("DSW1:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "Level 1 (Easiest)" )
	PORT_DIPSETTING(    0x06, "Level 2" )
	PORT_DIPSETTING(    0x05, "Level 3" )
	PORT_DIPSETTING(    0x04, "Level 4" )
	PORT_DIPSETTING(    0x03, "Level 5" )
	PORT_DIPSETTING(    0x02, "Level 6" )
	PORT_DIPSETTING(    0x01, "Level 7" )
	PORT_DIPSETTING(    0x00, "Level 8 (Hardest)" )
	PORT_DIPNAME( 0x38, 0x38, "Maximum Play" )              PORT_DIPLOCATION("DSW1:4,5,6")
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x08, "10" )
	PORT_DIPSETTING(    0x10, "24" )
	PORT_DIPSETTING(    0x18, "32" )
	PORT_DIPSETTING(    0x20, "40" )
	PORT_DIPSETTING(    0x28, "48" )
	PORT_DIPSETTING(    0x30, "64" )
	PORT_DIPSETTING(    0x38, "80" )
	PORT_DIPNAME( 0xc0, 0x80, "Minimum Play for Bonus" )    PORT_DIPLOCATION("DSW1:7,8")  // OK
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x40, "10" )
	PORT_DIPSETTING(    0x80, "16" )
	PORT_DIPSETTING(    0xc0, "24" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x01, 0x01, "Double Up Game" )            PORT_DIPLOCATION("DSW2:1")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x02, 0x02, "Skill Spinning" )            PORT_DIPLOCATION("DSW2:2")  // OK (listed as Non-Stop spinning in the manual)
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x1c, 0x10, "Coin In" )                   PORT_DIPLOCATION("DSW2:3,4,5")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_4C ) )
	PORT_DIPSETTING(    0x0c, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x14, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x18, DEF_STR( 1C_25C ) )
	PORT_DIPSETTING(    0x1c, DEF_STR( 1C_100C ) )
	PORT_DIPNAME( 0x60, 0x00, "Note In Value" )             PORT_DIPLOCATION("DSW2:6,7")  // OK
	PORT_DIPSETTING(    0x00, "100" )
	PORT_DIPSETTING(    0x20, "200" )
	PORT_DIPSETTING(    0x40, "500" )
	PORT_DIPSETTING(    0x60, "1000" )
	PORT_DIPNAME( 0x80, 0x00, "WARNING: Always Off" )       PORT_DIPLOCATION("DSW2:8")  // Listed that way in the manual
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x02, "Minimum Play to Start" )         PORT_DIPLOCATION("DSW3:1,2")  // OK
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x01, "8" )
	PORT_DIPSETTING(    0x02, "10" )  // 16 in the manual
	PORT_DIPSETTING(    0x03, "16" )  // 24 in the manual
	PORT_DIPNAME( 0x0c, 0x08, "Max Coin In & Note In Points" )   PORT_DIPLOCATION("DSW3:3,4")  // OK
	PORT_DIPSETTING(    0x00, "1000" )
	PORT_DIPSETTING(    0x04, "5000" )
	PORT_DIPSETTING(    0x08, "10000" )
	PORT_DIPSETTING(    0x0c, "90000" )
	PORT_DIPNAME( 0xf0, 0x00, "Clear / Ticket Unit" )           PORT_DIPLOCATION("DSW3:5,6,7,8")  // OK
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x10, "4" )
	PORT_DIPSETTING(    0x20, "5" )
	PORT_DIPSETTING(    0x30, "10" )
	PORT_DIPSETTING(    0x40, "15" )
	PORT_DIPSETTING(    0x50, "20" )
	PORT_DIPSETTING(    0x60, "25" )
	PORT_DIPSETTING(    0x70, "30" )
	PORT_DIPSETTING(    0x80, "40" )
	PORT_DIPSETTING(    0x90, "50" )
	PORT_DIPSETTING(    0xa0, "60" )
	PORT_DIPSETTING(    0xb0, "75" )
	PORT_DIPSETTING(    0xc0, "80" )
	PORT_DIPSETTING(    0xd0, "100" )
	PORT_DIPSETTING(    0xe0, "200" )
	PORT_DIPSETTING(    0xf0, "500" )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, "Check Account" )                         PORT_DIPLOCATION("DSW4:1")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x02, 0x00, "Show In Confirm Screen" )                PORT_DIPLOCATION("DSW4:2")  // OK
	PORT_DIPSETTING(    0x00, "Level of Difficulty" )   // percentage in the manual
	PORT_DIPSETTING(    0x02, "Percentage" )            // level of difficulty in the manual
	PORT_DIPNAME( 0x04, 0x00, "Initial Bonus Settings After Reset" )    PORT_DIPLOCATION("DSW4:3")  // OK (need a reset after change)
	PORT_DIPSETTING(    0x00, "Type 1" )
	PORT_DIPSETTING(    0x04, "Type 2" )
	PORT_DIPNAME( 0x08, 0x08, "Bonus Accumulation" )                    PORT_DIPLOCATION("DSW4:4")  // OK (need a reset after change)
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x10, 0x10, "Auto Ticket Dispense" )                  PORT_DIPLOCATION("DSW4:5")  // OK (need a reset after change)
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Yes ) )
	PORT_DIPNAME( 0xe0, 0xe0, "Ticket Dispense Mode" )                  PORT_DIPLOCATION("DSW4:6,7,8")  // OK
	PORT_DIPSETTING(    0xe0, "Continuous" )
	PORT_DIPSETTING(    0xc0, "Max 1 Ticket Per Game" )
	PORT_DIPSETTING(    0xa0, "Max 2 Ticket Per Game" )
	PORT_DIPSETTING(    0x80, "Max 3 Ticket Per Game" )
	PORT_DIPSETTING(    0x60, "Max 4 Ticket Per Game" )
	PORT_DIPSETTING(    0x40, "Max 5 Ticket Per Game" )
	PORT_DIPSETTING(    0x20, "Max 8 Ticket Per Game" )
	PORT_DIPSETTING(    0x00, "Max 10 Ticket Per Game" )

	PORT_START("DSW5")
	PORT_DIPNAME( 0x01, 0x00, DEF_STR( Unused ) )                                   PORT_DIPLOCATION("DSW5:1")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x01, DEF_STR( On ) )
	// DIP switches 2 to 5 work only for version 3.51 and above
	PORT_DIPNAME( 0x02, 0x00, "Limit Score of Each Game to Max 10x Bet or $5.00" )  PORT_DIPLOCATION("DSW5:2")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )       PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x02, DEF_STR( Yes ) )      PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, DEF_STR( Unused ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x02, DEF_STR( Unused ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPNAME( 0x04, 0x00, "Play Remaining Score when No Credit" )               PORT_DIPLOCATION("DSW5:3")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )       PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x04, DEF_STR( Yes ) )      PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, DEF_STR( Unused ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x04, DEF_STR( Unused ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPNAME( 0x08, 0x00, "Reset Remaining Score to Zero" )                     PORT_DIPLOCATION("DSW5:4")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )       PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x08, DEF_STR( Yes ) )      PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, DEF_STR( Unused ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x08, DEF_STR( Unused ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPNAME( 0x10, 0x00, "Ticket Dispense from Score" )                        PORT_DIPLOCATION("DSW5:5")  // OK
	PORT_DIPSETTING(    0x00, "Use TDDD" )          PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x10, "Use Interface" )     PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, DEF_STR( Unused ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x10, DEF_STR( Unused ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPNAME( 0x20, 0x20, "Reel Speed (ver 2.3)" )                              PORT_DIPLOCATION("DSW5:6")  // OK (turn the machine off/on after change)
	PORT_DIPSETTING(    0x20, "Slow" )
	PORT_DIPSETTING(    0x00, "Fast" )
	PORT_DIPNAME( 0x40, 0x00, "Talking (ver 2.1)" )                                 PORT_DIPLOCATION("DSW5:7")  // OK (turn the machine off/on after change)
	PORT_DIPSETTING(    0x40, "Very Little (only sounds)" )
	PORT_DIPSETTING(    0x00, "Full (sounds & speech)" )
	PORT_DIPNAME( 0x80, 0x00, "Count Game to Issue Ticket" )                        PORT_DIPLOCATION("DSW5:8")  // OK (turn the machine off/on after change)
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Yes ) )
INPUT_PORTS_END

static INPUT_PORTS_START( nfb96 )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_SLOT_STOP_ALL ) PORT_NAME("Stop All / Big")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP1 ) PORT_NAME("Stop 1 / D-UP")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SLOT_STOP3 ) PORT_NAME("Stop 3 / Take / Select Card")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET ) PORT_NAME("Play (Bet)")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP2 ) PORT_NAME("Stop 2 / Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_E) PORT_NAME("Display Pts/Ticket")  // undocumented - works when credited
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME("Note In")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2)

	PORT_START("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT ) PORT_NAME("Key Out / Attendant")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings / Confirm")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")

	PORT_START("DSW1")
	PORT_DIPNAME( 0x07, 0x03, "Game Level (Difficulty)" )   PORT_DIPLOCATION("DSW1:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "Level 1 (Easiest)" )
	PORT_DIPSETTING(    0x06, "Level 2" )
	PORT_DIPSETTING(    0x05, "Level 3" )
	PORT_DIPSETTING(    0x04, "Level 4" )
	PORT_DIPSETTING(    0x03, "Level 5" )
	PORT_DIPSETTING(    0x02, "Level 6" )
	PORT_DIPSETTING(    0x01, "Level 7" )
	PORT_DIPSETTING(    0x00, "Level 8 (Hardest)" )
	PORT_DIPNAME( 0x38, 0x38, "Maximum Play" )              PORT_DIPLOCATION("DSW1:4,5,6")  // OK
	PORT_DIPSETTING(    0x00, "10" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x08, "20" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x10, "30" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x18, "40" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x00, "8" )     PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x08, "16" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x10, "24" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x18, "32" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x20, "40" )
	PORT_DIPSETTING(    0x28, "48" )
	PORT_DIPSETTING(    0x30, "64" )
	PORT_DIPSETTING(    0x38, "80" )
	PORT_DIPNAME( 0xc0, 0x80, "Minimum Play for Bonus" )    PORT_DIPLOCATION("DSW1:7,8")    // OK
	PORT_DIPSETTING(    0x00, "10" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x40, "20" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x80, "30" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0xc0, "40" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x00, "8" )     PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x40, "16" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x80, "24" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0xc0, "32" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)

	PORT_START("DSW2")
	PORT_DIPNAME( 0x01, 0x01, "Double Up Game" )            PORT_DIPLOCATION("DSW2:1")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x02, 0x02, "Skill Spinning" )            PORT_DIPLOCATION("DSW2:2")  // OK (listed as Non-Stop spinning in the manual)
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x1c, 0x10, "Coin In" )                   PORT_DIPLOCATION("DSW2:3,4,5")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_4C ) )
	PORT_DIPSETTING(    0x0c, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x14, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x18, DEF_STR( 1C_25C ) )
	PORT_DIPSETTING(    0x1c, DEF_STR( 1C_100C ) )
	PORT_DIPNAME( 0x60, 0x00, "Note In Value" )             PORT_DIPLOCATION("DSW2:6,7")  // OK
	PORT_DIPSETTING(    0x00, "100" )
	PORT_DIPSETTING(    0x20, "200" )
	PORT_DIPSETTING(    0x40, "500" )
	PORT_DIPSETTING(    0x60, "1000" )
	PORT_DIPNAME( 0x80, 0x00, "WARNING: Always Off" )       PORT_DIPLOCATION("DSW2:8")  // Listed that way in the manual
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x02, "Minimum Play to Start" )         PORT_DIPLOCATION("DSW3:1,2")  // OK
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x01, "10" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x02, "20" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x03, "30" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x01, "8" )     PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x02, "16" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x03, "24" )    PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPNAME( 0x0c, 0x08, "Max Coin In & Note In Points" )  PORT_DIPLOCATION("DSW3:3,4")  // OK
	PORT_DIPSETTING(    0x00, "1000" )
	PORT_DIPSETTING(    0x04, "5000" )
	PORT_DIPSETTING(    0x08, "10000" )
	PORT_DIPSETTING(    0x0c, "90000" )
	PORT_DIPNAME( 0xf0, 0x00, "Clear / Ticket Unit" )           PORT_DIPLOCATION("DSW3:5,6,7,8")  // OK
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x10, "4" )
	PORT_DIPSETTING(    0x20, "5" )
	PORT_DIPSETTING(    0x30, "10" )
	PORT_DIPSETTING(    0x40, "15" )
	PORT_DIPSETTING(    0x50, "20" )
	PORT_DIPSETTING(    0x60, "25" )
	PORT_DIPSETTING(    0x70, "30" )
	PORT_DIPSETTING(    0x80, "40" )
	PORT_DIPSETTING(    0x90, "50" )
	PORT_DIPSETTING(    0xa0, "60" )
	PORT_DIPSETTING(    0xb0, "75" )
	PORT_DIPSETTING(    0xc0, "80" )
	PORT_DIPSETTING(    0xd0, "100" )
	PORT_DIPSETTING(    0xe0, "200" )
	PORT_DIPSETTING(    0xf0, "500" )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, "Check Account" )                         PORT_DIPLOCATION("DSW4:1")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x02, 0x00, "Show In Confirm Screen" )                PORT_DIPLOCATION("DSW4:2")  // OK
	PORT_DIPSETTING(    0x00, "Level of Difficulty" )   // percentage in the manual
	PORT_DIPSETTING(    0x02, "Percentage" )            // level of difficulty in the manual
	PORT_DIPNAME( 0x04, 0x00, "Initial Bonus Settings After Reset" )    PORT_DIPLOCATION("DSW4:3")  // OK (need a reset after change)
	PORT_DIPSETTING(    0x00, "Type 1" )
	PORT_DIPSETTING(    0x04, "Type 2" )
	PORT_DIPNAME( 0x08, 0x08, "Bonus Accumulation" )                    PORT_DIPLOCATION("DSW4:4")  // OK (need a reset after change)
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x10, 0x10, "Auto Ticket Dispense" )                  PORT_DIPLOCATION("DSW4:5")  // OK (need a reset after change)
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Yes ) )
	PORT_DIPNAME( 0xe0, 0xe0, "Ticket Dispense Mode" )                  PORT_DIPLOCATION("DSW4:6,7,8")  // OK
	PORT_DIPSETTING(    0xe0, "Continuous" )
	PORT_DIPSETTING(    0xc0, "Max 1 Ticket Per Game" )
	PORT_DIPSETTING(    0xa0, "Max 2 Ticket Per Game" )
	PORT_DIPSETTING(    0x80, "Max 3 Ticket Per Game" )
	PORT_DIPSETTING(    0x60, "Max 4 Ticket Per Game" )
	PORT_DIPSETTING(    0x40, "Max 5 Ticket Per Game" )
	PORT_DIPSETTING(    0x20, "Max 8 Ticket Per Game" )
	PORT_DIPSETTING(    0x00, "Max 10 Ticket Per Game" )

	PORT_START("DSW5")
	PORT_DIPNAME( 0x01, 0x00, DEF_STR( Unused ) )                                   PORT_DIPLOCATION("DSW5:1")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x01, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x00, "Limit Score of Each Game to Max 10x Bet or $5.00" )  PORT_DIPLOCATION("DSW5:2")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )               PORT_CONDITION("DSW4", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x02, DEF_STR( Yes ) )              PORT_CONDITION("DSW4", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x00, "Unused when DSW4-5 OFF" )    PORT_CONDITION("DSW4", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x02, "Unused when DSW4-5 OFF" )    PORT_CONDITION("DSW4", 0x10, EQUALS, 0x00)
	PORT_DIPNAME( 0x04, 0x00, "Use Printer" )                                       PORT_DIPLOCATION("DSW5:3")  // OK
	PORT_DIPSETTING(    0x00, "No (Use TDDD)" )
	PORT_DIPSETTING(    0x04, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x08, 0x08, "Show Game Name & Odds Table" )                       PORT_DIPLOCATION("DSW5:4")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x10, 0x10, "Min-Max Bet Type" )                                  PORT_DIPLOCATION("DSW5:5")  // OK
	PORT_DIPSETTING(    0x10, "Base 8" )
	PORT_DIPSETTING(    0x00, "Base 10" )
	PORT_DIPNAME( 0x20, 0x20, "Play Score when no point left" )                     PORT_DIPLOCATION("DSW5:6")  // OK (turn the machine off/on after change)
	PORT_DIPSETTING(    0x20, DEF_STR( No ) )       PORT_CONDITION("DSW4", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )      PORT_CONDITION("DSW4", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x20, DEF_STR( Unused ) )   PORT_CONDITION("DSW4", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x00, DEF_STR( Unused ) )   PORT_CONDITION("DSW4", 0x10, EQUALS, 0x00)
	PORT_DIPNAME( 0x40, 0x00, "Reset Remaining Score when Game Over" )              PORT_DIPLOCATION("DSW5:7")  // OK (turn the machine off/on after change)
	PORT_DIPSETTING(    0x40, DEF_STR( No ) )       PORT_CONDITION("DSW4", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )      PORT_CONDITION("DSW4", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x40, DEF_STR( Unused ) )   PORT_CONDITION("DSW4", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x00, DEF_STR( Unused ) )   PORT_CONDITION("DSW4", 0x10, EQUALS, 0x00)
	PORT_DIPNAME( 0x80, 0x00, "Advanced Count Game" )                               PORT_DIPLOCATION("DSW5:8")  // OK (turn the machine off/on after change)
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Yes ) )
INPUT_PORTS_END

// Displays tkt info on screen but has no settings or hopper controls other than "Ticket Out By" DSW
// All marked as "Unknown" until a manual or more information is found
static INPUT_PORTS_START( nfb96tx )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )  // unused coin switch
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_SLOT_STOP_ALL ) PORT_NAME("Stop All / Big")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP1 ) PORT_NAME("Stop 1 / D-UP")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SLOT_STOP3 ) PORT_NAME("Stop 3 / Take / Select Card")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET ) PORT_NAME("Play (Bet)")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP2 ) PORT_NAME("Stop 2 / Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME("Ticket In")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )  // unused keyin? - causes counter errors
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2)

	PORT_START("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )  // unused coin switch
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )  // unused keyout?
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")

	PORT_START("DSW1")
	PORT_DIPNAME( 0x07, 0x03, "Game Level (Difficulty)" )   PORT_DIPLOCATION("DSW1:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "Level 1 (Easiest)" )
	PORT_DIPSETTING(    0x06, "Level 2" )
	PORT_DIPSETTING(    0x05, "Level 3" )
	PORT_DIPSETTING(    0x04, "Level 4" )
	PORT_DIPSETTING(    0x03, "Level 5" )
	PORT_DIPSETTING(    0x02, "Level 6" )
	PORT_DIPSETTING(    0x01, "Level 7" )
	PORT_DIPSETTING(    0x00, "Level 8 (Hardest)" )
	PORT_DIPNAME( 0x38, 0x38, "Maximum Play" )              PORT_DIPLOCATION("DSW1:4,5,6")  // OK
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x08, "16" )
	PORT_DIPSETTING(    0x10, "24" )
	PORT_DIPSETTING(    0x18, "32" )
	PORT_DIPSETTING(    0x20, "40" )
	PORT_DIPSETTING(    0x28, "48" )
	PORT_DIPSETTING(    0x30, "64" )
	PORT_DIPSETTING(    0x38, "80" )
	PORT_DIPNAME( 0xc0, 0x80, "Minimum Play for Bonus" )    PORT_DIPLOCATION("DSW1:7,8")  // OK
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x40, "16" )
	PORT_DIPSETTING(    0x80, "24" )
	PORT_DIPSETTING(    0xc0, "32" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x01, 0x01, "Double Up Game" )            PORT_DIPLOCATION("DSW2:1")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x02, 0x02, "Skill Spinning" )            PORT_DIPLOCATION("DSW2:2")  // OK (listed as Non-Stop spinning in the manual)
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x04, 0x04, "Coin In Rate" )              PORT_DIPLOCATION("DSW2:3")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C ) )     // Nickel slots in manual
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_25C ) )    // Penny slots in manual
	PORT_DIPNAME( 0x38, 0x10, "Ticket In Value" )           PORT_DIPLOCATION("DSW2:4,5,6")  // OK
	PORT_DIPSETTING(    0x00, "10" )
	PORT_DIPSETTING(    0x08, "20" )
	PORT_DIPSETTING(    0x10, "25" )
	PORT_DIPSETTING(    0x18, "50" )
	PORT_DIPSETTING(    0x20, "100" )
	PORT_DIPSETTING(    0x28, "125" )
	PORT_DIPSETTING(    0x30, "250" )
	PORT_DIPSETTING(    0x38, "500" )
	PORT_DIPNAME( 0x40, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW2:7")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x40, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x00, "WARNING: Always Off" )       PORT_DIPLOCATION("DSW2:8")  // Listed that way in other manuals
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x00, "Minimum Play to Start" )         PORT_DIPLOCATION("DSW3:1,2")  // OK
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x01, "8" )
	PORT_DIPSETTING(    0x02, "16" )
	PORT_DIPSETTING(    0x03, "24" )
	PORT_DIPNAME( 0x0c, 0x08, "Coin In Limit" )                 PORT_DIPLOCATION("DSW3:3,4")  // OK
	PORT_DIPSETTING(    0x00, "1000" )
	PORT_DIPSETTING(    0x04, "5000" )
	PORT_DIPSETTING(    0x08, "10000" )
	PORT_DIPSETTING(    0x0c, "90000" )
	PORT_DIPNAME( 0x10, 0x00, DEF_STR( Unknown ) )              PORT_DIPLOCATION("DSW3:5")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x10, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x00, DEF_STR( Unknown ) )              PORT_DIPLOCATION("DSW3:6")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x00, DEF_STR( Unknown ) )              PORT_DIPLOCATION("DSW3:7")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x40, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x00, DEF_STR( Unknown ) )              PORT_DIPLOCATION("DSW3:8")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, "Check Account" )                         PORT_DIPLOCATION("DSW4:1")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x02, 0x00, DEF_STR( Unknown ) )                      PORT_DIPLOCATION("DSW4:2")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x02, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x00, "Initial Bonus Settings After Reset" )    PORT_DIPLOCATION("DSW4:3")  // OK (need a reset after change)
	PORT_DIPSETTING(    0x00, "Type 1" )
	PORT_DIPSETTING(    0x04, "Type 2" )
	PORT_DIPNAME( 0x08, 0x08, "Bonus Accumulation" )                    PORT_DIPLOCATION("DSW4:4")  // OK (need a reset after change)
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x10, 0x00, DEF_STR( Unknown ) )                      PORT_DIPLOCATION("DSW4:5")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x10, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x00, DEF_STR( Unknown ) )                      PORT_DIPLOCATION("DSW4:6")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x00, DEF_STR( Unknown ) )                      PORT_DIPLOCATION("DSW4:7")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x40, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x00, DEF_STR( Unknown ) )                      PORT_DIPLOCATION("DSW4:8")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )

	PORT_START("DSW5")
	PORT_DIPNAME( 0x01, 0x00, DEF_STR( Unused ) )           PORT_DIPLOCATION("DSW5:1")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x01, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW5:2")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x02, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x00, "Ticket Out By" )             PORT_DIPLOCATION("DSW5:3")  // OK
	PORT_DIPSETTING(    0x00, "Interface" )
	PORT_DIPSETTING(    0x04, "Direct Drive" )
	PORT_DIPNAME( 0x08, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW5:4")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x08, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW5:5")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x10, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW5:6")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW5:7")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x40, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW5:8")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )
INPUT_PORTS_END

static INPUT_PORTS_START( fb2010 )  // hit 'start1' to init NVRAM for first time
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )  // unused coin switch
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_SLOT_STOP_ALL ) PORT_NAME("Stop All / Big")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP1 ) PORT_NAME("Stop 1 / D-UP")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SLOT_STOP3 ) PORT_NAME("Stop 3 / Take / Select Card")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET ) PORT_NAME("Play (Bet)")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP2 ) PORT_NAME("Stop 2 / Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME("Ticket In")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )  // unused keyin? - causes counter errors
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2)

	PORT_START("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )  // unused coin switch
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )  // unused keyout?
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")

	// definitions and defaults taken from manual (unknown if manual is for this exact version)
	PORT_START("DSW1")
	PORT_DIPNAME( 0x07, 0x00, DEF_STR( Difficulty ) ) PORT_DIPLOCATION("DSW1:1,2,3")  // 'Game Level' in manual
	PORT_DIPSETTING(    0x00, "Level 8 (Hardest)" )
	PORT_DIPSETTING(    0x01, "Level 7" )
	PORT_DIPSETTING(    0x02, "Level 6" )
	PORT_DIPSETTING(    0x03, "Level 5" )
	PORT_DIPSETTING(    0x04, "Level 4" )
	PORT_DIPSETTING(    0x05, "Level 3" )
	PORT_DIPSETTING(    0x06, "Level 2" )
	PORT_DIPSETTING(    0x07, "Level 1 (Easiest)" )
	PORT_DIPNAME( 0x38, 0x00, "Max Play" )            PORT_DIPLOCATION("DSW1:4,5,6")
	// "left" set at DSW5:5
	PORT_DIPSETTING(    0x00, "8" )  PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x08, "16" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x10, "24" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x18, "32" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	// "right" set at DSW5:5
	PORT_DIPSETTING(    0x00, "10" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x08, "20" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x10, "30" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x18, "40" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)  // duplicate of just below
	// "left" or "right" set at DSW5:5
	PORT_DIPSETTING(    0x20, "40" )
	PORT_DIPSETTING(    0x28, "48" )
	PORT_DIPSETTING(    0x30, "64" )
	PORT_DIPSETTING(    0x38, "80" )
	PORT_DIPNAME( 0xc0, 0x00, "Min Play for Bonus" ) PORT_DIPLOCATION("DSW1:7,8")
	// "left" set at DSW5:5
	PORT_DIPSETTING(    0x00, "8" )  PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x40, "16" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x80, "24" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0xc0, "32" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	// "right" set at DSW5:5
	PORT_DIPSETTING(    0x00, "10" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x40, "20" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x80, "30" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0xc0, "40" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)

	PORT_START("DSW2")
	PORT_DIPNAME( 0x01, 0x01, "Double Up" )        PORT_DIPLOCATION("DSW2:1")  // 'Double Game' in manual
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x01, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, "Skill Spin" )       PORT_DIPLOCATION("DSW2:2")  // 'Non-Stop Spinning' in manual
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x02, DEF_STR( On ) )
	PORT_DIPNAME( 0x1c, 0x00, "Coin In" )          PORT_DIPLOCATION("DSW2:3,4,5")
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_4C ) )
	PORT_DIPSETTING(    0x0c, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x14, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x18, DEF_STR( 1C_25C ) )
	PORT_DIPSETTING(    0x1c, DEF_STR( 1C_100C ) )
	PORT_DIPNAME( 0x60, 0x00, "Note In" )          PORT_DIPLOCATION("DSW2:6,7")
	PORT_DIPSETTING(    0x00, "100" )
	PORT_DIPSETTING(    0x20, "200" )
	PORT_DIPSETTING(    0x40, "500" )
	PORT_DIPSETTING(    0x60, "1000" )
	PORT_DIPNAME( 0x80, 0x00, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW2:8")  // 'Warning: this switch must be always off' in manual
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x00, "Min Play to Start" ) PORT_DIPLOCATION("DSW3:1,2")
	PORT_DIPSETTING(    0x00, "1" )
	// "left" set at DSW5:5
	PORT_DIPSETTING(    0x01, "8" )  PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x02, "16" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x03, "24" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x10)
	// "right" set at DSW5:5
	PORT_DIPSETTING(    0x01, "10" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x02, "20" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPSETTING(    0x03, "30" ) PORT_CONDITION("DSW5", 0x10, EQUALS, 0x00)
	PORT_DIPNAME( 0x0c, 0x00, "Coin In & Note In Limit" ) PORT_DIPLOCATION("DSW3:3,4")
	PORT_DIPSETTING(    0x00, "5.000" )
	PORT_DIPSETTING(    0x04, "10.000" )
	PORT_DIPSETTING(    0x08, "50.000" )
	PORT_DIPSETTING(    0x0c, "90.000" )
	PORT_DIPNAME( 0xf0, 0x00, "Clear / Ticket Unit (Service In)" ) PORT_DIPLOCATION("DSW3:5,6,7,8")
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x10, "4" )
	PORT_DIPSETTING(    0x20, "5" )
	PORT_DIPSETTING(    0x30, "10" )
	PORT_DIPSETTING(    0x40, "15" )
	PORT_DIPSETTING(    0x50, "20" )
	PORT_DIPSETTING(    0x60, "25" )
	PORT_DIPSETTING(    0x70, "30" )
	PORT_DIPSETTING(    0x80, "40" )
	PORT_DIPSETTING(    0x90, "50" )
	PORT_DIPSETTING(    0xa0, "60" )
	PORT_DIPSETTING(    0xb0, "75" )
	PORT_DIPSETTING(    0xc0, "80" )
	PORT_DIPSETTING(    0xd0, "100" )
	PORT_DIPSETTING(    0xe0, "200" )
	PORT_DIPSETTING(    0xf0, "500" )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x00, "Check Account" ) PORT_DIPLOCATION("DSW4:1")  // turn on, go into account screen and press double and take to reset board
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x01, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x00, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW4:2")  // not shown in manual
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x02, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x00, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW4:3")  // not shown in manual
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x04, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x00, "Bonus Accumulation" ) PORT_DIPLOCATION("DSW4:4")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x08, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x00, "Auto Ticket Dispense (Use Score)" ) PORT_DIPLOCATION("DSW4:5")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x10, DEF_STR( On ) )
	PORT_DIPNAME( 0xe0, 0x00, "Ticket Dispense Mode" ) PORT_DIPLOCATION("DSW4:6,7,8")
	PORT_DIPSETTING(    0xe0, "Continuous" )
	PORT_DIPSETTING(    0xc0, "Max 1 Ticket per Game" )
	PORT_DIPSETTING(    0xa0, "Max 2 Tickets per Game" )
	PORT_DIPSETTING(    0x80, "Max 3 Tickets per Game" )
	PORT_DIPSETTING(    0x60, "Max 4 Tickets per Game" )
	PORT_DIPSETTING(    0x40, "Max 5 Tickets per Game" )
	PORT_DIPSETTING(    0x20, "Max 8 Tickets per Game" )
	PORT_DIPSETTING(    0x00, "Max 10 Tickets per Game" )

	PORT_START("DSW5")
	PORT_DIPNAME( 0x01, 0x00, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW5:1")  // not shown in manual
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x01, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x00, "Limit Score to 10 x Play or $5.00 Max" ) PORT_DIPLOCATION("DSW5:2")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x02, "Off (Turn DSW4:5 on to activate this)" ) PORT_CONDITION("DSW4", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x02, DEF_STR( On ) )                           PORT_CONDITION("DSW4", 0x10, EQUALS, 0x00)
	PORT_DIPNAME( 0x04, 0x00, "Auto Ticket Dispense Mode" ) PORT_DIPLOCATION("DSW5:3")
	PORT_DIPSETTING(    0x00, "Direct Drive" )
	PORT_DIPSETTING(    0x04, "Pulse Signal - Interface" )
	PORT_DIPNAME( 0x08, 0x08, "Show Odds / Title" ) PORT_DIPLOCATION("DSW5:4")  // 'Show Odds Tables' in manual
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x08, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, "Choose Left or Right Column of DIP SW1 & DIP SW3" ) PORT_DIPLOCATION("DSW5:5")
	PORT_DIPSETTING(    0x10, "Left" )
	PORT_DIPSETTING(    0x00, "Right" )
	PORT_DIPNAME( 0x20, 0x00, "Play Remain Score (When No Point Left)" ) PORT_DIPLOCATION("DSW5:6")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x20, "Off (Turn DSW4:5 on to activate this)" )  PORT_CONDITION("DSW4", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )                            PORT_CONDITION("DSW4", 0x10, EQUALS, 0x00)
	PORT_DIPNAME( 0x40, 0x00, "Reset Remaining Score (When Game Over)" ) PORT_DIPLOCATION("DSW5:7")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x40, "Off (Turn DSW4:5 on to activate this)" )  PORT_CONDITION("DSW4", 0x10, EQUALS, 0x10)
	PORT_DIPSETTING(    0x40, DEF_STR( On ) )                            PORT_CONDITION("DSW4", 0x10, EQUALS, 0x00)
	PORT_DIPNAME( 0x80, 0x00, "Show 'Game' Text" )                       PORT_DIPLOCATION("DSW5:8")  // 'Count Game' in manual. Causes corruption in D-Up game?
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )
INPUT_PORTS_END

static INPUT_PORTS_START( roypok96 )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_GAMBLE_HIGH ) PORT_NAME("Big")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_GAMBLE_D_UP ) PORT_NAME("D-UP")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_TAKE ) PORT_NAME("Take / Select Card")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET ) PORT_NAME("Play (Bet)")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_LOW ) PORT_NAME("Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_NAME("Note In")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2)

	PORT_START("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT ) PORT_NAME("Key Out / Attendant")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")

	PORT_START("DSW1")
	PORT_DIPNAME( 0x07, 0x03, "Game Rate" )                 PORT_DIPLOCATION("DSW1:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "Level 1 - 90%" )
	PORT_DIPSETTING(    0x06, "Level 2 - 85%" )
	PORT_DIPSETTING(    0x05, "Level 3 - 80%" )
	PORT_DIPSETTING(    0x04, "Level 4 - 75%" )
	PORT_DIPSETTING(    0x03, "Level 5 - 70%" )
	PORT_DIPSETTING(    0x02, "Level 6 - 65%" )
	PORT_DIPSETTING(    0x01, "Level 7 - 60%" )
	PORT_DIPSETTING(    0x00, "Level 8 - 55%" )
	PORT_DIPNAME( 0x38, 0x38, "Maximum Play" )              PORT_DIPLOCATION("DSW1:4,5,6")  // OK
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x08, "16" )
	PORT_DIPSETTING(    0x10, "24" )
	PORT_DIPSETTING(    0x18, "32" )
	PORT_DIPSETTING(    0x20, "40" )
	PORT_DIPSETTING(    0x28, "48" )
	PORT_DIPSETTING(    0x30, "64" )
	PORT_DIPSETTING(    0x38, "80" )
	PORT_DIPNAME( 0xc0, 0x80, "Minimum Play for Bonus" )    PORT_DIPLOCATION("DSW1:7,8")  // OK
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x40, "16" )
	PORT_DIPSETTING(    0x80, "24" )
	PORT_DIPSETTING(    0xc0, "32" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x01, 0x01, "Double Up Game" )            PORT_DIPLOCATION("DSW2:1")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x02, 0x00, "Use Printer" )               PORT_DIPLOCATION("DSW2:2")
	PORT_DIPSETTING(    0x00, "No (TDDD)" )     // (Ticket Dispenser Direct Drive)
	PORT_DIPSETTING(    0x02, DEF_STR( Yes ) )  // Use Auto Ticket Dispense only
	PORT_DIPNAME( 0x1c, 0x10, "Coin In" )                   PORT_DIPLOCATION("DSW2:3,4,5")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_4C ) )
	PORT_DIPSETTING(    0x0c, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x14, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x18, DEF_STR( 1C_25C ) )
	PORT_DIPSETTING(    0x1c, DEF_STR( 1C_100C ) )
	PORT_DIPNAME( 0x60, 0x00, "Note In Value" )             PORT_DIPLOCATION("DSW2:6,7")  // OK
	PORT_DIPSETTING(    0x00, "100" )
	PORT_DIPSETTING(    0x20, "200" )
	PORT_DIPSETTING(    0x40, "500" )
	PORT_DIPSETTING(    0x60, "1000" )
	PORT_DIPNAME( 0x80, 0x00, "WARNING: Always Off" )       PORT_DIPLOCATION("DSW2:8")  // Listed that way in the manual
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x02, "Minimum Play to Start" )         PORT_DIPLOCATION("DSW3:1,2")  // OK
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x01, "8" )
	PORT_DIPSETTING(    0x02, "16" )
	PORT_DIPSETTING(    0x03, "24" )
	PORT_DIPNAME( 0x0c, 0x08, "Max Coin In & Note In Point" )   PORT_DIPLOCATION("DSW3:3,4")  // OK
	PORT_DIPSETTING(    0x00, "1000" )
	PORT_DIPSETTING(    0x04, "5000" )
	PORT_DIPSETTING(    0x08, "10000" )
	PORT_DIPSETTING(    0x0c, "90000" )
	PORT_DIPNAME( 0xf0, 0x00, "Clear / Ticket Unit" )           PORT_DIPLOCATION("DSW3:5,6,7,8")  // OK
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x10, "4" )
	PORT_DIPSETTING(    0x20, "5" )
	PORT_DIPSETTING(    0x30, "10" )
	PORT_DIPSETTING(    0x40, "20" )
	PORT_DIPSETTING(    0x50, "25" )
	PORT_DIPSETTING(    0x60, "30" )
	PORT_DIPSETTING(    0x70, "40" )
	PORT_DIPSETTING(    0x80, "50" )
	PORT_DIPSETTING(    0x90, "60" )
	PORT_DIPSETTING(    0xa0, "80" )
	PORT_DIPSETTING(    0xb0, "100" )
	PORT_DIPSETTING(    0xc0, "200" )
	PORT_DIPSETTING(    0xd0, "300" )
	PORT_DIPSETTING(    0xe0, "400" )
	PORT_DIPSETTING(    0xf0, "500" )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, "Check Account" )                       PORT_DIPLOCATION("DSW4:1")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x02, 0x00, "Show Coin In Limit" )                  PORT_DIPLOCATION("DSW4:2")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )
	PORT_DIPSETTING(    0x02, DEF_STR( No ) )
	PORT_DIPNAME( 0x04, 0x00, "Initial Bonus Settings After Reset" )  PORT_DIPLOCATION("DSW4:3")  // not checked
	PORT_DIPSETTING(    0x00, "Type 1" )
	PORT_DIPSETTING(    0x04, "Type 2" )
	PORT_DIPNAME( 0x08, 0x08, "Bonus Accumulation" )                  PORT_DIPLOCATION("DSW4:4")  // not checked
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x10, 0x10, "Auto Ticket Dispense" )                PORT_DIPLOCATION("DSW4:5")  // not checked
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Yes ) )
	PORT_DIPNAME( 0xe0, 0xe0, "Ticket Dispense Mode" )                PORT_DIPLOCATION("DSW4:6,7,8")  // OK
	PORT_DIPSETTING(    0xe0, "Continuous" )
	PORT_DIPSETTING(    0xc0, "Max 1 Ticket Per Game" )
	PORT_DIPSETTING(    0xa0, "Max 2 Ticket Per Game" )
	PORT_DIPSETTING(    0x80, "Max 3 Ticket Per Game" )
	PORT_DIPSETTING(    0x60, "Max 4 Ticket Per Game" )
	PORT_DIPSETTING(    0x40, "Max 5 Ticket Per Game" )
	PORT_DIPSETTING(    0x20, "Max 8 Ticket Per Game" )
	PORT_DIPSETTING(    0x00, "Max 10 Ticket Per Game" )

	// Only versions 3.6 and up make use of DSW5.
	PORT_START("DSW5")
	PORT_BIT( 0xff, IP_ACTIVE_LOW, IPT_UNUSED )
INPUT_PORTS_END

static INPUT_PORTS_START( roypok96a )
	PORT_INCLUDE( roypok96 )

	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x03, 0x02, "Minimum Play to Start" )         PORT_DIPLOCATION("DSW3:1,2")  // OK
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x01, "8" )
	PORT_DIPSETTING(    0x02, "10" )
	PORT_DIPSETTING(    0x03, "16" )

	// DSW5 is under top board, 1-6 are unused and should be set to off. Switches 7 & 8 are adjustable without removing top board.
	PORT_MODIFY("DSW5")
	PORT_DIPNAME( 0x01, 0x00, "Unused - leave off" )            PORT_DIPLOCATION("DSW5:1")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x01, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x00, "Unused - leave off" )            PORT_DIPLOCATION("DSW5:2")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x02, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x00, "Unused - leave off" )            PORT_DIPLOCATION("DSW5:3")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x04, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x00, "Unused - leave off" )            PORT_DIPLOCATION("DSW5:4")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x08, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x00, "Unused - leave off" )            PORT_DIPLOCATION("DSW5:5")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x10, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x00, "Unused - leave off" )            PORT_DIPLOCATION("DSW5:6")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x00, "Reset Remaining Score To Zero" ) PORT_DIPLOCATION("DSW5:7")
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x80, 0x00, "Count Game To Issue Ticket" )    PORT_DIPLOCATION("DSW5:8")
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Yes ) )
INPUT_PORTS_END


static INPUT_PORTS_START( pokonl97 )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_POKER_HOLD1 ) PORT_NAME("Hold 1 / Big / Bet 10")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_POKER_HOLD2 ) PORT_NAME("Hold 2 / D-UP")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_POKER_HOLD4 ) PORT_NAME("Hold 4 / Take / Select Card")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_POKER_HOLD5 ) PORT_NAME("Hold 5 / Play (Bet 1)")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_POKER_HOLD3 ) PORT_NAME("Hold 3 / Small / End")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_DEAL ) PORT_NAME("Start / Draw")

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_E) PORT_NAME("Display Pts/Ticket")  // OK - works when credited
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_NAME("Note In")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2)

	PORT_START("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT ) PORT_NAME("Key Out / Attendant")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")

	PORT_START("DSW1")
	PORT_DIPNAME( 0x07, 0x03, "Game Level (Difficulty)" )   PORT_DIPLOCATION("DSW1:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "Level 1 - 90%" )
	PORT_DIPSETTING(    0x06, "Level 2 - 85%" )
	PORT_DIPSETTING(    0x05, "Level 3 - 80%" )
	PORT_DIPSETTING(    0x04, "Level 4 - 75%" )
	PORT_DIPSETTING(    0x03, "Level 5 - 70%" )
	PORT_DIPSETTING(    0x02, "Level 6 - 65%" )
	PORT_DIPSETTING(    0x01, "Level 7 - 60%" )
	PORT_DIPSETTING(    0x00, "Level 8 - 55%" )
	PORT_DIPNAME( 0x38, 0x38, "Maximum Play" )              PORT_DIPLOCATION("DSW1:4,5,6")  // OK
	PORT_DIPSETTING(    0x00, "10" )
	PORT_DIPSETTING(    0x08, "20" )
	PORT_DIPSETTING(    0x10, "30" )
	PORT_DIPSETTING(    0x18, "40" )
	PORT_DIPSETTING(    0x20, "50" )
	PORT_DIPSETTING(    0x28, "60" )
	PORT_DIPSETTING(    0x30, "70" )
	PORT_DIPSETTING(    0x38, "80" )
	PORT_DIPNAME( 0xc0, 0x80, "Big Hands Frequency" )       PORT_DIPLOCATION("DSW1:7,8")  // OK - hit frequency of 4/5-of a kind & flushes
	PORT_DIPSETTING(    0x00, "Level 1 - Lowest" )
	PORT_DIPSETTING(    0x40, "Level 2" )
	PORT_DIPSETTING(    0x80, "Level 3" )
	PORT_DIPSETTING(    0xc0, "Level 4 - Highest" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x01, 0x01, "Double-Up Game" )            PORT_DIPLOCATION("DSW2:1")
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x02, 0x00, "Use Printer" )               PORT_DIPLOCATION("DSW2:2")
	PORT_DIPSETTING(    0x00, "No (TDDD)" )     // (Ticket Dispenser Direct Drive)
	PORT_DIPSETTING(    0x02, DEF_STR( Yes ) )  // Use AUTO TKT DISPENSE only
	PORT_DIPNAME( 0x1c, 0x10, "Coin In Rate" )              PORT_DIPLOCATION("DSW2:3,4,5")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_4C ) )
	PORT_DIPSETTING(    0x0c, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x14, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x18, DEF_STR( 1C_25C ) )
	PORT_DIPSETTING(    0x1c, DEF_STR( 1C_100C ) )
	PORT_DIPNAME( 0x60, 0x00, "Note In Value" )             PORT_DIPLOCATION("DSW2:6,7")  // OK
	PORT_DIPSETTING(    0x00, "100" )
	PORT_DIPSETTING(    0x20, "200" )
	PORT_DIPSETTING(    0x40, "500" )
	PORT_DIPSETTING(    0x60, "1000" )
	PORT_DIPNAME( 0x80, 0x00, "WARNING: Always Off" )       PORT_DIPLOCATION("DSW2:8")  // Listed that way in the manual
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x02, "Minimum Play to Start" )         PORT_DIPLOCATION("DSW3:1,2")  // OK
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x01, "2" )
	PORT_DIPSETTING(    0x02, "4" )
	PORT_DIPSETTING(    0x03, "8" )
	PORT_DIPNAME( 0x0c, 0x08, "Max Coin In & Note In Point" )   PORT_DIPLOCATION("DSW3:3,4")  // OK
	PORT_DIPSETTING(    0x00, "1000" )
	PORT_DIPSETTING(    0x04, "5000" )
	PORT_DIPSETTING(    0x08, "10000" )
	PORT_DIPSETTING(    0x0c, "90000" )
	PORT_DIPNAME( 0xf0, 0x00, "Clear / Ticket Unit" )           PORT_DIPLOCATION("DSW3:5,6,7,8")  // OK
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x10, "4" )
	PORT_DIPSETTING(    0x20, "5" )
	PORT_DIPSETTING(    0x30, "10" )
	PORT_DIPSETTING(    0x40, "20" )
	PORT_DIPSETTING(    0x50, "25" )
	PORT_DIPSETTING(    0x60, "30" )
	PORT_DIPSETTING(    0x70, "40" )
	PORT_DIPSETTING(    0x80, "50" )
	PORT_DIPSETTING(    0x90, "60" )
	PORT_DIPSETTING(    0xa0, "80" )
	PORT_DIPSETTING(    0xb0, "100" )
	PORT_DIPSETTING(    0xc0, "200" )
	PORT_DIPSETTING(    0xd0, "300" )
	PORT_DIPSETTING(    0xe0, "400" )
	PORT_DIPSETTING(    0xf0, "500" )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, "Check Account" )             PORT_DIPLOCATION("DSW4:1")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x02, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:2")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x02, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, "Type of Game" )              PORT_DIPLOCATION("DSW4:3")  // OK
	PORT_DIPSETTING(    0x00, "Discard" )
	PORT_DIPSETTING(    0x04, "Hold" )
	PORT_DIPNAME( 0x08, 0x08, "Odds Table" )                PORT_DIPLOCATION("DSW4:4")  // OK
	PORT_DIPSETTING(    0x08, "Table 1" )
	PORT_DIPSETTING(    0x00, "Table 2" )
	PORT_DIPNAME( 0x10, 0x10, "Auto Ticket Dispense" )      PORT_DIPLOCATION("DSW4:5")  // not checked
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Yes ) )
	PORT_DIPNAME( 0xe0, 0xe0, "Ticket Dispense Mode" )      PORT_DIPLOCATION("DSW4:6,7,8")
	PORT_DIPSETTING(    0xe0, "Continuous" )
	PORT_DIPSETTING(    0xc0, "Max 1 Ticket Per Game" )
	PORT_DIPSETTING(    0xa0, "Max 2 Ticket Per Game" )
	PORT_DIPSETTING(    0x80, "Max 3 Ticket Per Game" )
	PORT_DIPSETTING(    0x60, "Max 4 Ticket Per Game" )
	PORT_DIPSETTING(    0x40, "Max 5 Ticket Per Game" )
	PORT_DIPSETTING(    0x20, "Max 8 Ticket Per Game" )
	PORT_DIPSETTING(    0x00, "Max 10 Ticket Per Game" )

	PORT_START("DSW5")
	PORT_DIPNAME( 0x01, 0x00, DEF_STR( Unused ) )               PORT_DIPLOCATION("DSW5:1")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x01, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x00, DEF_STR( Unused ) )               PORT_DIPLOCATION("DSW5:2")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x02, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x00, "Use Printer" )                   PORT_DIPLOCATION("DSW5:3")  // OK
	PORT_DIPSETTING(    0x00, "No (Use TDDD)" )
	PORT_DIPSETTING(    0x04, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x08, 0x08, "Show Game Name & Odds Table" )   PORT_DIPLOCATION("DSW5:4")  // not checked
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x10, 0x00, DEF_STR( Unused ) )               PORT_DIPLOCATION("DSW5:5")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x10, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x00, DEF_STR( Unused ) )               PORT_DIPLOCATION("DSW5:6")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x00, DEF_STR( Unused ) )               PORT_DIPLOCATION("DSW5:7")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x40, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x00, DEF_STR( Unused ) )               PORT_DIPLOCATION("DSW5:8")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )
INPUT_PORTS_END

static INPUT_PORTS_START( match98 )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON1 ) PORT_CODE(KEYCODE_C) PORT_NAME("Hit / Big / Stop")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON2 ) PORT_CODE(KEYCODE_X) PORT_NAME("Auto Hit / Double")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_TAKE )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON5 ) PORT_CODE(KEYCODE_B) PORT_NAME("Play (Bet)")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON3 ) PORT_CODE(KEYCODE_V) PORT_NAME("Small")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_NAME("Note In")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2)

	PORT_INCLUDE( cmv4_service )

	PORT_START("DSW1")
	PORT_DIPNAME( 0x07, 0x03, "Game Level (Difficulty)" )   PORT_DIPLOCATION("DSW1:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "Level 1" )
	PORT_DIPSETTING(    0x06, "Level 2" )
	PORT_DIPSETTING(    0x05, "Level 3" )
	PORT_DIPSETTING(    0x04, "Level 4" )
	PORT_DIPSETTING(    0x03, "Level 5" )
	PORT_DIPSETTING(    0x02, "Level 6" )
	PORT_DIPSETTING(    0x01, "Level 7" )
	PORT_DIPSETTING(    0x00, "Level 8" )
	PORT_DIPNAME( 0x38, 0x38, "Maximum Play" )              PORT_DIPLOCATION("DSW1:4,5,6")  // OK
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x08, "10" )
	PORT_DIPSETTING(    0x10, "30" )
	PORT_DIPSETTING(    0x18, "40" )
	PORT_DIPSETTING(    0x20, "50" )
	PORT_DIPSETTING(    0x28, "60" )
	PORT_DIPSETTING(    0x30, "80" )
	PORT_DIPSETTING(    0x38, "100" )
	PORT_DIPNAME( 0xc0, 0x80, "Minimum Play for Bonus" )    PORT_DIPLOCATION("DSW1:7,8")  // OK
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x40, "10" )
	PORT_DIPSETTING(    0x80, "20" )
	PORT_DIPSETTING(    0xc0, "30" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x01, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW2:1")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x01, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW2:2")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x02, DEF_STR( On ) )
	PORT_DIPNAME( 0x1c, 0x10, "Coin In" )                   PORT_DIPLOCATION("DSW2:3,4,5")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_4C ) )
	PORT_DIPSETTING(    0x0c, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x14, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x18, DEF_STR( 1C_25C ) )
	PORT_DIPSETTING(    0x1c, DEF_STR( 1C_100C ) )
	PORT_DIPNAME( 0x60, 0x00, "Note In Value" )                 PORT_DIPLOCATION("DSW2:6,7")  // OK
	PORT_DIPSETTING(    0x00, "100" )
	PORT_DIPSETTING(    0x20, "200" )
	PORT_DIPSETTING(    0x40, "500" )
	PORT_DIPSETTING(    0x60, "1000" )
	PORT_DIPNAME( 0x80, 0x00, "WARNING: Always Off" )       PORT_DIPLOCATION("DSW2:8")  // Listed that way in the manual
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x02, "Minimum Play to Start" )         PORT_DIPLOCATION("DSW3:1,2")  // OK
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x01, "8" )
	PORT_DIPSETTING(    0x02, "10" )
	PORT_DIPSETTING(    0x03, "20" )
	PORT_DIPNAME( 0x0c, 0x08, "Max Coin In & Note In Point" )   PORT_DIPLOCATION("DSW3:3,4")  // OK
	PORT_DIPSETTING(    0x00, "1000" )
	PORT_DIPSETTING(    0x04, "5000" )
	PORT_DIPSETTING(    0x08, "10000" )
	PORT_DIPSETTING(    0x0c, "90000" )
	PORT_DIPNAME( 0xf0, 0x00, "Clear / Ticket Unit" )           PORT_DIPLOCATION("DSW3:5,6,7,8")  // OK
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x10, "4" )
	PORT_DIPSETTING(    0x20, "5" )
	PORT_DIPSETTING(    0x30, "10" )
	PORT_DIPSETTING(    0x40, "20" )
	PORT_DIPSETTING(    0x50, "25" )
	PORT_DIPSETTING(    0x60, "30" )
	PORT_DIPSETTING(    0x70, "40" )
	PORT_DIPSETTING(    0x80, "50" )
	PORT_DIPSETTING(    0x90, "60" )
	PORT_DIPSETTING(    0xa0, "80" )
	PORT_DIPSETTING(    0xb0, "100" )
	PORT_DIPSETTING(    0xc0, "200" )
	PORT_DIPSETTING(    0xd0, "300" )
	PORT_DIPSETTING(    0xe0, "400" )
	PORT_DIPSETTING(    0xf0, "500" )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:!1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:!2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:!3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:!4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, "Auto Ticket Dispense" )      PORT_DIPLOCATION("DSW4:!5")  // not checked
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Yes ) )
	PORT_DIPNAME( 0xe0, 0xe0, "Ticket Dispense Mode" )      PORT_DIPLOCATION("DSW4:!6,!7,!8")  // OK
	PORT_DIPSETTING(    0xe0, "Continuous" )
	PORT_DIPSETTING(    0xc0, "Max 1 Ticket Per Game" )
	PORT_DIPSETTING(    0xa0, "Max 2 Ticket Per Game" )
	PORT_DIPSETTING(    0x80, "Max 3 Ticket Per Game" )
	PORT_DIPSETTING(    0x60, "Max 4 Ticket Per Game" )
	PORT_DIPSETTING(    0x40, "Max 5 Ticket Per Game" )
	PORT_DIPSETTING(    0x20, "Max 8 Ticket Per Game" )
	PORT_DIPSETTING(    0x00, "Max 10 Ticket Per Game" )

	PORT_START("DSW5")
	PORT_BIT( 0xff, IP_ACTIVE_LOW, IPT_UNUSED )
INPUT_PORTS_END

static INPUT_PORTS_START( nfb96bl )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_SLOT_STOP_ALL ) PORT_NAME("Stop All / Big")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP1 ) PORT_NAME("Stop 1 / D-UP")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SLOT_STOP3 ) PORT_NAME("Stop 3 / Take / Select Card")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET ) PORT_NAME("Play (Bet)")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP2 ) PORT_NAME("Stop 2 / Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_COIN2 )   PORT_NAME("Note In")  // Note In
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 )   PORT_IMPULSE(2)       // Coin A

	PORT_INCLUDE( cmv4_service )

	PORT_START("DSW1")
	PORT_DIPNAME( 0x07, 0x03, "Game Rate" )                 PORT_DIPLOCATION("DSW1:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "Level 1 - 90%" )
	PORT_DIPSETTING(    0x06, "Level 2 - 85%" )
	PORT_DIPSETTING(    0x05, "Level 3 - 80%" )
	PORT_DIPSETTING(    0x04, "Level 4 - 75%" )
	PORT_DIPSETTING(    0x03, "Level 5 - 70%" )
	PORT_DIPSETTING(    0x02, "Level 6 - 65%" )
	PORT_DIPSETTING(    0x01, "Level 7 - 60%" )
	PORT_DIPSETTING(    0x00, "Level 8 - 55%" )
	PORT_DIPNAME( 0x38, 0x38, "Maximum Play" )              PORT_DIPLOCATION("DSW1:4,5,6")  // OK
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x08, "16" )
	PORT_DIPSETTING(    0x10, "24" )
	PORT_DIPSETTING(    0x18, "32" )
	PORT_DIPSETTING(    0x20, "40" )
	PORT_DIPSETTING(    0x28, "48" )
	PORT_DIPSETTING(    0x30, "64" )
	PORT_DIPSETTING(    0x38, "80" )
	PORT_DIPNAME( 0xc0, 0x80, "Minimum Play for Bonus" )    PORT_DIPLOCATION("DSW1:7,8")  // OK
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x40, "16" )
	PORT_DIPSETTING(    0x80, "24" )
	PORT_DIPSETTING(    0xc0, "32" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x01, 0x01, "Double-Up Game" )            PORT_DIPLOCATION("DSW2:1")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x01, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x02, 0x02, "Skill Spinning" )            PORT_DIPLOCATION("DSW2:2")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x1c, 0x10, "Coin In" )                   PORT_DIPLOCATION("DSW2:3,4,5")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_4C ) )
	PORT_DIPSETTING(    0x0c, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x14, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x18, DEF_STR( 1C_25C ) )
	PORT_DIPSETTING(    0x1c, DEF_STR( 1C_100C ) )
	PORT_DIPNAME( 0x60, 0x00, "Note In Value" )             PORT_DIPLOCATION("DSW2:6,7")  // OK
	PORT_DIPSETTING(    0x00, "100" )
	PORT_DIPSETTING(    0x20, "200" )
	PORT_DIPSETTING(    0x40, "500" )
	PORT_DIPSETTING(    0x60, "1000" )
	PORT_DIPNAME( 0x80, 0x00, "WARNING: Always Off" )       PORT_DIPLOCATION("DSW2:8")  // Listed that way in the manual
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x02, "Minimum Play to Start" )         PORT_DIPLOCATION("DSW3:1,2")  // OK
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x01, "8" )
	PORT_DIPSETTING(    0x02, "16" )
	PORT_DIPSETTING(    0x03, "24" )
	PORT_DIPNAME( 0x0c, 0x08, "Max Coin In & Note In Points" )  PORT_DIPLOCATION("DSW3:3,4")  // OK
	PORT_DIPSETTING(    0x00, "1000" )
	PORT_DIPSETTING(    0x04, "5000" )
	PORT_DIPSETTING(    0x08, "10000" )
	PORT_DIPSETTING(    0x0c, "90000" )
	PORT_DIPNAME( 0xf0, 0x00, "Clear / Ticket Unit" )           PORT_DIPLOCATION("DSW3:5,6,7,8")  // OK
	PORT_DIPSETTING(    0x00, "1" )
	PORT_DIPSETTING(    0x10, "4" )
	PORT_DIPSETTING(    0x20, "5" )
	PORT_DIPSETTING(    0x30, "10" )
	PORT_DIPSETTING(    0x40, "20" )
	PORT_DIPSETTING(    0x50, "25" )
	PORT_DIPSETTING(    0x60, "30" )
	PORT_DIPSETTING(    0x70, "40" )
	PORT_DIPSETTING(    0x80, "50" )
	PORT_DIPSETTING(    0x90, "60" )
	PORT_DIPSETTING(    0xa0, "80" )
	PORT_DIPSETTING(    0xb0, "100" )
	PORT_DIPSETTING(    0xc0, "200" )
	PORT_DIPSETTING(    0xd0, "300" )
	PORT_DIPSETTING(    0xe0, "400" )
	PORT_DIPSETTING(    0xf0, "500" )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, "Check Account" )                         PORT_DIPLOCATION("DSW4:1")  // OK
	PORT_DIPSETTING(    0x01, DEF_STR( No ) )
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x02, 0x00, "Show Coin In Limit On Screen" )          PORT_DIPLOCATION("DSW4:2")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPNAME( 0x04, 0x00, "Initial Bonus Settings After Reset" )    PORT_DIPLOCATION("DSW4:3")  // OK (need a reset after change)
	PORT_DIPSETTING(    0x00, "Type 1" )
	PORT_DIPSETTING(    0x04, "Type 2" )
	PORT_DIPNAME( 0x08, 0x08, "Bonus Accumulation" )                    PORT_DIPLOCATION("DSW4:4")  // OK (need a reset after change)
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x10, 0x10, "Auto Ticket Dispense" )                  PORT_DIPLOCATION("DSW4:5")  // OK (need a reset after change)
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x60, 0x00, "Ticket Dispense Mode" )                  PORT_DIPLOCATION("DSW4:6,7")  // OK
	PORT_DIPSETTING(    0x60, "Continuous" )
	PORT_DIPSETTING(    0x40, "Max 1 Ticket Per Game" )
	PORT_DIPSETTING(    0x20, "Max 5 Tickets Per Game" )
	PORT_DIPSETTING(    0x00, "Max 10 Tickets Per Game" )
	PORT_DIPNAME( 0x80, 0x00, "Show In Confirm Screen" )                PORT_DIPLOCATION("DSW4:8")  // OK
	PORT_DIPSETTING(    0x00, "Level of Difficulty" )
	PORT_DIPSETTING(    0x80, "Percentage" )

	PORT_START("DSW5")
	PORT_BIT( 0xff, IP_ACTIVE_LOW, IPT_UNUSED )
INPUT_PORTS_END

// no manual - similiar to nfb96 sets
static INPUT_PORTS_START( nfm )
	PORT_INCLUDE( nfb96bl )

	PORT_MODIFY( "IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )  // tied to hopper somehow?  fill/empty switch?
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )  // display ticket value?
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT ) PORT_NAME("Key Out / Attendant")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )  // keyin?  tied to ticket clear value
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK ) PORT_NAME("Stats")  // DSW4-1 must be on to access account menu

	PORT_MODIFY( "DSW2" )
	PORT_DIPNAME( 0x02, 0x00, DEF_STR( Unknown ) )      PORT_DIPLOCATION("DSW2:2")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x02, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x00, "Spin Length" )           PORT_DIPLOCATION("DSW2:8")  // OK
	PORT_DIPSETTING(    0x00, "Long" )
	PORT_DIPSETTING(    0x80, "Short" )
INPUT_PORTS_END


static INPUT_PORTS_START( unkch_controls )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_SLOT_STOP2 ) PORT_NAME("Bet A / Stop 2")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2) PORT_NAME("Coin A")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_GAMBLE_TAKE ) PORT_NAME("Cash Out")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME("Coin B")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SLOT_STOP1 ) PORT_NAME("Take / Stop 1")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET ) PORT_NAME("Bet B / D-Up")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP3 ) PORT_NAME("Small / Stop 3")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_HIGH ) PORT_CODE(KEYCODE_B) PORT_NAME("Big")

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )  // Trips "call attendant" state if activated while credited - something to do with hopper out?
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_BIT( 0x04, IP_ACTIVE_HIGH, IPT_CUSTOM ) PORT_READ_LINE_DEVICE_MEMBER("tickets", FUNC(ticket_dispenser_device::line_r))
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
INPUT_PORTS_END

static INPUT_PORTS_START( unkch )
	PORT_INCLUDE( unkch_controls )

	/* Like many of the other games on this hardware, there is an
	input & dip test screen that you can stumble in to. Also a picture viewer option. Can't figure
	out exactly how to make it repeatable... */

	PORT_START("DSW1")
	PORT_DIPNAME( 0x03, 0x03, "Game Level" )            PORT_DIPLOCATION("DSW1:1,2")  // OK
	PORT_DIPSETTING(    0x03, "Easy" )
	PORT_DIPSETTING(    0x02, "Mid 1" )
	PORT_DIPSETTING(    0x01, "Mid 2" )
	PORT_DIPSETTING(    0x00, "Hard" )
	PORT_DIPNAME( 0x04, 0x04, "Punti" )                 PORT_DIPLOCATION("DSW1:3")    // OK
	PORT_DIPSETTING(    0x04, "Ticket" )
	PORT_DIPSETTING(    0x00, "Gettoni" )
	PORT_DIPNAME( 0x08, 0x08, "Ticket Dispenser" )      PORT_DIPLOCATION("DSW1:4")    // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x10, 0x10, "Reel Speed" )            PORT_DIPLOCATION("DSW1:5")    // OK
	PORT_DIPSETTING(    0x10, DEF_STR( Low ) )
	PORT_DIPSETTING(    0x00, DEF_STR( High ) )
	PORT_DIPNAME( 0x60, 0x60, "Super Jackpot" )         PORT_DIPLOCATION("DSW1:6,7")  // OK
	PORT_DIPSETTING(    0x60, DEF_STR( No ) )
	PORT_DIPSETTING(    0x20, "5%" )
	PORT_DIPSETTING(    0x00, "10%" )
	PORT_DIPSETTING(    0x40, "20%" )
	PORT_DIPNAME( 0x80, 0x80, "Bet Step On 8" )         PORT_DIPLOCATION("DSW1:8")  // OK
	PORT_DIPSETTING(    0x80, DEF_STR( No ) )
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x0f, 0x0f, "Main/Bonus Game Rate" )  PORT_DIPLOCATION("DSW2:1,2,3,4")  // OK - all other values are 83% / 88%
	PORT_DIPSETTING(    0x00, "50% / 55%" )
	PORT_DIPSETTING(    0x01, "53% / 58%" )
	PORT_DIPSETTING(    0x02, "56% / 61%" )
	PORT_DIPSETTING(    0x03, "59% / 64%" )
	PORT_DIPSETTING(    0x04, "62% / 67%" )
	PORT_DIPSETTING(    0x05, "65% / 70%" )
	PORT_DIPSETTING(    0x06, "68% / 73%" )
	PORT_DIPSETTING(    0x07, "71% / 76%" )
	PORT_DIPSETTING(    0x08, "74% / 79%" )
	PORT_DIPSETTING(    0x09, "77% / 82%" )
	PORT_DIPSETTING(    0x0a, "80% / 85%" )
	PORT_DIPSETTING(    0x0f, "83% / 88%" )
	PORT_DIPNAME( 0x30, 0x30, "Max Bet" )               PORT_DIPLOCATION("DSW2:5,6")    // OK
	PORT_DIPSETTING(    0x00, "10 (5)" )    PORT_CONDITION("DSW3", 0x80, EQUALS, 0x80)  // shows 5 in settings screen but limits at 10 in gameplay
	PORT_DIPSETTING(    0x10, "20 (10)" )   PORT_CONDITION("DSW3", 0x80, EQUALS, 0x80)  // shows 10 in settings screen but limits at 20 in gameplay
	PORT_DIPSETTING(    0x20, "40 (20)" )   PORT_CONDITION("DSW3", 0x80, EQUALS, 0x80)  // shows 20 in settings screen but limits at 40 in gameplay
	PORT_DIPSETTING(    0x00, "5" )         PORT_CONDITION("DSW3", 0x80, EQUALS, 0x00)
	PORT_DIPSETTING(    0x10, "10" )        PORT_CONDITION("DSW3", 0x80, EQUALS, 0x00)
	PORT_DIPSETTING(    0x20, "20" )        PORT_CONDITION("DSW3", 0x80, EQUALS, 0x00)
	PORT_DIPSETTING(    0x30, "64" )                                                    // always individual irrespective of DSW3-8
	PORT_DIPNAME( 0x40, 0x40, "Min. Bet For Bonus Play" )   PORT_DIPLOCATION("DSW2:7")  // OK
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x40, "16" )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW2:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x00, "Coin A Rate" )               PORT_DIPLOCATION("DSW3:1,2")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_50C ) )
	PORT_DIPNAME( 0x04, 0x00, "Gettoni/Ticket" )            PORT_DIPLOCATION("DSW3:3")  // OK
	PORT_DIPSETTING(    0x00, "10/100" )
	PORT_DIPSETTING(    0x04, "20/200" )
	PORT_DIPNAME( 0x18, 0x00, "Key In Rate" )               PORT_DIPLOCATION("DSW3:4,5")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_25C ) )       PORT_CONDITION("DSW3", 0x03, EQUALS, 0x00)  // 5*5
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_50C ) )       PORT_CONDITION("DSW3", 0x03, EQUALS, 0x00)  // 5*10
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_100C ) )      PORT_CONDITION("DSW3", 0x03, EQUALS, 0x00)  // 5*20
	PORT_DIPSETTING(    0x18, "1 Coin/250 Credits" )    PORT_CONDITION("DSW3", 0x03, EQUALS, 0x00)  // 5*50
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_50C ) )       PORT_CONDITION("DSW3", 0x03, EQUALS, 0x01)  // 10*5
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_100C ) )      PORT_CONDITION("DSW3", 0x03, EQUALS, 0x01)  // 10*10
	PORT_DIPSETTING(    0x10, "1 Coin/200 Credits" )    PORT_CONDITION("DSW3", 0x03, EQUALS, 0x01)  // 10*20
	PORT_DIPSETTING(    0x18, "1 Coin/500 Credits" )    PORT_CONDITION("DSW3", 0x03, EQUALS, 0x01)  // 10*50
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_100C ) )      PORT_CONDITION("DSW3", 0x03, EQUALS, 0x02)  // 20*5
	PORT_DIPSETTING(    0x08, "1 Coin/200 Credits" )    PORT_CONDITION("DSW3", 0x03, EQUALS, 0x02)  // 20*10
	PORT_DIPSETTING(    0x10, "1 Coin/400 Credits" )    PORT_CONDITION("DSW3", 0x03, EQUALS, 0x02)  // 20*20
	PORT_DIPSETTING(    0x18, "1 Coin/1,000 Credits" )  PORT_CONDITION("DSW3", 0x03, EQUALS, 0x02)  // 20*50
	PORT_DIPSETTING(    0x00, "1 Coin/250 Credits" )    PORT_CONDITION("DSW3", 0x03, EQUALS, 0x03)  // 50*5
	PORT_DIPSETTING(    0x08, "1 Coin/500 Credits" )    PORT_CONDITION("DSW3", 0x03, EQUALS, 0x03)  // 50*10
	PORT_DIPSETTING(    0x10, "1 Coin/1,000 Credits" )  PORT_CONDITION("DSW3", 0x03, EQUALS, 0x03)  // 50*20
	PORT_DIPSETTING(    0x18, "1 Coin/2,500 Credits" )  PORT_CONDITION("DSW3", 0x03, EQUALS, 0x03)  // 50*50
	PORT_DIPNAME( 0x20, 0x00, "Coin B Enable" )             PORT_DIPLOCATION("DSW3:6")  // OK
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x00, "Coin B Rate" )               PORT_DIPLOCATION("DSW3:7")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 1C_2C ) )
	PORT_DIPNAME( 0x80, 0x00, "Max Bet Type" )              PORT_DIPLOCATION("DSW3:8")  // OK
	PORT_DIPSETTING(    0x80, "Total" )        // Max Bet applies to total of BET-A and BET-B unless set to 64
	PORT_DIPSETTING(    0x00, "Individual" )   // Max Bet applies individually to each of BET-A and BET-B

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, "Super Jackpot Half" )        PORT_DIPLOCATION("DSW4:4")  // OK
	PORT_DIPSETTING(    0x08, DEF_STR( No ) )
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x60, 0x60, "Red Game Credit" )           PORT_DIPLOCATION("DSW4:6,7")  // OK
	PORT_DIPSETTING(    0x40, "0" )
	PORT_DIPSETTING(    0x20, "1" )
	PORT_DIPSETTING(    0x00, "10" )
	PORT_DIPSETTING(    0x60, "20" )
	PORT_DIPNAME( 0x80, 0x80, "Cherry/Bell Bonus" )         PORT_DIPLOCATION("DSW4:8")    // OK
	PORT_DIPSETTING(    0x80, "x6 / x3" )
	PORT_DIPSETTING(    0x00, "x9 / x5" )
INPUT_PORTS_END

static INPUT_PORTS_START( unkch3 )
	PORT_INCLUDE( unkch_controls )

	PORT_START("DSW1")
	PORT_DIPNAME( 0x03, 0x03, "Game Level" )                PORT_DIPLOCATION("DSW1:1,2")  // OK
	PORT_DIPSETTING(    0x03, "Easy" )
	PORT_DIPSETTING(    0x02, "Mid 1" )
	PORT_DIPSETTING(    0x01, "Mid 2" )
	PORT_DIPSETTING(    0x00, "Hard" )
	PORT_DIPNAME( 0x04, 0x04, "Punti Unit" )                PORT_DIPLOCATION("DSW1:3")    // OK
	PORT_DIPSETTING(    0x00, "500" )
	PORT_DIPSETTING(    0x04, "1000" )
	PORT_DIPNAME( 0x08, 0x08, "Ticket Dispenser" )          PORT_DIPLOCATION("DSW1:4")    // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x10, 0x10, "Reel Speed" )                PORT_DIPLOCATION("DSW1:5")    // OK
	PORT_DIPSETTING(    0x10, DEF_STR( Low ) )
	PORT_DIPSETTING(    0x00, DEF_STR( High ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW1:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW1:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW1:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW2:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW2:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW2:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW2:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x30, 0x30, "Max Bet" )                   PORT_DIPLOCATION("DSW2:5,6")  // OK
	PORT_DIPSETTING(    0x00, "10 (5)" )    PORT_CONDITION("DSW3", 0x80, EQUALS, 0x80)  // shows 5 in settings screen but limits at 10 in gameplay
	PORT_DIPSETTING(    0x10, "20 (10)" )   PORT_CONDITION("DSW3", 0x80, EQUALS, 0x80)  // shows 10 in settings screen but limits at 20 in gameplay
	PORT_DIPSETTING(    0x20, "40 (20)" )   PORT_CONDITION("DSW3", 0x80, EQUALS, 0x80)  // shows 20 in settings screen but limits at 40 in gameplay
	PORT_DIPSETTING(    0x00, "5" )         PORT_CONDITION("DSW3", 0x80, EQUALS, 0x00)
	PORT_DIPSETTING(    0x10, "10" )        PORT_CONDITION("DSW3", 0x80, EQUALS, 0x00)
	PORT_DIPSETTING(    0x20, "20" )        PORT_CONDITION("DSW3", 0x80, EQUALS, 0x00)
	PORT_DIPSETTING(    0x30, "64" )                                                    // always individual irrespective of DSW3-8
	PORT_DIPNAME( 0x40, 0x40, "Min. Bet For Bonus Play" )   PORT_DIPLOCATION("DSW2:7")  // OK - called 'Bet Minimum' in settings screen
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x40, "16" )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown) )           PORT_DIPLOCATION("DSW2:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x01, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW3:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW3:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW3:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW3:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW3:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x00, "Coin B Enable" )             PORT_DIPLOCATION("DSW3:6")  // OK
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x00, "Coin B Rate" )               PORT_DIPLOCATION("DSW3:7")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 1C_2C ) )
	PORT_DIPNAME( 0x80, 0x00, "Max Bet Type" )              PORT_DIPLOCATION("DSW3:8")  // OK
	PORT_DIPSETTING(    0x80, "Total" )        // Max Bet applies to total of BET-A and BET-B unless set to 64
	PORT_DIPSETTING(    0x00, "Individual" )   // Max Bet applies individually to each of BET-A and BET-B

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, "Test Mode" )                 PORT_DIPLOCATION("DSW4:5")  // OK
	PORT_DIPSETTING(    0x10, "Disable" )
	PORT_DIPSETTING(    0x00, "Enable" )    // hold 'Settings' on reset to access
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, "Cherry/Bell Bonus" )         PORT_DIPLOCATION("DSW4:8")  // OK
	PORT_DIPSETTING(    0x80, "x6 / x3" )
	PORT_DIPSETTING(    0x00, "x9 / x5" )
INPUT_PORTS_END

static INPUT_PORTS_START( unkch4 )
	PORT_INCLUDE( unkch_controls )

	PORT_MODIFY("IN0")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_COIN3 ) PORT_IMPULSE(2) PORT_NAME("Coin C")

	/* Like many of the other games on this hardware, there is an
	input & dip test screen that you can stumble in to. Also a picture viewer option. Can't figure
	out exactly how to make it repeatable... */

	PORT_START("DSW1")
	PORT_DIPNAME( 0x03, 0x03, "Game Level" )                PORT_DIPLOCATION("DSW1:1,2")  // OK
	PORT_DIPSETTING(    0x03, "Easy" )
	PORT_DIPSETTING(    0x02, "Mid 1" )
	PORT_DIPSETTING(    0x01, "Mid 2" )
	PORT_DIPSETTING(    0x00, "Hard" )
	PORT_DIPNAME( 0x04, 0x04, "Punti" )                     PORT_DIPLOCATION("DSW1:3")    // OK
	PORT_DIPSETTING(    0x04, "Ticket" )   // payout rate 100
	PORT_DIPSETTING(    0x00, "Gettoni" )  // payout rate 10
	PORT_DIPNAME( 0x08, 0x08, "Ticket Dispenser" )          PORT_DIPLOCATION("DSW1:4")    // OK
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x10, 0x10, "Reel Speed" )                PORT_DIPLOCATION("DSW1:5")    // OK
	PORT_DIPSETTING(    0x10, DEF_STR( Low ) )
	PORT_DIPSETTING(    0x00, DEF_STR( High ) )
	PORT_DIPNAME( 0x60, 0x60, "Super Jackpot" )             PORT_DIPLOCATION("DSW1:6,7")  // shows in test mode but always seems to be enabled in gameplay
	PORT_DIPSETTING(    0x60, DEF_STR( No ) )
	PORT_DIPSETTING(    0x20, "5%" )
	PORT_DIPSETTING(    0x00, "10%" )
	PORT_DIPSETTING(    0x40, "20%" )
	PORT_DIPNAME( 0x80, 0x80, "Bet Step On 8" )             PORT_DIPLOCATION("DSW1:8")  // OK
	PORT_DIPSETTING(    0x80, DEF_STR( No ) )
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x0f, 0x0f, "Main/Bonus Game Rate" )      PORT_DIPLOCATION("DSW2:1,2,3,4")  // OK - all other values are 83% / 88%
	PORT_DIPSETTING(    0x00, "50% / 55%" )
	PORT_DIPSETTING(    0x01, "53% / 58%" )
	PORT_DIPSETTING(    0x02, "56% / 61%" )
	PORT_DIPSETTING(    0x03, "59% / 64%" )
	PORT_DIPSETTING(    0x04, "62% / 67%" )
	PORT_DIPSETTING(    0x05, "65% / 70%" )
	PORT_DIPSETTING(    0x06, "68% / 73%" )
	PORT_DIPSETTING(    0x07, "71% / 76%" )
	PORT_DIPSETTING(    0x08, "74% / 79%" )
	PORT_DIPSETTING(    0x09, "77% / 82%" )
	PORT_DIPSETTING(    0x0a, "80% / 85%" )
	PORT_DIPSETTING(    0x0f, "83% / 88%" )
	PORT_DIPNAME( 0x30, 0x30, "Max Bet" )                   PORT_DIPLOCATION("DSW2:5,6")  // OK
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x10, "16" )
	PORT_DIPSETTING(    0x20, "32" )
	PORT_DIPSETTING(    0x30, "64" )
	PORT_DIPNAME( 0x40, 0x40, "Min. Bet For Bonus Play" )   PORT_DIPLOCATION("DSW2:7")  // OK
	PORT_DIPSETTING(    0x00, "8" )
	PORT_DIPSETTING(    0x40, "16" )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW2:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x07, 0x00, "Coin A Rate" )               PORT_DIPLOCATION("DSW3:1,2,3")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_4C ) )
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_8C ) )
	PORT_DIPSETTING(    0x05, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x06, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x07, DEF_STR( 1C_50C ) )
	PORT_DIPNAME( 0x18, 0x00, "Key In Rate" )               PORT_DIPLOCATION("DSW3:4,5")  // OK
	PORT_DIPSETTING(    0x00, "5x Coin A" )
	PORT_DIPSETTING(    0x08, "10x Coin A" )
	PORT_DIPSETTING(    0x10, "20x Coin A" )
	PORT_DIPSETTING(    0x18, "50x Coin A" )
	PORT_DIPNAME( 0x20, 0x00, "Coin C Rate" )               PORT_DIPLOCATION("DSW3:6")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C ) )        PORT_CONDITION("DSW3", 0x07, EQUALS, 0x00)  // 1*5
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_10C ) )       PORT_CONDITION("DSW3", 0x07, EQUALS, 0x00)  // 1*10
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_10C ) )       PORT_CONDITION("DSW3", 0x07, EQUALS, 0x01)  // 2*5
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_20C ) )       PORT_CONDITION("DSW3", 0x07, EQUALS, 0x01)  // 2*10
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_20C ) )       PORT_CONDITION("DSW3", 0x07, EQUALS, 0x02)  // 4*5
	PORT_DIPSETTING(    0x20, "1 Coin/40 Credits" )     PORT_CONDITION("DSW3", 0x07, EQUALS, 0x02)  // 4*10
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_25C ) )       PORT_CONDITION("DSW3", 0x07, EQUALS, 0x03)  // 5*5
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_50C ) )       PORT_CONDITION("DSW3", 0x07, EQUALS, 0x03)  // 5*10
	PORT_DIPSETTING(    0x00, "1 Coin/40 Credits" )     PORT_CONDITION("DSW3", 0x07, EQUALS, 0x04)  // 8*5
	PORT_DIPSETTING(    0x20, "1 Coin/80 Credits" )     PORT_CONDITION("DSW3", 0x07, EQUALS, 0x04)  // 8*10
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_50C ) )       PORT_CONDITION("DSW3", 0x07, EQUALS, 0x05)  // 10*5
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_100C ) )      PORT_CONDITION("DSW3", 0x07, EQUALS, 0x05)  // 10*10
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_100C ) )      PORT_CONDITION("DSW3", 0x07, EQUALS, 0x06)  // 20*5
	PORT_DIPSETTING(    0x20, "1 Coin/200 Credits" )    PORT_CONDITION("DSW3", 0x07, EQUALS, 0x06)  // 20*10
	PORT_DIPSETTING(    0x00, "1 Coin/250 Credits" )    PORT_CONDITION("DSW3", 0x07, EQUALS, 0x07)  // 50*5
	PORT_DIPSETTING(    0x20, "1 Coin/500 Credits" )    PORT_CONDITION("DSW3", 0x07, EQUALS, 0x07)  // 50*10
	PORT_DIPNAME( 0x40, 0x00, "Coin B Rate" )               PORT_DIPLOCATION("DSW3:7")  // OK
	PORT_DIPSETTING(    0x00, "1x Coin C" )
	PORT_DIPSETTING(    0x40, "2x Coin C" )
	PORT_DIPNAME( 0x80, 0x00, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW3:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW4:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, "Cherry/Bell Bonus" )         PORT_DIPLOCATION("DSW4:8")  // OK
	PORT_DIPSETTING(    0x80, "x6 / x3" )
	PORT_DIPSETTING(    0x00, "x9 / x5" )
INPUT_PORTS_END


static INPUT_PORTS_START( magoddsc )
	PORT_START("IN0")
	PORT_DIPNAME( 0x01, 0x01, "IN0")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("IN1")
	PORT_DIPNAME( 0x01, 0x01, "IN1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("IN2")
	PORT_DIPNAME( 0x01, 0x01, "IN2")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("IN3")
	PORT_DIPNAME( 0x01, 0x01, "IN3")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("IN4")
	PORT_DIPNAME( 0x01, 0x01, "IN4")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, "DSW1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x01, 0x01, "DSW2")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x01, 0x01, "DSW3")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, "DSW4")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END

static INPUT_PORTS_START( megaline )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_1) PORT_NAME("IN0-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_2) PORT_NAME("IN0-2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_3) PORT_NAME("IN0-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_4) PORT_NAME("IN0-4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_5) PORT_NAME("IN0-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_6) PORT_NAME("IN0-6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_7) PORT_NAME("IN0-7")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_8) PORT_NAME("IN0-8")

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_Q) PORT_NAME("IN1-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_W) PORT_NAME("IN1-2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_E) PORT_NAME("IN1-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_R) PORT_NAME("IN1-4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_T) PORT_NAME("IN1-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_Y) PORT_NAME("IN1-6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_U) PORT_NAME("IN1-7")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_I) PORT_NAME("IN1-8")

	PORT_START("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_A) PORT_NAME("IN2-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_S) PORT_NAME("IN2-2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_D) PORT_NAME("IN2-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_F) PORT_NAME("IN2-4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_G) PORT_NAME("IN2-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_H) PORT_NAME("IN2-6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_J) PORT_NAME("IN2-7")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_K) PORT_NAME("IN2-8")

	PORT_START("IN3")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_Z) PORT_NAME("IN3-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_X) PORT_NAME("IN3-2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_C) PORT_NAME("IN3-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_V) PORT_NAME("IN3-4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_B) PORT_NAME("IN3-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_N) PORT_NAME("IN3-6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_M) PORT_NAME("IN3-7")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_L) PORT_NAME("IN3-8")

	PORT_START("IN4")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_1_PAD) PORT_NAME("IN4-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_2_PAD) PORT_NAME("IN4-2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_3_PAD) PORT_NAME("IN4-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_4_PAD) PORT_NAME("IN4-4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_5_PAD) PORT_NAME("IN4-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_6_PAD) PORT_NAME("IN4-6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_7_PAD) PORT_NAME("IN4-7")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_8_PAD) PORT_NAME("IN4-8")

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, "DSW1" )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x01, 0x01, "DSW2" )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x01, 0x01, "DSW3" )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, "DSW4" )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END


static INPUT_PORTS_START( bonusch )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_1) PORT_NAME("IN0-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_2) PORT_NAME("IN0-2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_3) PORT_NAME("IN0-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_4) PORT_NAME("IN0-4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_5) PORT_NAME("IN0-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_6) PORT_NAME("IN0-6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_7) PORT_NAME("IN0-7")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_8) PORT_NAME("IN0-8")

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_Q) PORT_NAME("IN1-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_W) PORT_NAME("IN1-2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_E) PORT_NAME("IN1-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_R) PORT_NAME("IN1-4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_T) PORT_NAME("IN1-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_Y) PORT_NAME("IN1-6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_U) PORT_NAME("IN1-7")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_I) PORT_NAME("IN1-8")

	PORT_START("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_A) PORT_NAME("IN2-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_S) PORT_NAME("IN2-2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_D) PORT_NAME("IN2-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_F) PORT_NAME("IN2-4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_G) PORT_NAME("IN2-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_H) PORT_NAME("IN2-6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_J) PORT_NAME("IN2-7")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_K) PORT_NAME("IN2-8")

	PORT_START("IN3")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_Z) PORT_NAME("IN3-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_X) PORT_NAME("IN3-2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_C) PORT_NAME("IN3-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_V) PORT_NAME("IN3-4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_B) PORT_NAME("IN3-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_N) PORT_NAME("IN3-6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_M) PORT_NAME("IN3-7")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_L) PORT_NAME("IN3-8")

	PORT_START("IN4")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_1_PAD) PORT_NAME("IN4-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_2_PAD) PORT_NAME("IN4-2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_3_PAD) PORT_NAME("IN4-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_4_PAD) PORT_NAME("IN4-4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_5_PAD) PORT_NAME("IN4-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_6_PAD) PORT_NAME("IN4-6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_7_PAD) PORT_NAME("IN4-7")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_8_PAD) PORT_NAME("IN4-8")

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, "DSW1" )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x01, 0x01, "DSW2" )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x01, 0x01, "DSW3" )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, "DSW4" )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW5")
	PORT_DIPNAME( 0x01, 0x01, "DSW5" )
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END

static INPUT_PORTS_START( feverch )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON6 ) PORT_CODE(KEYCODE_B) PORT_NAME("P1 - Big / Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON4 ) PORT_CODE(KEYCODE_C) PORT_NAME("P1 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON5 ) PORT_CODE(KEYCODE_V) PORT_NAME("P1 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON1 ) PORT_CODE(KEYCODE_Z) PORT_NAME("P1 - Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON3 ) PORT_CODE(KEYCODE_N) PORT_NAME("P1 - Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON2 ) PORT_CODE(KEYCODE_X) PORT_NAME("P1 - Start")

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_BUTTON12 ) PORT_CODE(KEYCODE_G) PORT_NAME("P2 - Big / Switch Controls")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_BUTTON10 ) PORT_CODE(KEYCODE_D) PORT_NAME("P2 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_BUTTON11 ) PORT_CODE(KEYCODE_F) PORT_NAME("P2 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_BUTTON13 ) PORT_CODE(KEYCODE_A) PORT_NAME("P2 - Bet")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_BUTTON15 ) PORT_CODE(KEYCODE_H) PORT_NAME("P2 - Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_BUTTON14 ) PORT_CODE(KEYCODE_S) PORT_NAME("P2 - Start")

	PORT_START("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN3")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME("Coin B")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_COIN4 ) PORT_IMPULSE(2) PORT_NAME("Coin D")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN3 ) PORT_IMPULSE(2) PORT_NAME("Coin C")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2) PORT_NAME("Coin A")

	PORT_START("IN4")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_1_PAD) PORT_NAME("IN4-1")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_2_PAD) PORT_NAME("IN4-2")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_3_PAD) PORT_NAME("IN4-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_4_PAD) PORT_NAME("IN4-4")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_5_PAD) PORT_NAME("IN4-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_6_PAD) PORT_NAME("IN4-6")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_8_PAD) PORT_NAME("IN4-8")

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW1:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x0f, 0x0f, "Main Game Pay Rate" ) PORT_DIPLOCATION("DSW2:1,2,3,4")
	PORT_DIPSETTING(    0x0f, "60%" )
	PORT_DIPSETTING(    0x0e, "62%" )
	PORT_DIPSETTING(    0x0d, "65%" )
	PORT_DIPSETTING(    0x0c, "67%" )
	PORT_DIPSETTING(    0x0b, "70%" )
	PORT_DIPSETTING(    0x0a, "72%" )
	PORT_DIPSETTING(    0x09, "75%" )
	PORT_DIPSETTING(    0x08, "77%" )
	PORT_DIPSETTING(    0x07, "80%" )
	PORT_DIPSETTING(    0x06, "82%" )
	PORT_DIPSETTING(    0x05, "85%" )
	PORT_DIPSETTING(    0x04, "87%" )
	PORT_DIPSETTING(    0x03, "90%" )
	PORT_DIPSETTING(    0x02, "92%" )
	PORT_DIPSETTING(    0x01, "95%" )
	PORT_DIPSETTING(    0x00, "97%" )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW2:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW2:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW2:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW2:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x07, 0x07, "Key In Rate" ) PORT_DIPLOCATION("DSW3:1,2,3")
	PORT_DIPSETTING(    0x00, "5 Credits" )
	PORT_DIPSETTING(    0x01, "10 Credits" )
	PORT_DIPSETTING(    0x02, "20 Credits" )
	PORT_DIPSETTING(    0x03, "25 Credits" )
	PORT_DIPSETTING(    0x04, "40 Credits" )
	PORT_DIPSETTING(    0x05, "50 Credits" )
	PORT_DIPSETTING(    0x06, "60 Credits" )
	PORT_DIPSETTING(    0x07, "100 Credits" )
	PORT_DIPNAME( 0x38, 0x38, "Coin A Rate" ) PORT_DIPLOCATION("DSW3:4,5,6")
	PORT_DIPSETTING(    0x38, DEF_STR( 1C_50C ) ) // why?? hacked?
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_4C ) )
	PORT_DIPSETTING(    0x18, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_6C ) )
	PORT_DIPSETTING(    0x28, DEF_STR( 1C_10C ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW3:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) ) PORT_DIPLOCATION("DSW3:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x0f, 0x0f, "Coin D Rate" ) PORT_DIPLOCATION("DSW4:1,2,3,4")
	PORT_DIPSETTING(    0x0f, DEF_STR( 10C_1C ) )
	PORT_DIPSETTING(    0x01, DEF_STR( 5C_1C ) )
	PORT_DIPSETTING(    0x02, DEF_STR( 5C_2C ) )
	PORT_DIPSETTING(    0x03, DEF_STR( 4C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 3C_1C ) )
	PORT_DIPSETTING(    0x05, DEF_STR( 2C_1C ) )
	PORT_DIPSETTING(    0x06, DEF_STR( 2C_3C ) )
	PORT_DIPSETTING(    0x07, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x09, DEF_STR( 1C_3C ) )
	PORT_DIPSETTING(    0x0a, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x0b, DEF_STR( 1C_10C ) )
	PORT_DIPNAME( 0x70, 0x70, "Coin C Rate" ) PORT_DIPLOCATION("DSW4:5,6,7")
	PORT_DIPSETTING(    0x70, DEF_STR( 1C_50C ) ) // why?? hacked?
	PORT_DIPSETTING(    0x10, DEF_STR( 9C_1C ) )
	PORT_DIPSETTING(    0x20, DEF_STR( 6C_1C ) )
	PORT_DIPSETTING(    0x30, DEF_STR( 5C_1C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 3C_1C ) )
	PORT_DIPSETTING(    0x50, DEF_STR( 2C_1C ) )
	PORT_DIPSETTING(    0x60, DEF_STR( 1C_1C ) )
	PORT_DIPNAME( 0x80, 0x80, "4th Coin" ) PORT_DIPLOCATION("DSW4:8")
	PORT_DIPSETTING(    0x80, "As Coin A" )
	PORT_DIPSETTING(    0x00, "As Hopper Line" )

INPUT_PORTS_END

static INPUT_PORTS_START( star100 )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_GAMBLE_HIGH )   PORT_NAME("Big")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP_ALL ) PORT_NAME("Hold / D-UP")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_TAKE )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET )    PORT_NAME("Play (Bet)")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_LOW )    PORT_NAME("Small")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 )        PORT_NAME("Start")

//  PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_1) PORT_NAME("IN0-1")
//  PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_2) PORT_NAME("IN0-2")
//  PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_3) PORT_NAME("IN0-3: BIG")
//  PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_4) PORT_NAME("IN0-4: DOUBLE UP")
//  PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_5) PORT_NAME("IN0-5: TAKE")
//  PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_6) PORT_NAME("IN0-6: BET")
//  PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_7) PORT_NAME("IN0-7: SMALL")
//  PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_8) PORT_NAME("IN0-8: START")

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2) PORT_NAME("Coin A")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME("Coin B")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN3 ) PORT_IMPULSE(2) PORT_NAME("Coin C")

	PORT_START("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT )  PORT_NAME("Key Out / Attendant")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_OTHER )          PORT_NAME("Hopper Limited Payout") PORT_CODE(KEYCODE_H)
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_SERVICE ) PORT_NAME("Settings / Test Mode")  PORT_TOGGLE
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_BOOK )    PORT_NAME("Statistics")

	PORT_START("IN3")   // reflected in test mode
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN4")   // reflected in test mode
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x00, "Key Out" )         PORT_DIPLOCATION("SW1:1")
	PORT_DIPSETTING(    0x00, "x1" )
	PORT_DIPSETTING(    0x01, "x100" )
	PORT_DIPNAME( 0x02, 0x02, "Bonus Rate" )      PORT_DIPLOCATION("SW1:2")
	PORT_DIPSETTING(    0x00, "1/24" )
	PORT_DIPSETTING(    0x02, "1/32" )
	PORT_DIPNAME( 0x04, 0x04, "Spin Rate" )       PORT_DIPLOCATION("SW1:3")
	PORT_DIPSETTING(    0x04, "Slow" )
	PORT_DIPSETTING(    0x00, "Fast" )
	PORT_DIPNAME( 0x18, 0x18, "Double Up Rate" )  PORT_DIPLOCATION("SW1:4,5")
	PORT_DIPSETTING(    0x18, "60%" )
	PORT_DIPSETTING(    0x10, "70%" )
	PORT_DIPSETTING(    0x08, "80%" )
	PORT_DIPSETTING(    0x00, "90%" )
	PORT_DIPNAME( 0xe0, 0xe0, "Game Rate" )       PORT_DIPLOCATION("SW1:6,7,8")
	PORT_DIPSETTING(    0xe0, "50%" )
	PORT_DIPSETTING(    0xc0, "60%" )
	PORT_DIPSETTING(    0xa0, "65%" )
	PORT_DIPSETTING(    0x80, "70%" )
	PORT_DIPSETTING(    0x60, "75%" )
	PORT_DIPSETTING(    0x40, "80%" )
	PORT_DIPSETTING(    0x20, "85%" )
	PORT_DIPSETTING(    0x00, "90%" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x01, 0x01, "Bonus Min Bet" )     PORT_DIPLOCATION("SW2:1")
	PORT_DIPSETTING(    0x01, "16" )
	PORT_DIPSETTING(    0x00, "32" )
	PORT_DIPNAME( 0x02, 0x02, "Number of Jackpot" ) PORT_DIPLOCATION("SW2:2")
	PORT_DIPSETTING(    0x00, "3 2" )
	PORT_DIPSETTING(    0x02, "6 3" )
	PORT_DIPNAME( 0x04, 0x04, "Double Up" )         PORT_DIPLOCATION("SW2:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Yes ) )
	PORT_DIPSETTING(    0x00, DEF_STR( No ) )
	PORT_DIPNAME( 0x18, 0x18, "Payout Limit" )      PORT_DIPLOCATION("SW2:4,5")
	PORT_DIPSETTING(    0x18, "1000" )
	PORT_DIPSETTING(    0x10, "2000" )
	PORT_DIPSETTING(    0x08, "5000" )
	PORT_DIPSETTING(    0x00, "No Limit" )
	PORT_DIPNAME( 0x20, 0x20, "Bonus" )             PORT_DIPLOCATION("SW2:6")
	PORT_DIPSETTING(    0x20, "Normal" )
	PORT_DIPSETTING(    0x00, "Random" )
	PORT_DIPNAME( 0xc0, 0xc0, "Number of Clown" )   PORT_DIPLOCATION("SW2:7,8")
	PORT_DIPSETTING(    0xc0, "60%" )
	PORT_DIPSETTING(    0x80, "70%" )
	PORT_DIPSETTING(    0x40, "80%" )
	PORT_DIPSETTING(    0x00, "90%" )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x07, 0x07, "Key In Rate" )       PORT_DIPLOCATION("SW3:1,2,3")
	PORT_DIPSETTING(    0x00, "100 Credits" )
	PORT_DIPSETTING(    0x01, "110 Credits" )
	PORT_DIPSETTING(    0x02, "120 Credits" )
	PORT_DIPSETTING(    0x03, "130 Credits" )
	PORT_DIPSETTING(    0x04, "200 Credits" )
	PORT_DIPSETTING(    0x05, "400 Credits" )
	PORT_DIPSETTING(    0x06, "500 Credits" )
	PORT_DIPSETTING(    0x07, "1000 Credits" )
	PORT_DIPNAME( 0x18, 0x00, "Bet Limit" )         PORT_DIPLOCATION("SW3:4,5")
	PORT_DIPSETTING(    0x18, "32 (Limit of Bonus: 1/4)" )
	PORT_DIPSETTING(    0x10, "64 (Limit of Bonus: 1/2)" )
	PORT_DIPSETTING(    0x08, "72 (Limit of Bonus: All)" )
	PORT_DIPSETTING(    0x00, "80 (Limit of Bonus: All)" )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW3:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW3:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW3:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW4-0")
	PORT_DIPNAME( 0x07, 0x07, "Coinage A, B & C" )    PORT_DIPLOCATION("SW4:1,2,3")
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x04, "1 Coin/30 Credits" )
	PORT_DIPSETTING(    0x05, "1 Coin/40 Credits" )
	PORT_DIPSETTING(    0x06, DEF_STR( 1C_50C ) )
	PORT_DIPSETTING(    0x07, DEF_STR( 1C_100C ) )

	// the following two are 'bonus', and need conditional port since they are in different banks
	PORT_DIPNAME( 0x08, 0x08, "Bonus (switch-1)" )    PORT_DIPLOCATION("SW4:4")
	PORT_DIPSETTING(    0x08, "20000" )    PORT_CONDITION("DSW4-1", 0x01, NOTEQUALS, 0x00)
	PORT_DIPSETTING(    0x08, "40000" )    PORT_CONDITION("DSW4-1", 0x01, EQUALS, 0x00)
	PORT_DIPSETTING(    0x00, "30000" )    PORT_CONDITION("DSW4-1", 0x01, NOTEQUALS, 0x00)
	PORT_DIPSETTING(    0x00, "50000" )    PORT_CONDITION("DSW4-1", 0x01, EQUALS, 0x00)
	PORT_BIT( 0xf0, IP_ACTIVE_LOW, IPT_UNUSED )

	PORT_START("DSW4-1")
	PORT_DIPNAME( 0x01, 0x01, "Bonus (switch-2)" )  PORT_DIPLOCATION("SW4:5")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, "Max Bonus" )         PORT_DIPLOCATION("SW4:6")
	PORT_DIPSETTING(    0x00, "100000" )
	PORT_DIPSETTING(    0x02, "200000" )
	PORT_DIPNAME( 0x0c, 0x0c, "Minimum Bet" )       PORT_DIPLOCATION("SW4:7,8")
	PORT_DIPSETTING(    0x0c, "1" )
	PORT_DIPSETTING(    0x08, "8" )
	PORT_DIPSETTING(    0x04, "16" )
	PORT_DIPSETTING(    0x00, "32" )
	PORT_BIT( 0xf0, IP_ACTIVE_LOW, IPT_UNUSED )

	PORT_START("DSW5")  // physically tied to ay8910 port A, but unused...
	PORT_DIPNAME( 0x01, 0x01, "DSW5" )              PORT_DIPLOCATION("SW5:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW5:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW5:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW5:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW5:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW5:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW5:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW5:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW6")  // physically tied to ay8910 port B, but unused...
	PORT_DIPNAME( 0x01, 0x01, "DSW6" )              PORT_DIPLOCATION("SW6:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW6:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW6:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW6:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW6:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW6:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW6:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )  PORT_DIPLOCATION("SW6:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END


static INPUT_PORTS_START( crazybon )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_GAMBLE_HIGH ) PORT_NAME("Big / Hold")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_GAMBLE_D_UP )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_GAMBLE_TAKE )  // also works as stop all and hold pair
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_LOW ) PORT_NAME("Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 ) PORT_NAME("Start")

	PORT_INCLUDE( cmv4_coins )
	PORT_MODIFY("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_SLOT_STOP1 )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_SLOT_STOP2 )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_SLOT_STOP_ALL )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP3 )

	PORT_INCLUDE( cmv4_service )

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x00, "Hold Pair" )                 PORT_DIPLOCATION("DSW1:1")  // OK
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, "Double Up Jack" )            PORT_DIPLOCATION("DSW1:2")  // from manual, not checked
	PORT_DIPSETTING(    0x02, "Poker" )
	PORT_DIPSETTING(    0x00, "Missile" )
	PORT_DIPNAME( 0x04, 0x00, "Coin Out Rate" )             PORT_DIPLOCATION("DSW1:3")  // OK
	PORT_DIPSETTING(    0x04, "1" )
	PORT_DIPSETTING(    0x00, "10" )    PORT_CONDITION("DSW3-0",0x03,EQUALS,0x03)
	PORT_DIPSETTING(    0x00, "50" )    PORT_CONDITION("DSW3-0",0x03,EQUALS,0x02)
	PORT_DIPSETTING(    0x00, "100" )   PORT_CONDITION("DSW3-0",0x03,EQUALS,0x01)
	PORT_DIPSETTING(    0x00, "500" )   PORT_CONDITION("DSW3-0",0x03,EQUALS,0x00)
	PORT_DIPNAME( 0x08, 0x00, "'7' In Double Up Game" )     PORT_DIPLOCATION("DSW1:4")  // OK
	PORT_DIPSETTING(    0x08, "Even" )
	PORT_DIPSETTING(    0x00, "Win" )
	PORT_DIPNAME( 0x10, 0x00, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:5")  // OK
	PORT_DIPSETTING(    0x10, "80%" )
	PORT_DIPSETTING(    0x00, "90%" )
	PORT_DIPNAME( 0x20, 0x00, "Double Up Game" )            PORT_DIPLOCATION("DSW1:6")  // OK
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0xc0, 0x40, "Max Bet" )                   PORT_DIPLOCATION("DSW1:7,8")  // OK
	PORT_DIPSETTING(    0xc0, "16" )
	PORT_DIPSETTING(    0x80, "32" )
	PORT_DIPSETTING(    0x40, "64" )
	PORT_DIPSETTING(    0x00, "96" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x07, 0x07, "Main Game Pay Rate" )        PORT_DIPLOCATION("DSW2:1,2,3")  // OK
	PORT_DIPSETTING(    0x00, "55%" )
	PORT_DIPSETTING(    0x01, "60%" )
	PORT_DIPSETTING(    0x02, "65%" )
	PORT_DIPSETTING(    0x03, "70%" )
	PORT_DIPSETTING(    0x04, "75%" )
	PORT_DIPSETTING(    0x05, "80%" )
	PORT_DIPSETTING(    0x06, "85%" )
	PORT_DIPSETTING(    0x07, "90%" )
	PORT_DIPNAME( 0x18, 0x18, "Hopper Limit" )              PORT_DIPLOCATION("DSW2:4,5")  // not checked
	PORT_DIPSETTING(    0x18, "300" )
	PORT_DIPSETTING(    0x08, "500" )
	PORT_DIPSETTING(    0x10, "1000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x20, 0x00, "Mode" )                      PORT_DIPLOCATION("DSW2:6")  // OK
	PORT_DIPSETTING(    0x00, "Game" )
	PORT_DIPSETTING(    0x20, "Stealth" )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW2:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW2:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW3-0")
	PORT_DIPNAME( 0x03, 0x02, "Key In Rate" )               PORT_DIPLOCATION("DSW3:1,2")  // OK
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_50C ) )
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_100C ) )
	PORT_DIPSETTING(    0x00, "1 Coin/500 Credits" )
	PORT_DIPNAME( 0x0c, 0x00, "Coin A Rate" )               PORT_DIPLOCATION("DSW3:3,4")  // OK
	PORT_DIPSETTING(    0x0c, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_50C ) )
	PORT_BIT( 0xf0, IP_ACTIVE_LOW, IPT_UNUSED )

	PORT_START("DSW3-1")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW3:5")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW3:6")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )          PORT_DIPLOCATION("DSW3:7")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, "Lock Into Stealth Mode" )    PORT_DIPLOCATION("DSW3:8")  // OK
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )   // prevents switching to game mode with start/bet buttons
	PORT_BIT( 0xf0, IP_ACTIVE_LOW, IPT_UNUSED )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x07, 0x01, "Credit Limit" )              PORT_DIPLOCATION("DSW4:1,2,3")  // OK
	PORT_DIPSETTING(    0x07, "5,000" )
	PORT_DIPSETTING(    0x06, "10,000" )
	PORT_DIPSETTING(    0x05, "20,000" )
	PORT_DIPSETTING(    0x04, "30,000" )
	PORT_DIPSETTING(    0x03, "40,000" )
	PORT_DIPSETTING(    0x02, "50,000" )
	PORT_DIPSETTING(    0x01, "100,000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x08, 0x00, "Limit Credit" )              PORT_DIPLOCATION("DSW4:4")  // from manual, not checked
	PORT_DIPSETTING(    0x08, DEF_STR( No ) )
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x10, 0x10, "Fast Take With" )            PORT_DIPLOCATION("DSW4:5")  // OK
	PORT_DIPSETTING(    0x10, "Take" )
	PORT_DIPSETTING(    0x00, "Start" )
	PORT_DIPNAME( 0x20, 0x20, "Bonus Min Bet" )             PORT_DIPLOCATION("DSW4:6")  // OK
	PORT_DIPSETTING(    0x20, "16" )
	PORT_DIPSETTING(    0x00, "32" )
	PORT_DIPNAME( 0x40, 0x00, "Reel Speed" )                PORT_DIPLOCATION("DSW4:7")  // OK
	PORT_DIPSETTING(    0x40, DEF_STR( Low ) )
	PORT_DIPSETTING(    0x00, DEF_STR( High ) )
	PORT_DIPNAME( 0x80, 0x80, "C.B" )                       PORT_DIPLOCATION("DSW4:8")  // from manual, not checked
	PORT_DIPSETTING(    0x80, DEF_STR( No ) )
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )

	PORT_START("DSW5")
	PORT_DIPNAME( 0x01, 0x00, "Print" )                     PORT_DIPLOCATION("DSW5:1")  // from manual, not checked
	PORT_DIPSETTING(    0x01, DEF_STR( No ) )
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x06, 0x06, "Max Key In" )                PORT_DIPLOCATION("DSW5:2,3")  // OK
	PORT_DIPSETTING(    0x06, "1,000" )
	PORT_DIPSETTING(    0x04, "5,000" )
	PORT_DIPSETTING(    0x02, "10,000" )
	PORT_DIPSETTING(    0x00, "20,000" )
	PORT_DIPNAME( 0x18, 0x00, "Condition For 3 Fruit Bonus" )    PORT_DIPLOCATION("DSW5:4,5")  // OK
	PORT_DIPSETTING(    0x18, "5-<-7" )     // don't know what "<" means, but that's what the game displays
	PORT_DIPSETTING(    0x10, "5-9-5" )
	PORT_DIPSETTING(    0x08, "5-6-3" )
	PORT_DIPSETTING(    0x00, "5-3-2" )
	PORT_DIPNAME( 0x60, 0x20, "Game Min Bet" )              PORT_DIPLOCATION("DSW5:6,7")  // OK
	PORT_DIPSETTING(    0x60, "1" )
	PORT_DIPSETTING(    0x40, "8" )
	PORT_DIPSETTING(    0x20, "16" )
	PORT_DIPSETTING(    0x00, "32" )
	PORT_DIPNAME( 0x80, 0x80, "Card Shuffle Animation" )    PORT_DIPLOCATION("DSW5:8")  // OK
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END

static INPUT_PORTS_START( cmpacman )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_SLOT_STOP2 )    PORT_CODE(KEYCODE_C) PORT_CODE(KEYCODE_UP)    PORT_NAME("Stop 2 / Big / Up")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP1 )    PORT_CODE(KEYCODE_X) PORT_CODE(KEYCODE_LEFT)  PORT_NAME("Stop 1 / D-UP / Left")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SLOT_STOP_ALL ) PORT_CODE(KEYCODE_Z) PORT_CODE(KEYCODE_DOWN)  PORT_NAME("Stop All / Take / Down")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP3 )    PORT_CODE(KEYCODE_V)                          PORT_NAME("Stop 3 / Small / Info")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 )        PORT_CODE(KEYCODE_1) PORT_CODE(KEYCODE_RIGHT) PORT_NAME("Start / Right")

	PORT_INCLUDE( cmv4_coins )
	PORT_MODIFY("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER )         PORT_CODE(KEYCODE_K) PORT_NAME("Hidden switch for change games")

	PORT_INCLUDE( cmv4_service )
	PORT_MODIFY("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_CUSTOM )   // Tied to GND and to the hidden switch that change games. (PC0+GND) -+-> PB0

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, "Unknown" )                   PORT_DIPLOCATION("DSW1:!1")  // not checked
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, "Hopper Out Switch" )         PORT_DIPLOCATION("DSW1:!2")  // not checked
	PORT_DIPSETTING(    0x02, "Active Low" )
	PORT_DIPSETTING(    0x00, "Active High" )
	PORT_DIPNAME( 0x04, 0x04, "Payout Mode" )               PORT_DIPLOCATION("DSW1:!3")  // not checked
	PORT_DIPSETTING(    0x04, "Payout Switch" )
	PORT_DIPSETTING(    0x00, "Automatic" )
	PORT_DIPNAME( 0x08, 0x00, "'7' In Double Up Game" )     PORT_DIPLOCATION("DSW1:!4")  // OK
	PORT_DIPSETTING(    0x00, "Lose" )
	PORT_DIPSETTING(    0x08, "Even" )
	PORT_DIPNAME( 0x10, 0x00, "Double Up Game Pay Rate" )   PORT_DIPLOCATION("DSW1:!5")  // OK
	PORT_DIPSETTING(    0x00, "80%" )
	PORT_DIPSETTING(    0x10, "90%" )
	PORT_DIPNAME( 0x20, 0x00, "Double Up Game" )            PORT_DIPLOCATION("DSW1:!6")  // OK
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0xc0, 0xc0, "Bet Max" )                   PORT_DIPLOCATION("DSW1:!7,!8")  // OK
	PORT_DIPSETTING(    0x00, "16" )
	PORT_DIPSETTING(    0x40, "32" )
	PORT_DIPSETTING(    0x80, "64" )
	PORT_DIPSETTING(    0xc0, "96" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x07, 0x00, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:!1,!2,!3")  // OK
	PORT_DIPSETTING(    0x07, "55%" )
	PORT_DIPSETTING(    0x06, "60%" )
	PORT_DIPSETTING(    0x05, "65%" )
	PORT_DIPSETTING(    0x04, "70%" )
	PORT_DIPSETTING(    0x03, "75%" )
	PORT_DIPSETTING(    0x02, "80%" )
	PORT_DIPSETTING(    0x01, "85%" )
	PORT_DIPSETTING(    0x00, "90%" )
	PORT_DIPNAME( 0x18, 0x00, "Hopper Limit" )          PORT_DIPLOCATION("DSW2:!4,!5")  // not checked
	PORT_DIPSETTING(    0x18, "300" )
	PORT_DIPSETTING(    0x10, "500" )
	PORT_DIPSETTING(    0x08, "1000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x20, 0x00, "100 Odds Sound" )        PORT_DIPLOCATION("DSW2:!6")  // not checked
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, "Key-In Type" )           PORT_DIPLOCATION("DSW2:!7")  // OK
	PORT_DIPSETTING(    0x40, "A-Type" )
	PORT_DIPSETTING(    0x00, "B-Type" )
	PORT_DIPNAME( 0x80, 0x00, "Center Super 7 Bet Limit" )  PORT_DIPLOCATION("DSW2:!8")  // related with DSW 4-6
	PORT_DIPSETTING(    0x80, "Unlimited" )
	PORT_DIPSETTING(    0x00, "Limited" )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x03, "Key In Rate" ) PORT_DIPLOCATION("DSW3:!1,!2")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_10C ) )    PORT_CONDITION("DSW2",0x40,EQUALS,0x40)  // A-Type
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_20C ) )    PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_50C ) )    PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_100C ) )   PORT_CONDITION("DSW2",0x40,EQUALS,0x40)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C ) )     PORT_CONDITION("DSW2",0x40,EQUALS,0x00)  // B-Type
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_10C ) )    PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_25C ) )    PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_50C ) )    PORT_CONDITION("DSW2",0x40,EQUALS,0x00)
	PORT_DIPNAME( 0x0c, 0x0c, "Coin A Rate" ) PORT_DIPLOCATION("DSW3:!3,!4")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x04, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x0c, DEF_STR( 1C_10C ) )
	PORT_DIPNAME( 0x30, 0x30, "Coin D Rate" ) PORT_DIPLOCATION("DSW3:!5,!6")  // OK
	PORT_DIPSETTING(    0x30, DEF_STR( 5C_1C ) )    PORT_CONDITION("DSW4",0x10,EQUALS,0x10)  // C-Type
	PORT_DIPSETTING(    0x20, DEF_STR( 2C_1C ) )    PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_1C ) )    PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_2C ) )    PORT_CONDITION("DSW4",0x10,EQUALS,0x10)
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C ) )    PORT_CONDITION("DSW4",0x10,EQUALS,0x00)  // D-Type
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_10C ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_25C ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPSETTING(    0x30, DEF_STR( 1C_50C ) )   PORT_CONDITION("DSW4",0x10,EQUALS,0x00)
	PORT_DIPNAME( 0xc0, 0xc0, "Coin C Rate" ) PORT_DIPLOCATION("DSW3:!7,!8")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x80, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0xc0, DEF_STR( 1C_10C ) )

	PORT_INCLUDE( cmv4_dsw4 )  // Display Of Payout Limit not working; all others OK

	PORT_INCLUDE( cmv4_dsw5 )
	PORT_MODIFY("DSW5")
	// Display of Doll On Demo only affects payout table screen
	// Coin In Limit OK
	// Condition For 3 Kind Of Bonus OK
	// Display Of Doll At All Fr. Bonus not checked
	PORT_DIPNAME( 0x40, 0x40, "Card Shuffle Animation" )    PORT_DIPLOCATION("DSW5:7")  // OK
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	// Test Mode For Disp. Of Doll not working
INPUT_PORTS_END


static INPUT_PORTS_START( cmtetris )
	PORT_START("IN0")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_SLOT_STOP2 )    PORT_CODE(KEYCODE_C) PORT_CODE(KEYCODE_RIGHT) PORT_NAME("Stop 2 / Big / Right")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_SLOT_STOP1 )    PORT_CODE(KEYCODE_X)                         PORT_NAME("Stop 1 / D-UP")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_SLOT_STOP_ALL ) PORT_CODE(KEYCODE_Z) PORT_CODE(KEYCODE_UP)   PORT_NAME("Stop All / Take / Up")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SLOT_STOP3 )    PORT_CODE(KEYCODE_V) PORT_CODE(KEYCODE_LEFT) PORT_NAME("Stop 3 / Small / Info / Left")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 )        PORT_CODE(KEYCODE_1) PORT_CODE(KEYCODE_DOWN) PORT_NAME("Start / Down")

	PORT_START("IN1")
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER )         PORT_CODE(KEYCODE_K) PORT_NAME("Hidden switch for Cherry Master")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER )         PORT_CODE(KEYCODE_L) PORT_NAME("Hidden switch for Tetris")
	PORT_BIT( 0x0c, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_IMPULSE(2) PORT_NAME("Coin B")  // Coin Service (tied to PPI u34 PB3 to also coin Tetris game)
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_COIN4 ) PORT_IMPULSE(2) PORT_NAME("Coin D")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN3 ) PORT_IMPULSE(2) PORT_NAME("Coin C")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_IMPULSE(2) PORT_NAME("Coin A")

	PORT_INCLUDE( cmv4_service )
	PORT_MODIFY("IN2")
	PORT_BIT( 0x01, IP_ACTIVE_HIGH, IPT_CUSTOM )  // Tied to GND and to the hidden switch that change games. (PC0+GND) -+-> (PB0|PB1)

	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )  PORT_DIPLOCATION("DSW1:!1")  // OK
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, "Hopper Out Switch" ) PORT_DIPLOCATION("DSW1:!2")  // OK
	PORT_DIPSETTING(    0x02, "Active Low" )
	PORT_DIPSETTING(    0x00, "Active High" )
	PORT_DIPNAME( 0x04, 0x04, "Payout Mode" )       PORT_DIPLOCATION("DSW1:!3")  // OK
	PORT_DIPSETTING(    0x04, "Payout Switch" )
	PORT_DIPSETTING(    0x00, "Automatic" )
	PORT_DIPNAME( 0x08, 0x00, "W-UP '7'" )          PORT_DIPLOCATION("DSW1:!4")  // not checked
	PORT_DIPSETTING(    0x08, "Loss" )
	PORT_DIPSETTING(    0x00, "Even" )
	PORT_DIPNAME( 0x10, 0x00, "W-UP Pay Rate" )     PORT_DIPLOCATION("DSW1:!5")  // OK
	PORT_DIPSETTING(    0x00, "80%" )
	PORT_DIPSETTING(    0x10, "90%" )
	PORT_DIPNAME( 0x20, 0x00, "W-UP Game" )         PORT_DIPLOCATION("DSW1:!6")  // OK
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0xc0, 0xc0, "Bet Max" )           PORT_DIPLOCATION("DSW1:!7,!8")  // OK
	PORT_DIPSETTING(    0x00, "16" )
	PORT_DIPSETTING(    0x40, "32" )
	PORT_DIPSETTING(    0x80, "64" )
	PORT_DIPSETTING(    0xc0, "96" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x07, 0x00, "Main Game Pay Rate" )    PORT_DIPLOCATION("DSW2:!1,!2,!3")  // OK
	PORT_DIPSETTING(    0x07, "35%" )
	PORT_DIPSETTING(    0x06, "40%" )
	PORT_DIPSETTING(    0x05, "45%" )
	PORT_DIPSETTING(    0x04, "50%" )
	PORT_DIPSETTING(    0x03, "55%" )
	PORT_DIPSETTING(    0x02, "60%" )
	PORT_DIPSETTING(    0x01, "65%" )
	PORT_DIPSETTING(    0x00, "70%" )
	PORT_DIPNAME( 0x18, 0x00, "Hopper Limit" )          PORT_DIPLOCATION("DSW2:!4,!5")  // OK
	PORT_DIPSETTING(    0x18, "300" )
	PORT_DIPSETTING(    0x10, "500" )
	PORT_DIPSETTING(    0x08, "1000" )
	PORT_DIPSETTING(    0x00, "Unlimited" )
	PORT_DIPNAME( 0x20, 0x00, "100 Odds Sound" )        PORT_DIPLOCATION("DSW2:!6")  // not checked
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, "Key-In Type" )           PORT_DIPLOCATION("DSW2:!7")  // OK
	PORT_DIPSETTING(    0x40, "A-Type" )
	PORT_DIPSETTING(    0x00, "B-Type" )
	PORT_DIPNAME( 0x80, 0x00, "Center Super 7 Bet Limit" )  PORT_DIPLOCATION("DSW2:!8")  // related with DSW 4-6
	PORT_DIPSETTING(    0x80, "Unlimited" )
	PORT_DIPSETTING(    0x00, "Limited" )

	PORT_INCLUDE( cmv4_dsw3 )  // all OK

	PORT_INCLUDE( cmv4_dsw4 )  // Display Of Payout Limit not working; all others OK

	PORT_INCLUDE( cmv4_dsw5 )
	// Display of Doll On Demo only affects payout table screen
	// Coin In Limit OK
	// Condition For 3 Kind Of Bonus not checked
	// Display Of Doll At All Fr. Bonus not checked
	// DSW5-7 listed as unused
	// Test Mode For Disp. Of Doll not working
INPUT_PORTS_END


static INPUT_PORTS_START( flam7_w4 )
	PORT_START("IN0")  // b800
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_L) PORT_NAME("Button Lockout")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_POKER_HOLD1 ) PORT_NAME("Hold 1 - Big")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_POKER_HOLD5 ) PORT_NAME("Hold 5")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_POKER_HOLD3 ) PORT_NAME("Hold 3 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_POKER_HOLD4 ) PORT_NAME("Hold 4 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET )  PORT_NAME("Bet 1")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_POKER_HOLD2 ) PORT_NAME("Hold 2 - Low")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 )      PORT_NAME("Start")

	PORT_START("IN1")  // b801
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN2")  // b802
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_CUSTOM ) PORT_READ_LINE_DEVICE_MEMBER("fl7w4_id", FUNC(ds2401_device::read))
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN3")  // b810
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_D) PORT_NAME("Main Door SW")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_H) PORT_NAME("Change")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_F) PORT_NAME("Logic Door SW")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_G) PORT_NAME("Cash Door SW")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_T) PORT_NAME("IN3-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_NAME("Coin B")  // confirmed.
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_NAME("Coin A")  // confirmed.
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN ) PORT_NAME("Coin C or Mars")  // confirmed.

	PORT_START("IN4")  // b811
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_A)   PORT_NAME("WT RXD")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_S)   PORT_NAME("COUT RTS")  // related to hopper...
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_Y)   PORT_NAME("IN4-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_U)   PORT_NAME("IN4-4 Active")  // This one is active in real PCB.
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_I)   PORT_NAME("IN4-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT )                PORT_NAME("Collect")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_R) PORT_NAME("Reset")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_0) PORT_NAME("Books / Stats / Setup") PORT_TOGGLE

	PORT_START("DSW1")
	PORT_DIPNAME( 0x03, 0x03, "Payout" )               PORT_DIPLOCATION("DSW1:1,2")
	PORT_DIPSETTING(    0x03, "Amusement (no credits out)" )
	PORT_DIPSETTING(    0x02, "Ticket Printer" )
	PORT_DIPSETTING(    0x01, "Hopper Payout" )
	PORT_DIPSETTING(    0x00, "Remote Clear" )
	PORT_DIPNAME( 0x04, 0x04, "Game Speed" )           PORT_DIPLOCATION("DSW1:3")
	PORT_DIPSETTING(    0x04, "Fast Game" )
	PORT_DIPSETTING(    0x00, "Slow Game" )
	PORT_DIPNAME( 0x08, 0x08, "Double-Up" )            PORT_DIPLOCATION("DSW1:4")
	PORT_DIPSETTING(    0x08, DEF_STR( No ) )
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x30, 0x30, "Graphics Type" )        PORT_DIPLOCATION("DSW1:5,6")
	PORT_DIPSETTING(    0x30, "Regular Fruit" )
	PORT_DIPSETTING(    0x20, "Graphics Option 1" )  // Numbers.
	PORT_DIPSETTING(    0x10, "Graphics Option 2" )  // Red, White & Blue 7's.
	PORT_DIPSETTING(    0x00, "Graphics Option 3" )  // Hollywood Nights.
	PORT_DIPNAME( 0xc0, 0xc0, "Paytable" )             PORT_DIPLOCATION("DSW1:7,8")
	PORT_DIPSETTING(    0xc0, "9322" )
	PORT_DIPSETTING(    0x80, "9323" )
	PORT_DIPSETTING(    0x40, "9324" )
	PORT_DIPSETTING(    0x00, "9321" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x07, 0x07, "Credits Per Coin A" )  PORT_DIPLOCATION("DSW2:1,2,3")
	PORT_DIPSETTING(    0x07, "1" )
	PORT_DIPSETTING(    0x06, "2" )
	PORT_DIPSETTING(    0x05, "4" )
	PORT_DIPSETTING(    0x04, "5" )
	PORT_DIPSETTING(    0x03, "6" )
	PORT_DIPSETTING(    0x02, "10" )
	PORT_DIPSETTING(    0x01, "25" )
	PORT_DIPSETTING(    0x00, "50" )
	PORT_DIPNAME( 0x38, 0x38, "Credits Per Coin B" )  PORT_DIPLOCATION("DSW2:4,5,6")
	PORT_DIPSETTING(    0x38, "1" )
	PORT_DIPSETTING(    0x30, "2" )
	PORT_DIPSETTING(    0x28, "4" )
	PORT_DIPSETTING(    0x20, "5" )
	PORT_DIPSETTING(    0x18, "6" )
	PORT_DIPSETTING(    0x10, "10" )
	PORT_DIPSETTING(    0x08, "25" )
	PORT_DIPSETTING(    0x00, "50" )
	PORT_DIPNAME( 0xc0, 0xc0, "Credits Per Bill" )   PORT_DIPLOCATION("DSW2:7,8")
	PORT_DIPSETTING(    0xc0, "1" )
	PORT_DIPSETTING(    0x80, "5" )
	PORT_DIPSETTING(    0x40, "10" )
	PORT_DIPSETTING(    0x00, "100" )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x03, "Maximum Bet" )        PORT_DIPLOCATION("DSW3:1,2")
	PORT_DIPSETTING(    0x03, "8" )
	PORT_DIPSETTING(    0x02, "16" )
	PORT_DIPSETTING(    0x01, "32" )
	PORT_DIPSETTING(    0x00, "32" )  // confirmed.
	PORT_DIPNAME( 0x04, 0x04, "Coin-In Timeout" )    PORT_DIPLOCATION("DSW3:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x18, 0x18, "Denomination" )       PORT_DIPLOCATION("DSW3:4,5")
	PORT_DIPSETTING(    0x18, "50 Cents" )
	PORT_DIPSETTING(    0x10, "25 Cents" )
	PORT_DIPSETTING(    0x08, "10 Cents" )
	PORT_DIPSETTING(    0x00, "5 Cents" )
	PORT_DIPNAME( 0x60, 0x60, "Progressive Sign" )   PORT_DIPLOCATION("DSW3:6,7")
	PORT_DIPSETTING(    0x60, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x40, "Single Level" )
	PORT_DIPSETTING(    0x20, "Multi Level" )
	PORT_DIPSETTING(    0x00, "Test Mode" )
	PORT_DIPNAME( 0x80, 0x80, "DSW3_80 Unknown" )    PORT_DIPLOCATION("DSW3:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, "Button Lockout" )     PORT_DIPLOCATION("DSW4:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, "Lockout Polarity" )   PORT_DIPLOCATION("DSW4:2")
	PORT_DIPSETTING(    0x02, "Active High" )
	PORT_DIPSETTING(    0x00, "Active Low" )
	PORT_DIPNAME( 0x0c, 0x0c, "Printer Type" )       PORT_DIPLOCATION("DSW4:3,4")
	PORT_DIPSETTING(    0x0c, "Epson 267A" )
	PORT_DIPSETTING(    0x08, "Star 300" )
	PORT_DIPSETTING(    0x04, "Ithaca 76" )
	PORT_DIPSETTING(    0x00, "Spare" )
	PORT_DIPNAME( 0x10, 0x10, "DSW4_10 Unknown" )    PORT_DIPLOCATION("DSW4:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, "DSW4_20 Unknown" )    PORT_DIPLOCATION("DSW4:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, "DSW4_40 Unknown" )    PORT_DIPLOCATION("DSW4:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, "DSW4_80 Unknown" )    PORT_DIPLOCATION("DSW4:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END


static INPUT_PORTS_START( flaming7 )
	PORT_START("IN0")  // b800
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_L) PORT_NAME("Button Lockout")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_POKER_HOLD1 ) PORT_NAME("Hold 1 - Big")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_POKER_HOLD5 ) PORT_NAME("Hold 5")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_POKER_HOLD3 ) PORT_NAME("Hold 3 - Double-Up")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_POKER_HOLD4 ) PORT_NAME("Hold 4 - Take Score")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_BET )  PORT_NAME("Bet 1")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_POKER_HOLD2 ) PORT_NAME("Hold 2 - Low")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_START1 )      PORT_NAME("Start")

	PORT_START("IN1")  // b801
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN2")  // b802
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_UNKNOWN )
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_CUSTOM ) PORT_READ_LINE_DEVICE_MEMBER("fl7w4_id", FUNC(ds2401_device::read))  // Same input, different device.
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_UNKNOWN )

	PORT_START("IN3")  // b810
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_D) PORT_NAME("Main Door SW")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_H) PORT_NAME("Change")
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_F) PORT_NAME("Logic Door SW")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_G) PORT_NAME("Cash Door SW")
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_T) PORT_NAME("IN3-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_COIN2 ) PORT_NAME("Coin B")  // confirmed.
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_COIN1 ) PORT_NAME("Coin A")  // confirmed.
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_GAMBLE_KEYIN ) PORT_NAME("Coin C or Mars")  // confirmed.

	PORT_START("IN4")  // b811
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_A)   PORT_NAME("WT RXD")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_S)   PORT_NAME("COUT RTS")  // related to hopper...
	PORT_BIT( 0x04, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_Y)   PORT_NAME("IN4-3")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_U)   PORT_NAME("IN4-4 Active")  // this one is active in real PCB.
	PORT_BIT( 0x10, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_I)   PORT_NAME("IN4-5")
	PORT_BIT( 0x20, IP_ACTIVE_LOW, IPT_GAMBLE_KEYOUT )                PORT_NAME("Collect")
	PORT_BIT( 0x40, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_R) PORT_NAME("Reset")
	PORT_BIT( 0x80, IP_ACTIVE_LOW, IPT_SERVICE ) PORT_CODE(KEYCODE_0) PORT_NAME("Books / Stats / Setup") PORT_TOGGLE

	PORT_START("DSW1")
	PORT_DIPNAME( 0x03, 0x03, "Credits Out" )          PORT_DIPLOCATION("DSW1:1,2")
	PORT_DIPSETTING(    0x03, "Amusement (no credits out)" )
	PORT_DIPSETTING(    0x02, "Ticket Printer" )
	PORT_DIPSETTING(    0x01, "Hopper Payout" )
	PORT_DIPSETTING(    0x00, "Remote Clear" )
	PORT_DIPNAME( 0x04, 0x04, "Game Speed" )           PORT_DIPLOCATION("DSW1:3")
	PORT_DIPSETTING(    0x04, "Fast Game" )
	PORT_DIPSETTING(    0x00, "Slow Game" )
	PORT_DIPNAME( 0x08, 0x08, "Lock-Up on 7 or 8 of a kind" )  PORT_DIPLOCATION("DSW1:4")
	PORT_DIPSETTING(    0x08, DEF_STR( No ) )
	PORT_DIPSETTING(    0x00, DEF_STR( Yes ) )
	PORT_DIPNAME( 0x30, 0x30, "Graphics Type" )        PORT_DIPLOCATION("DSW1:5,6")
	PORT_DIPSETTING(    0x30, "Regular Fruit" )
	PORT_DIPSETTING(    0x20, "Numbers" )
	PORT_DIPSETTING(    0x10, "Graphics Option 1" )
	PORT_DIPSETTING(    0x00, "Graphics Option 2" )
	PORT_DIPNAME( 0xc0, 0xc0, "Paytable" )             PORT_DIPLOCATION("DSW1:7,8")
	PORT_DIPSETTING(    0xc0, "9325 (92.50%)" )
	PORT_DIPSETTING(    0x80, "9326 (90.45%)" )
	PORT_DIPSETTING(    0x40, "9327 (90.53%)" )
	PORT_DIPSETTING(    0x00, "9328 (90.60%)" )

	PORT_START("DSW2")
	PORT_DIPNAME( 0x07, 0x07, "Bonus Pay" )   PORT_DIPLOCATION("DSW2:1,2,3")  // percentage of how quickly the internal progressive advances.
	PORT_DIPSETTING(    0x07, "1.00%" )
	PORT_DIPSETTING(    0x06, "2.00%" )
	PORT_DIPSETTING(    0x05, "3.30%" )
	PORT_DIPSETTING(    0x04, "4.00%" )
	PORT_DIPSETTING(    0x03, "5.00%" )
	PORT_DIPSETTING(    0x02, "6.20%" )
	PORT_DIPSETTING(    0x01, "8.30%" )
	PORT_DIPSETTING(    0x00, "10%" )
	PORT_DIPNAME( 0x08, 0x00, "Internal Progressive" )   PORT_DIPLOCATION("DSW2:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, "Not Used (Leave OFF)" )   PORT_DIPLOCATION("DSW2:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, "Not Used (Leave OFF)" )   PORT_DIPLOCATION("DSW2:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, "Not Used (Leave OFF)" )   PORT_DIPLOCATION("DSW2:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, "Not Used (Leave OFF)" )   PORT_DIPLOCATION("DSW2:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_START("DSW3")
	PORT_DIPNAME( 0x03, 0x03, "Maximum Bet" )          PORT_DIPLOCATION("DSW3:1,2")
	PORT_DIPSETTING(    0x03, "8" )
	PORT_DIPSETTING(    0x02, "16" )
	PORT_DIPSETTING(    0x01, "32" )
	PORT_DIPSETTING(    0x00, "64" )
	PORT_DIPNAME( 0x04, 0x04, "Coin-In Timeout" )      PORT_DIPLOCATION("DSW3:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x38, 0x38, "Denomination" )         PORT_DIPLOCATION("DSW3:4,5,6")
	PORT_DIPSETTING(    0x38, "$1.00" )
	PORT_DIPSETTING(    0x30, "50 Cents" )
	PORT_DIPSETTING(    0x28, "25 Cents" )
	PORT_DIPSETTING(    0x20, "10 Cents" )
	PORT_DIPSETTING(    0x18, "5 Cents" )
	PORT_DIPSETTING(    0x10, "5 Cents" )
	PORT_DIPSETTING(    0x08, "5 Cents" )
	PORT_DIPSETTING(    0x00, "5 Cents" )
	PORT_DIPNAME( 0xc0, 0xc0, "Progressive Sign" )     PORT_DIPLOCATION("DSW3:7,8")
	PORT_DIPSETTING(    0xc0, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, "Single Level" )
	PORT_DIPSETTING(    0x40, "Multi Level" )   // use this setting *only* if using external sign.
	PORT_DIPSETTING(    0x00, "Test Mode" )

	PORT_START("DSW4")
	PORT_DIPNAME( 0x01, 0x01, "Button Lockout" )       PORT_DIPLOCATION("DSW4:1")  // this is used to lockout the button panel switches...
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, "Lockout Polarity" )     PORT_DIPLOCATION("DSW4:2")
	PORT_DIPSETTING(    0x02, "Active High" )
	PORT_DIPSETTING(    0x00, "Active Low" )
	PORT_DIPNAME( 0x0c, 0x0c, "Printer Type" )         PORT_DIPLOCATION("DSW4:3,4")
	PORT_DIPSETTING(    0x0c, "Epson 267A" )
	PORT_DIPSETTING(    0x08, "Star 300" )
	PORT_DIPSETTING(    0x04, "Ithaca 76" )
	PORT_DIPSETTING(    0x00, "Citizen 3541" )
	PORT_DIPNAME( 0x10, 0x10, "Paper Low Sensor" )      PORT_DIPLOCATION("DSW4:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, "Not Used (Leave OFF)" )  PORT_DIPLOCATION("DSW4:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, "Not Used (Leave OFF)" )  PORT_DIPLOCATION("DSW4:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, "Not Used (Leave OFF)" )  PORT_DIPLOCATION("DSW4:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END


static INPUT_PORTS_START( ttactoe )
	PORT_INCLUDE( lucky8 )

	PORT_MODIFY( "DSW1" )
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )         PORT_DIPLOCATION("DSW1:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )         PORT_DIPLOCATION("DSW1:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )         PORT_DIPLOCATION("DSW1:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x18, 0x18, "Double Up Game Pay Rate" )  PORT_DIPLOCATION("DSW1:4,5")    // OK
	PORT_DIPSETTING(    0x00, "90%" )
	PORT_DIPSETTING(    0x08, "80%" )
	PORT_DIPSETTING(    0x10, "70%" )
	PORT_DIPSETTING(    0x18, "60%" )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )         PORT_DIPLOCATION("DSW1:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )         PORT_DIPLOCATION("DSW1:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )         PORT_DIPLOCATION("DSW1:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_MODIFY("DSW2")
	PORT_DIPNAME( 0x03, 0x03, "Main Game Pay Rate" )  PORT_DIPLOCATION("DSW2:1,2")  // OK
	PORT_DIPSETTING(    0x03, "60%" )
	PORT_DIPSETTING(    0x02, "70%" )
	PORT_DIPSETTING(    0x01, "80%" )
	PORT_DIPSETTING(    0x00, "90%" )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW2:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW2:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x10, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW2:5")
	PORT_DIPSETTING(    0x10, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x20, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW2:6")
	PORT_DIPSETTING(    0x20, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW2:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW2:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )

	PORT_MODIFY("DSW3")
	PORT_DIPNAME( 0x01, 0x01, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW4:1")
	PORT_DIPSETTING(    0x01, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x02, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW4:2")
	PORT_DIPSETTING(    0x02, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x04, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW4:3")
	PORT_DIPSETTING(    0x04, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x08, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW4:4")
	PORT_DIPSETTING(    0x08, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x70, 0x60, "Coin C Rate" )         PORT_DIPLOCATION("DSW4:5,6,7")  // OK
	PORT_DIPSETTING(    0x70, DEF_STR( 10C_1C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 9C_1C ) )
	PORT_DIPSETTING(    0x20, DEF_STR( 6C_1C ) )
	PORT_DIPSETTING(    0x30, DEF_STR( 5C_1C ) )
	PORT_DIPSETTING(    0x40, DEF_STR( 3C_1C ) )
	PORT_DIPSETTING(    0x50, DEF_STR( 2C_1C ) )
	PORT_DIPSETTING(    0x60, DEF_STR( 1C_1C ) )
	PORT_DIPNAME( 0x80, 0x80, "4th Coin" )            PORT_DIPLOCATION("DSW4:8")      // OK
	PORT_DIPSETTING(    0x80, "As Coin A" )
	PORT_DIPSETTING(    0x00, "As Hopper Line" )

	PORT_MODIFY("DSW4")
	PORT_DIPNAME( 0x07, 0x07, "Key In Rate" )         PORT_DIPLOCATION("DSW3:1,2,3")  // OK
	PORT_DIPSETTING(    0x00, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x01, DEF_STR( 1C_10C ) )
	PORT_DIPSETTING(    0x02, DEF_STR( 1C_20C ) )
	PORT_DIPSETTING(    0x03, DEF_STR( 1C_25C ) )
	PORT_DIPSETTING(    0x04, "1 Coin/40 Credits" )
	PORT_DIPSETTING(    0x05, DEF_STR( 1C_50C ) )
	PORT_DIPSETTING(    0x06, "1 Coin/60 Credits" )
	PORT_DIPSETTING(    0x07, DEF_STR( 1C_100C ) )
	PORT_DIPNAME( 0x38, 0x38, "Coin A Rate" )         PORT_DIPLOCATION("DSW3:4,5,6")  // OK
	PORT_DIPSETTING(    0x38, DEF_STR( 1C_1C ) )
	PORT_DIPSETTING(    0x08, DEF_STR( 1C_2C ) )
	PORT_DIPSETTING(    0x10, DEF_STR( 1C_4C ) )
	PORT_DIPSETTING(    0x18, DEF_STR( 1C_5C ) )
	PORT_DIPSETTING(    0x20, DEF_STR( 1C_6C ) )    // manual says 1C/8C
	PORT_DIPSETTING(    0x28, DEF_STR( 1C_10C ) )
	PORT_DIPNAME( 0x40, 0x40, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW3:7")
	PORT_DIPSETTING(    0x40, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x80, DEF_STR( Unknown ) )    PORT_DIPLOCATION("DSW3:8")
	PORT_DIPSETTING(    0x80, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x00, DEF_STR( On ) )
INPUT_PORTS_END


static INPUT_PORTS_START( lucky8tet )
	PORT_INCLUDE( lucky8 )

	PORT_MODIFY("IN3")  // b810
	PORT_BIT( 0x01, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_R) PORT_NAME("Switch to Tetris")
	PORT_BIT( 0x02, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_T) PORT_NAME("Switch to Lucky 8 Lines")
	PORT_BIT( 0x08, IP_ACTIVE_LOW, IPT_OTHER ) PORT_CODE(KEYCODE_4) PORT_NAME("Tetris Coin In")

	//PORT_MODIFY("IN4")  // b811
	//PORT_BIT( 0x08, IP_ACTIVE_HIGH, IPT_OTHER )
 	
	PORT_START("DB_DIP") 
	PORT_DIPNAME(0x03, 0x03, "Max Bet")   PORT_DIPLOCATION("DB_DIP:1,2")  // MCU port 3.0-3.1
	PORT_DIPSETTING(0x00, "8")
	PORT_DIPSETTING(0x01, "16")
	PORT_DIPSETTING(0x02, "32")
	PORT_DIPSETTING(0x03, "64")
	PORT_DIPNAME(0x0c, 0x0c, "DIP2 (TBD)") PORT_DIPLOCATION("DB_DIP:3,4")  // MCU port 0.2-0.3
	PORT_DIPSETTING(0x00, "0")
	PORT_DIPSETTING(0x04, "1")
	PORT_DIPSETTING(0x08, "2")
	PORT_DIPSETTING(0x0c, "3")
INPUT_PORTS_END


/*****************************************************
*            Graphics Layouts & Decode               *
*****************************************************/

static const gfx_layout charlayout =
{
	8,8,   // 8*8 characters
	4096,  // 4096 characters
	3,     // 3 bits per pixel
	{ 2, 4, 6 },  // the bitplanes are packed in one byte
	{ 0*8+0, 0*8+1, 1*8+0, 1*8+1, 2*8+0, 2*8+1, 3*8+0, 3*8+1 },
	{ 0*32, 1*32, 2*32, 3*32, 4*32, 5*32, 6*32, 7*32 },
	32*8   // every char takes 32 consecutive bytes
};


static const gfx_layout charlayout_chry10 =
{
	8,8,   // 8*8 characters
	RGN_FRAC(1,1),  // 4096 characters
	3,     // 3 bits per pixel
	{ 2, 4, 6 },  // the bitplanes are packed in one byte
	{ 3*8+0, 3*8+1, 2*8+0, 2*8+1, 1*8+0, 1*8+1, 0*8+0, 0*8+1 },
	{ 0*32, 1*32, 2*32, 3*32, 4*32, 5*32, 6*32, 7*32 },
	32*8   // every char takes 32 consecutive bytes
};


static const gfx_layout charlayout_goldfrui =
{
	8,8,   // 8*8 characters
	4096,  // 4096 characters
	3,     // 3 bits per pixel
	{ 2, 4, 6 },  // the bitplanes are packed in one byte
	{ 0*8+0, 0*8+1, 2*8+0, 2*8+1, 1*8+0, 1*8+1, 3*8+0, 3*8+1 },
	{ 0*32, 1*32, 2*32, 3*32, 4*32, 5*32, 6*32, 7*32 },
	32*8   // every char takes 32 consecutive bytes
};


static const gfx_layout charlayout_cb3e =
{
	8,8,   // 8*8 characters
	4096,  // 4096 characters
	3,     // 3 bits per pixel
	{ 2, 4, 6 },  // the bitplanes are packed in one byte
	{ 2*8+0, 2*8+1, 3*8+0, 3*8+1, 0*8+0, 0*8+1, 1*8+0, 1*8+1 },
	{ 0*32, 1*32, 2*32, 3*32, 4*32, 5*32, 6*32, 7*32 },
	32*8   // every char takes 32 consecutive bytes
};


static const gfx_layout tilelayout =
{
	8,32,  // 8*32 characters
	256,   // 256 tiles
	4,     // 4 bits per pixel
	{ 0, 2, 4, 6 },
	{ 0, 1, 1*8+0, 1*8+1, 2*8+0, 2*8+1, 3*8+0, 3*8+1 },
	{ 0*8, 4*8, 8*8, 12*8, 16*8, 20*8, 24*8, 28*8,
			32*8, 36*8, 40*8, 44*8, 48*8, 52*8, 56*8, 60*8,
			64*8, 68*8, 72*8, 76*8, 80*8, 84*8, 88*8, 92*8,
			96*8, 100*8, 104*8, 108*8, 112*8, 116*8, 120*8, 124*8 },
	128*8  // every char takes 128 consecutive bytes
};


static const gfx_layout tilelayoutbl =
{
	8,32,  // 8*32 characters
	256,   // 256 tiles
	4,     // 4 bits per pixel
	{ 0, 2, 4, 6 },
	{ 0, 1, 2*8+0, 2*8+1, 1*8+0, 1*8+1, 3*8+0, 3*8+1 },
	{ 0*8, 4*8, 8*8, 12*8, 16*8, 20*8, 24*8, 28*8,
			32*8, 36*8, 40*8, 44*8, 48*8, 52*8, 56*8, 60*8,
			64*8, 68*8, 72*8, 76*8, 80*8, 84*8, 88*8, 92*8,
			96*8, 100*8, 104*8, 108*8, 112*8, 116*8, 120*8, 124*8 },
	128*8  // every char takes 128 consecutive bytes
};

static const gfx_layout tilelayout_chry10 =
{
	8,32,  // 8*32 characters
	256,   // 256 tiles
	4,     // 4 bits per pixel
	{ 0, 2, 4, 6 },
	{ 3*8+0, 3*8+1, 2*8+0, 2*8+1, 1*8+0, 1*8+1, 0*8+0, 0*8+1 },
	{ 0*8, 4*8, 8*8, 12*8, 16*8, 20*8, 24*8, 28*8,
			32*8, 36*8, 40*8, 44*8, 48*8, 52*8, 56*8, 60*8,
			64*8, 68*8, 72*8, 76*8, 80*8, 84*8, 88*8, 92*8,
			96*8, 100*8, 104*8, 108*8, 112*8, 116*8, 120*8, 124*8 },
	128*8  // every char takes 128 consecutive bytes
};

static const gfx_layout tilelayout_cb3e =
{
	8,32,  // 8*32 characters
	256,   // 256 tiles
	4,     // 4 bits per pixel
	{ 0, 2, 4, 6 },
	{ 2*8+0, 2*8+1,3*8+0, 3*8+1, 0, 1, 1*8+0, 1*8+1 },
	{ 0*8, 4*8, 8*8, 12*8, 16*8, 20*8, 24*8, 28*8,
			32*8, 36*8, 40*8, 44*8, 48*8, 52*8, 56*8, 60*8,
			64*8, 68*8, 72*8, 76*8, 80*8, 84*8, 88*8, 92*8,
			96*8, 100*8, 104*8, 108*8, 112*8, 116*8, 120*8, 124*8 },
	128*8  // every char takes 128 consecutive bytes
};


static const gfx_layout tiles8x8x3_layout =
{
	8, 8,
	RGN_FRAC(1,3),
	3,
	{ RGN_FRAC(0,3), RGN_FRAC(1,3), RGN_FRAC(2,3) },
	{ 0, 1, 2, 3, 4, 5, 6, 7 },
	{ 0*8, 1*8, 2*8, 3*8, 4*8, 5*8, 6*8, 7*8 },
	8*8
};

static const gfx_layout tiles8x32x4_layout =
{
	8, 32,
	RGN_FRAC(1,4),
	4,
	{ RGN_FRAC(0,4), RGN_FRAC(1,4), RGN_FRAC(2,4), RGN_FRAC(3,4) },
	{ 0, 1, 2, 3, 4, 5, 6, 7 },
	{ 0*8, 1*8,  2*8,  3*8,  4*8,  5*8,  6*8,  7*8,
		8*8, 9*8, 10*8, 11*8, 12*8, 13*8, 14*8, 15*8,
		16*8,17*8, 18*8, 19*8, 20*8, 21*8, 22*8, 23*8,
		24*8,25*8, 26*8, 27*8, 28*8, 29*8, 30*8, 31*8
	},
	32*8
};

// cmasterc set
static const gfx_layout tiles8x32x4alt_layout =
{
	8, 32,
	RGN_FRAC(1,2),
	4,
	{ RGN_FRAC(1,2)+0, RGN_FRAC(1,2)+4, 0, 4 },
	{ 3, 2, 1, 0, 11, 10, 9, 8 },
	{ 0*16, 1*16,  2*16,  3*16,  4*16,  5*16,  6*16,  7*16,
		8*16, 9*16, 10*16, 11*16, 12*16, 13*16, 14*16, 15*16,
		16*16,17*16, 18*16, 19*16, 20*16, 21*16, 22*16, 23*16,
		24*16,25*16, 26*16, 27*16, 28*16, 29*16, 30*16, 31*16
	},
	16*32
};

static const uint32_t layout_xoffset[128] =
{
	STEP32(0 * 128, 4),
	STEP32(1 * 128, 4),
	STEP32(2 * 128, 4),
	STEP32(3 * 128, 4)
};

static const uint32_t layout_yoffset[128] =
{
	STEP32(0 * 16384, 512),
	STEP32(1 * 16384, 512),
	STEP32(2 * 16384, 512),
	STEP32(3 * 16384, 512)
};

static const gfx_layout tiles128x128x4_layout =
{
	128, 128,
	RGN_FRAC(1,1),
	4,
	{ 0, 1, 2, 3 },
	EXTENDED_XOFFS,
	EXTENDED_YOFFS,
	4 * 16384, // object takes 8 consecutive bytes
	layout_xoffset,
	layout_yoffset
};


static const uint32_t layout_xoffset256[256] =
{
	STEP32(0 * 128, 4),
	STEP32(1 * 128, 4),
	STEP32(2 * 128, 4),
	STEP32(3 * 128, 4),
	STEP32(4 * 128, 4),
	STEP32(5 * 128, 4),
	STEP32(6 * 128, 4),
	STEP32(7 * 128, 4)
};

static const uint32_t layout_yoffset256[256] =
{
	STEP32(0 * 32768, 1024),
	STEP32(1 * 32768, 1024),
	STEP32(2 * 32768, 1024),
	STEP32(3 * 32768, 1024),
	STEP32(4 * 32768, 1024),
	STEP32(5 * 32768, 1024),
	STEP32(6 * 32768, 1024),
	STEP32(7 * 32768, 1024)
};


static const gfx_layout tiles256x128x4_layout =
{
	256, 256,
	RGN_FRAC(1,1),
	4,
	{ 0, 1, 2, 3 },
	EXTENDED_XOFFS,
	EXTENDED_YOFFS,
	8 * 32768,  // object takes 8 consecutive bytes
	layout_xoffset256,
	layout_yoffset256
};

#if 0  // decodes an extra plane for cmv4 / cmasterb, not sure if we need to
static const gfx_layout tiles8x32x5_layout =
{
	8,32,
	RGN_FRAC(1,5),
	5,
	{ RGN_FRAC(0,5), RGN_FRAC(1,5), RGN_FRAC(2,5), RGN_FRAC(3,5), RGN_FRAC(4,5) },
	{ 0, 1, 2, 3, 4, 5, 6, 7 },
	{ 0*8, 1*8,  2*8,  3*8,  4*8,  5*8,  6*8,  7*8,
		8*8, 9*8, 10*8, 11*8, 12*8, 13*8, 14*8, 15*8,
		16*8,17*8, 18*8, 19*8, 20*8, 21*8, 22*8, 23*8,
		24*8,25*8, 26*8, 27*8, 28*8, 29*8, 30*8, 31*8
	},
	32*8
};
#endif


static const gfx_layout cb3c_tiles8x32_layout =
{
	8,32,
	RGN_FRAC(1,1),
	4,
	{ 0, 1, 2, 3 },
	{ 4, 0, 12, 8, 20, 16, 28, 24 },
	{ 0*32, 1*32, 2*32, 3*32, 4*32, 5*32, 6*32, 7*32, 8*32, 9*32, 10*32, 11*32, 12*32,
		13*32, 14*32, 15*32, 16*32, 17*32, 18*32, 19*32, 20*32, 21*32, 22*32, 23*32,
		24*32, 25*32, 26*32, 27*32, 28*32, 29*32, 30*32, 31*32 },
	32*32
};

static const gfx_layout tiles8x8x4_layout =
{
	8, 8,
	RGN_FRAC(1,4),  // 4096 tiles
	4,
	{ 0, RGN_FRAC(1,4), RGN_FRAC(2,4), RGN_FRAC(3,4) },  // bitplanes are separated
	{ 0, 1, 2, 3, 4, 5, 6, 7 },
	{ 0*8, 1*8, 2*8, 3*8, 4*8, 5*8, 6*8, 7*8 },
	8*8  // every char takes 8 consecutive bytes
};

static const gfx_layout sangho_charlayout =
{
	8,8,            // 8*8 characters
	RGN_FRAC(1,1),  // 4096 characters
	4,              // 4 bits per pixel
	{ 0, 2, 4, 6 }, // the bitplanes are packed in one byte
	{ 0*8+0, 0*8+1, 1*8+0, 1*8+1, 2*8+0, 2*8+1, 3*8+0, 3*8+1 },
	{ 0*32, 1*32, 2*32, 3*32, 4*32, 5*32, 6*32, 7*32 },
	32*8  // every char takes 32 consecutive bytes
};

static const gfx_layout sangho_tilelayout =
{
	8,32,           // 8*32 characters
	RGN_FRAC(1,1),  // 1024 tiles
	4,              // 4 bits per pixel
	{ 0, 2, 4, 6 },
	{ 0, 1, 1*8+0, 1*8+1, 2*8+0, 2*8+1, 3*8+0, 3*8+1 },
	{ 0*8, 4*8, 8*8, 12*8, 16*8, 20*8, 24*8, 28*8,
			32*8, 36*8, 40*8, 44*8, 48*8, 52*8, 56*8, 60*8,
			64*8, 68*8, 72*8, 76*8, 80*8, 84*8, 88*8, 92*8,
			96*8, 100*8, 104*8, 108*8, 112*8, 116*8, 120*8, 124*8 },
	128*8  // every char takes 128 consecutive bytes
};

static const gfx_layout super9_charlayout =
{
	8,8,   // 8*8 characters
	4096,  // 4096 characters
	3,     // 3 bits per pixel
	{ 2, 4, 6 }, // the bitplanes are packed in one byte
	{ 0*8+0, 0*8+1, 1*8+0, 1*8+1, 2*8+0, 2*8+1, 3*8+0, 3*8+1 },
	{ 0*32, 4*32, 2*32, 6*32, 1*32, 5*32, 3*32, 7*32 },
	32*8   // every char takes 32 consecutive bytes
};

static const gfx_layout super9_tilelayout =  // Green is OK. Red needs normal goldstar order...
{
	8,32,  // 8*32 characters
	256,   // 256 tiles
	4,     // 4 bits per pixel
	{ 0, 2, 4, 6 },
	{ 1, 0, 1*8+1, 1*8+0, 2*8+1, 2*8+0, 3*8+1, 3*8+0 },
	{ 0*8, 4*8, 8*8, 12*8, 16*8, 20*8, 24*8, 28*8,
			32*8, 36*8, 40*8, 44*8, 48*8, 52*8, 56*8, 60*8,
			64*8, 68*8, 72*8, 76*8, 80*8, 84*8, 88*8, 92*8,
			96*8, 100*8, 104*8, 108*8, 112*8, 116*8, 120*8, 124*8 },
	128*8  // every char takes 128 consecutive bytes
};


static const gfx_layout flaming7_charlayout =
{
	8,8,   // 8*8 characters
	4096,  // 4096 characters
	3,     // 3 bits per pixel
	{ 2, 4, 6 },  // the bitplanes are packed in one byte
	{ 2*8+0, 2*8+1, 3*8+0, 3*8+1, 0*8+0, 0*8+1, 1*8+0, 1*8+1 },
	{ 0*32, 1*32, 2*32, 3*32, 4*32, 5*32, 6*32, 7*32 },
	32*8   // every char takes 32 consecutive bytes
};

static const gfx_layout flaming7_tilelayout =
{
	8,32,  // 8*32 characters
	256,   // 256 tiles
	4,     // 4 bits per pixel
	{ 0, 2, 4, 6 },
	{ 2*8+0, 2*8+1, 3*8+0, 3*8+1, 0, 1, 1*8+0, 1*8+1 },
	{ 0*8, 4*8, 8*8, 12*8, 16*8, 20*8, 24*8, 28*8,
		32*8, 36*8, 40*8, 44*8, 48*8, 52*8, 56*8, 60*8,
		64*8, 68*8, 72*8, 76*8, 80*8, 84*8, 88*8, 92*8,
		96*8, 100*8, 104*8, 108*8, 112*8, 116*8, 120*8, 124*8 },
	128*8  // every char takes 128 consecutive bytes
};

static const gfx_layout flam7_tw_charlayout =
{
	8,8,   // 8*8 characters
	4096,  // 4096 characters
	3,     // 3 bits per pixel
	{ 2, 4, 6 },  // the bitplanes are packed in one byte
	{ 3*8+0, 3*8+1, 2*8+0, 2*8+1, 1*8+0, 1*8+1, 0*8+0, 0*8+1 },
	{ 0*32, 1*32, 2*32, 3*32, 4*32, 5*32, 6*32, 7*32 },
	32*8   // every char takes 32 consecutive bytes
};

static const gfx_layout flam7_tw_tilelayout =  // FIXME
{
	8,32,  // 8*32 characters
	256,   // 256 tiles
	4,     // 4 bits per pixel
	{ 0, 2, 4, 6 },
	{ 3*8+0, 3*8+1, 2*8+0, 1*8+0, 1*8+1, 2*8+1, 0, 1 },
	{ 0*8, 4*8, 8*8, 12*8, 16*8, 20*8, 24*8, 28*8,
		32*8, 36*8, 40*8, 44*8, 48*8, 52*8, 56*8, 60*8,
		64*8, 68*8, 72*8, 76*8, 80*8, 84*8, 88*8, 92*8,
		96*8, 100*8, 104*8, 108*8, 112*8, 116*8, 120*8, 124*8 },
	128*8  // every char takes 128 consecutive bytes
};


static GFXDECODE_START( gfx_goldstar )
	GFXDECODE_ENTRY( "gfx1", 0, charlayout,   0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, tilelayout, 128,  8 )
GFXDECODE_END

static GFXDECODE_START( gfx_bl )
	GFXDECODE_ENTRY( "gfx1", 0, charlayout,   0,  16 )
	GFXDECODE_ENTRY( "gfx2", 0, tilelayoutbl, 128, 8 )
GFXDECODE_END

static GFXDECODE_START( gfx_ml )
	GFXDECODE_ENTRY( "gfx1", 0, charlayout,         0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0x18000, tilelayout, 128,  8 )
GFXDECODE_END

static GFXDECODE_START( gfx_goldfrui )
	GFXDECODE_ENTRY( "gfx1", 0, charlayout_goldfrui,  0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, tilelayoutbl,       128,  8 )
GFXDECODE_END

static GFXDECODE_START( gfx_chry10 )
	GFXDECODE_ENTRY( "gfx1", 0, charlayout_chry10,   0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, tilelayout_chry10, 128,  8 )
GFXDECODE_END

static GFXDECODE_START( gfx_cb3c )
	GFXDECODE_ENTRY( "gfx1", 0, gfx_8x8x4_packed_lsb,    0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, cb3c_tiles8x32_layout, 128,  8 )
GFXDECODE_END

static GFXDECODE_START( gfx_cb3e )
	GFXDECODE_ENTRY( "gfx1", 0, charlayout_cb3e,   0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, tilelayout_cb3e, 128,  8 )
GFXDECODE_END

static GFXDECODE_START( gfx_ncb3 )
	GFXDECODE_ENTRY( "gfx1", 0, tiles8x8x3_layout,    0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, tiles8x32x4_layout, 128,  4 )
GFXDECODE_END

static GFXDECODE_START( gfx_bingownga )
	GFXDECODE_ENTRY( "gfx1", 0, tiles8x8x3_layout,         0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0x6000, tiles8x32x4_layout, 128,  4 )
GFXDECODE_END

static GFXDECODE_START( gfx_magodds )
	GFXDECODE_ENTRY( "gfx1", 0, tiles8x8x3_layout,  0, 32 )
	GFXDECODE_ENTRY( "gfx2", 0, tiles8x32x4_layout, 0, 16 )
GFXDECODE_END

static GFXDECODE_START( gfx_cm )
	GFXDECODE_ENTRY( "gfx1", 0, tiles8x8x3_layout,       0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, tiles8x32x4_layout, 128+64,  4 )  // or is there a register for the +64?
GFXDECODE_END

static GFXDECODE_START( gfx_cmbitmap )
	GFXDECODE_ENTRY( "gfx1", 0, tiles8x8x3_layout,        0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, tiles8x32x4_layout,  128+64,  4 )  // or is there a register for the +64?
	GFXDECODE_ENTRY( "user1", 0, tiles128x128x4_layout, 128,  4 )
GFXDECODE_END

static GFXDECODE_START( gfx_cmasterc )
	GFXDECODE_ENTRY( "gfx1", 0, tiles8x8x3_layout,           0, 16 )
	GFXDECODE_ENTRY( "reels", 0, tiles8x32x4alt_layout, 128+64,  4 )
	GFXDECODE_ENTRY( "user1", 0, tiles128x128x4_layout,    128,  4 )
GFXDECODE_END


static GFXDECODE_START( gfx_cmast91 )
	GFXDECODE_ENTRY( "gfx1", 0, tiles8x8x3_layout,        0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, tiles8x32x4_layout,  128+64,  4 )  // or is there a register for the +64?
	GFXDECODE_ENTRY( "user1", 0, tiles256x128x4_layout, 128,  4 )
GFXDECODE_END

#if 0 // decodes an extra plane for cmv4 / cmasterb, not sure if we need to
static GFXDECODE_START( gfx_cmasterb )
	GFXDECODE_ENTRY( "gfx1", 0, tiles8x8x3_layout,  0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, tiles8x32x5_layout, 0,  4 )
GFXDECODE_END
#endif

static GFXDECODE_START( gfx_megaline )
	GFXDECODE_ENTRY( "gfx1", 0, tiles8x8x4_layout,    0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, tiles8x32x4_layout, 128,  8 )
GFXDECODE_END

static GFXDECODE_START( gfx_sangho )
	GFXDECODE_ENTRY( "gfx1", 0, sangho_charlayout,   0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, sangho_tilelayout, 128,  8 )
/* 7*16,16 title girl in 1st color
   6*16,16 watermelon in game
   4*16,16 blueberry in game
   3*16,16 cherries in game
   2*16,16 oranges and title girl in game
   1*16,16 nines in game
*/
GFXDECODE_END

static GFXDECODE_START( gfx_super9 )
	GFXDECODE_ENTRY( "gfx1", 0, super9_charlayout,   0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, super9_tilelayout, 128,  8 )
GFXDECODE_END

static GFXDECODE_START( gfx_flaming7 )  // gfx 2 still wrong...
	GFXDECODE_ENTRY( "gfx1", 0, flaming7_charlayout,   0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, flaming7_tilelayout, 104,  8 )
GFXDECODE_END

static GFXDECODE_START( gfx_flam7_tw )  // gfx 2 still wrong...
	GFXDECODE_ENTRY( "gfx1", 0, flam7_tw_charlayout,   0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, flam7_tw_tilelayout, 104,  8 )
GFXDECODE_END


static const gfx_layout tiles8x32_4bpp_layout =
{
	8,32,
	RGN_FRAC(1,4),
	4,
	{ RGN_FRAC(0,4), RGN_FRAC(1,4), RGN_FRAC(2,4), RGN_FRAC(3,4) },
	{ 0, 1, 2, 3, 4, 5, 6, 7},
	{ 0*8, 1*8, 2*8, 3*8, 4*8, 5*8, 6*8, 7*8, 8*8, 9*8, 10*8, 11*8, 12*8,
		13*8, 14*8, 15*8, 16*8, 17*8, 18*8, 19*8, 20*8, 21*8, 22*8, 23*8,
		24*8, 25*8, 26*8, 27*8, 28*8, 29*8, 30*8, 31*8 },
	32*8
};

static const gfx_layout tiles8x8_3bpp_layout =
{
	8,8,
	RGN_FRAC(1,3),
	3,
	{ RGN_FRAC(0,3), RGN_FRAC(1,3), RGN_FRAC(2,3) },
	{ 0, 1, 2, 3, 4, 5, 6, 7},
	{ 0*8, 1*8, 2*8, 3*8, 4*8, 5*8, 6*8, 7*8 },
	8*8
};

static GFXDECODE_START( gfx_nfm )
	GFXDECODE_ENTRY( "tilegfx", 0, tiles8x8_3bpp_layout,       0, 16 )
	GFXDECODE_ENTRY( "reelgfx", 0, tiles8x32_4bpp_layout, 128+64,  4 )
	GFXDECODE_ENTRY( "user1",   0, gfx_8x8x8_raw,              0, 16 )
GFXDECODE_END


static const gfx_layout tiles8x8x3_miss1bpp_layout =
{
	8,8,
	RGN_FRAC(1,1),
	3,
	{ 1, 2, 3 },
	{ 8, 12, 0, 4, 24, 28, 16, 20 },
	{ 0*32, 1*32, 2*32, 3*32, 4*32, 5*32, 6*32, 7*32 },
	8*32
};


static const gfx_layout tiles8x32x4alt2_layout =
{
	8,32,
	RGN_FRAC(1,1),
	4,
	{ 0, 1, 2, 3 },
	{ 4, 0, 12, 8, 20, 16, 28, 24 },
	{ STEP32(0,32) },
	32*32
};


static GFXDECODE_START( gfx_unkch )
	GFXDECODE_ENTRY( "gfx1", 0, gfx_8x8x4_packed_lsb,   0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, tiles8x32x4alt2_layout, 0, 16 )
GFXDECODE_END

static const gfx_layout tilescherrys_layout =
{
	8,32,
	RGN_FRAC(1,1),
	4,
	{ 3, 2, 1, 0 },
	{  8, 12, 0, 4, 24, 28, 16, 20 },
	{ STEP32(0,32) },
	32*32
};

static GFXDECODE_START( gfx_cherrys )
	GFXDECODE_ENTRY( "gfx1", 0, tiles8x8x3_miss1bpp_layout,   0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, tilescherrys_layout,        128,  8 )
GFXDECODE_END


static const gfx_layout tiles8x32x4pkr_layout =
{
	8,32,           // 8*32 characters
	RGN_FRAC(1,1),  // 1024 characters
	4,              // 4 bits per pixel
	{ 0, 2, 4, 6 }, // the bitplanes are packed in one byte
	{ 0*8+0, 0*8+1, 1*8+0, 1*8+1, 2*8+0, 2*8+1, 3*8+0, 3*8+1 },
	{ 0*32, 1*32, 2*32, 3*32, 4*32, 5*32, 6*32, 7*32,
		8*32, 9*32, 10*32, 11*32, 12*32, 13*32, 14*32, 15*32,
		16*32, 17*32, 18*32, 19*32, 20*32, 21*32, 22*32, 23*32,
		24*32, 25*32, 26*32, 27*32, 28*32, 29*32, 30*32, 31*32 },
	8*32*4          // every char takes 128 consecutive bytes
};

static GFXDECODE_START( gfx_pkrmast )
	GFXDECODE_ENTRY( "gfx1", 0, charlayout,                 0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, tiles8x32x4pkr_layout, 128+64, 16 )
GFXDECODE_END

static GFXDECODE_START( gfx_cmfb55 )
	GFXDECODE_ENTRY( "gfx1", 0, charlayout,                 0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, tiles8x32x4pkr_layout, 128+64, 16 )
	GFXDECODE_ENTRY( "user1", 0, tiles128x128x4_layout,   128,  4 )
GFXDECODE_END

static const gfx_layout cmast97_layout =
{
	8,8,
	RGN_FRAC(1,1),
	4,
	{ 0, 1, 2, 3 },
	{ 8, 12, 0, 4, 24, 28, 16, 20 },
	{ 0*32, 1*32, 2*32, 3*32, 4*32, 5*32, 6*32, 7*32 },
	8*32
};

static const gfx_layout cmast97_layout32 =
	{
	8,32,
	RGN_FRAC(1,1),
	4,
	{ 0,1,2,3 },
	{ 8,12,0,4,24,28, 16,20 },
	{ 0*32, 1*32, 2*32, 3*32, 4*32, 5*32, 6*32, 7*32, 8*32, 9*32, 10*32, 11*32,
		12*32, 13*32, 14*32, 15*32, 16*32, 17*32, 18*32, 19*32, 20*32, 21*32,
		22*32, 23*32, 24*32, 25*32, 26*32, 27*32, 28*32, 29*32, 30*32, 31*32 },
	32*32
};

static GFXDECODE_START( gfx_cmast97 )
	GFXDECODE_ENTRY( "gfx", 0,       cmast97_layout,   0x0, 16 )
	GFXDECODE_ENTRY( "gfx", 0x20000, cmast97_layout32, 0x0, 16 )
	GFXDECODE_ENTRY( "gfx", 0x40000, cmast97_layout,   0x0, 16 )
GFXDECODE_END

static const gfx_layout animalhs_tiles8x32_layout =
{
	8,32,
	RGN_FRAC(1,1),
	4,
	{ STEP4(0,1) },
	{ STEP8(0,4) },
	{ STEP32(0,32) },
	32*32
};

static GFXDECODE_START( gfx_animalhs )
	GFXDECODE_ENTRY( "gfx1", 0, gfx_8x8x4_packed_msb,           0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, animalhs_tiles8x32_layout, 128+64,  4 )
GFXDECODE_END

static GFXDECODE_START( gfx_rolling )
	GFXDECODE_ENTRY( "gfx1", 0, gfx_8x8x4_packed_lsb,      0, 16 )
	GFXDECODE_ENTRY( "gfx2", 0, animalhs_tiles8x32_layout, 0, 16 )
GFXDECODE_END


void wingco_state::system_outputa_w(uint8_t data)
{
	//popmessage("system_outputa_w %02x",data);
}


void wingco_state::system_outputb_w(uint8_t data)
{
	//popmessage("system_outputb_w %02x",data);
}


void wingco_state::system_outputc_w(uint8_t data)
{
	m_nmi_enable = data & 8;
	m_vidreg = data & 2;
	//popmessage("system_outputc_w %02x",data);

	if (!m_nmi_enable)
		m_maincpu->set_input_line(INPUT_LINE_NMI, CLEAR_LINE);
	
	m_ticket_dispenser->motor_w(!BIT(data, 7));
}

void wingco_state::ay8910_outputa_w(uint8_t data)
{
	//popmessage("ay8910_outputa_w %02x", data);
}

void wingco_state::ay8910_outputb_w(uint8_t data)
{
	//popmessage("ay8910_outputb_w %02x", data);
}


uint8_t wingco_state::tetin3_r()
{
	uint8_t ret = ioport("IN3")->read();

	if(ret == 0xfe)  // r > LUCKY TO TETRIS 
	{
		if(m_tcount++ == 2)
		{
			m_z80_p02 = true;
			m_tcount = 0;
		}
		ret = 0xfe;
	}

	if(ret == 0xfd)  // t > TETRIS TO LUCKY 
	{
		if(m_tcount++ == 2)
		{
			m_z80_p02 = false;
			m_tcount = 0;
		}
		ret = 0xfd;
	}
	return ret;
}

uint8_t wingco_state::z80_io_r(offs_t offset)
{
	if(offset == 0x01)
		return  0x00;  // si retorno distinto de cero inhibe el game swap (comprobado) Asigan un input toggle para darle funcionalidad.

	if(offset == 0x02)
		return  m_z80_p02;

	if(offset == 0x32)
		return  00;

	if(offset == 0xc0)
	{
		logerror("z80_io_r: offset:%02x\n", offset); 
		return  m_z80_io_c0;
	}

//	logerror("z80_io_r: offset:%02x\n", offset);  // investigar funcionalidad ports 0x31, 0x32, 0xc0.
	return machine().rand() & 0x0f;
}

void wingco_state::z80_io_w(offs_t offset, uint8_t data)
{
	if(offset == 0xc0)
		m_z80_io_c0 = data;
	logerror("Z80_io_w(): offset:%02x - data: %02x\n", offset, data);  // investigar funcionalidad port 0xc0
}

void wingco_state::tmcu_io_w(offs_t offset, uint8_t data)
{
	if ((offset != 0x122) & (offset != 0x123)) 
	logerror("tmcu_io Write: Offs:%04x - Data:%02x\n", offset, data);
}

uint8_t wingco_state::tmcu_io_r(offs_t offset)
{
	return 0x00;
}

void wingco_state::tmcu_p1_out(uint8_t data)
{
	m_mcu_p1 = data;
//	logerror("MCU Port1:%02x\n", tmcu_p1_out);

}


constexpr XTAL MASTER_CLOCK = 12_MHz_XTAL;
constexpr XTAL CPU_CLOCK    = MASTER_CLOCK / 4;
constexpr XTAL PSG_CLOCK    = MASTER_CLOCK / 4;
constexpr XTAL AY_CLOCK     = MASTER_CLOCK / 8;
#define OKI_CLOCK       1056000      // unverified resonator

void goldstar_state::goldstar(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &goldstar_state::goldstar_map);
	m_maincpu->set_addrmap(AS_IO, &goldstar_state::goldstar_readport);

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
	screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(goldstar_state::screen_update_goldstar<false>));
	screen.screen_vblank().set_inputline(m_maincpu, 0, HOLD_LINE);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_goldstar);
	PALETTE(config, m_palette).set_format(palette_device::BGR_233, 256);
	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();
	ay8910_device &aysnd(AY8910(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW4");
	aysnd.port_b_read_callback().set_ioport("DSW3");
	aysnd.add_route(ALL_OUTPUTS, "mono", 0.50);

	OKIM6295(config, "oki", OKI_CLOCK, okim6295_device::PIN7_HIGH).add_route(ALL_OUTPUTS, "mono", 1.0);  // clock frequency & pin 7 not verified

	// payout hardware
	TICKET_DISPENSER(config, m_ticket_dispenser, attotime::from_msec(50));
}


void goldstar_state::goldstbl(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &goldstar_state::goldstar_map);
	m_maincpu->set_addrmap(AS_IO, &goldstar_state::goldstar_readport);

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(goldstar_state::screen_update_goldstar<false>));
	screen.screen_vblank().set_inputline(m_maincpu, 0, HOLD_LINE);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_bl);
	PALETTE(config, m_palette).set_format(palette_device::BGR_233, 256);
	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();
	ay8910_device &aysnd(AY8910(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW4");
	aysnd.port_b_read_callback().set_ioport("DSW3");
	aysnd.add_route(ALL_OUTPUTS, "mono", 0.50);

	OKIM6295(config, "oki", OKI_CLOCK, okim6295_device::PIN7_HIGH).add_route(ALL_OUTPUTS, "mono", 1.0);  // clock frequency & pin 7 not verified

	// payout hardware
	TICKET_DISPENSER(config, m_ticket_dispenser, attotime::from_msec(50));
}

void goldstar_state::moonlght(machine_config &config)
{
	goldstbl(config);

	m_gfxdecode->set_info(gfx_ml);
}

void goldstar_state::goldfrui(machine_config &config)
{
	goldstbl(config);

	m_gfxdecode->set_info(gfx_goldfrui);
}


void sanghopm_state::star100(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &sanghopm_state::star100_map);
	m_maincpu->set_addrmap(AS_IO, &sanghopm_state::star100_readport);

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
	screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(sanghopm_state::screen_update_sangho));
	screen.screen_vblank().set_inputline(m_maincpu, 0, HOLD_LINE);

	PALETTE(config, m_palette).set_entries(0x100);
	RAMDAC(config, "ramdac", 0, "palette").set_addrmap(0, &sanghopm_state::ramdac_map);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_sangho);

	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();
	ay8910_device &aysnd(AY8910(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW5");
	aysnd.port_b_read_callback().set_ioport("DSW6");
	aysnd.add_route(ALL_OUTPUTS, "mono", 0.50);

	OKIM6295(config, "oki", OKI_CLOCK, okim6295_device::PIN7_HIGH).add_route(ALL_OUTPUTS, "mono", 1.0);  // clock frequency & pin 7 not verified
}


void goldstar_state::super9(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &goldstar_state::super9_map);

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
//  screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(goldstar_state::screen_update_goldstar<false>));
	screen.screen_vblank().set_inputline(m_maincpu, 0, HOLD_LINE);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_super9);
	PALETTE(config, m_palette).set_format(palette_device::BGR_233, 256);
	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();
	ay8910_device &aysnd(AY8910(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW4");
	aysnd.port_b_read_callback().set_ioport("DSW3");
	aysnd.add_route(ALL_OUTPUTS, "mono", 0.50);

	OKIM6295(config, "oki", 1_MHz_XTAL, okim6295_device::PIN7_HIGH).add_route(ALL_OUTPUTS, "mono", 1.0);  // pin 7 not verified
}


void goldstar_state::cm_palette(palette_device &palette) const
{
	// BBGGGRRR
	uint8_t const *const proms = memregion("proms")->base();
	for (int i = 0; i < 0x100; i++)
	{
		uint8_t const data = proms[0x000 + i] | (proms[0x100 + i] << 4);
		palette.set_pen_color(i, pal3bit(data >> 0), pal3bit(data >> 3), pal2bit(data >> 6));
	}
}

void cmaster_state::cmast91_palette(palette_device &palette) const
{
	uint8_t const *const proms = memregion("proms")->base();
	for (int i = 0; i < 0x100; i++)
	{
		int const b = pal4bit(proms[0x000 + i]);
		int const g = pal4bit(proms[0x100 + i]);
		int const r = pal4bit(proms[0x200 + i]);

		palette.set_pen_color(i, rgb_t(r, g, b));
	}
}

void goldstar_state::lucky8_palette(palette_device &palette) const
{
	// BBGGGRRR
	uint8_t const *proms;

	proms = memregion("proms")->base();
	for (int i = 0; i < 0x100; i++)
	{
		uint8_t const data = proms[0x000 + i] | (proms[0x100 + i] << 4);
		palette.set_pen_color(i, pal3bit(data >> 0), pal3bit(data >> 3), pal2bit(data >> 6));
	}

	proms = memregion("proms2")->base();
	for (int i = 0; i < 0x20; i++)
	{
		uint8_t const data = proms[i];
		palette.set_pen_color(i + 0x80, pal3bit(data >> 0), pal3bit(data >> 3), pal2bit(data >> 6));
	}
}

void cmaster_state::nfm_palette(palette_device &palette) const
{
	// BBGGGRRR
	uint8_t const *const colours = memregion("colours")->base();
	for (int i = 0; i < 0x100; i++)
	{
		uint8_t const data = bitswap<8>(colours[0x000 + i], 3, 2, 1, 0, 7, 6, 5, 4);
		palette.set_pen_color(i, pal3bit(data >> 0), pal3bit(data >> 3), pal2bit(data >> 6));
	}

	// TODO: what's 0x100-0x1ff for? For the currently undecoded user1 ROM?
}


void cb3_state::ncb3(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &cb3_state::ncb3_map);
	m_maincpu->set_addrmap(AS_IO, &cb3_state::ncb3_readwriteport);

	I8255A(config, m_ppi[0]);
	m_ppi[0]->in_pa_callback().set_ioport("IN0");
	m_ppi[0]->in_pb_callback().set_ioport("IN3");  // Player2 controls, confirmed

	I8255A(config, m_ppi[1]);
	m_ppi[1]->in_pa_callback().set_ioport("IN1");
	m_ppi[1]->in_pb_callback().set_ioport("IN2");
	m_ppi[1]->in_pc_callback().set_ioport("DSW1");

	I8255A(config, m_ppi[2]);
	m_ppi[2]->in_pa_callback().set_ioport("DSW2");

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
//  screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(cb3_state::screen_update_goldstar<false>));
	screen.screen_vblank().set_inputline(m_maincpu, 0, HOLD_LINE);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_ncb3);
	PALETTE(config, m_palette, FUNC(cb3_state::cm_palette), 256);

	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();

	SN76489(config, "snsnd", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);

	ay8910_device &aysnd(AY8910(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW4");
	aysnd.port_b_read_callback().set_ioport("DSW3");
	aysnd.add_route(ALL_OUTPUTS, "mono", 0.50);
}

void cb3_state::cb3c(machine_config &config)
{
	ncb3(config);
	m_gfxdecode->set_info(gfx_cb3c);
}

void cb3_state::cb3e(machine_config &config)
{
	ncb3(config);
	m_gfxdecode->set_info(gfx_cb3e);
}

void cb3_state::chryangla(machine_config &config)
{
	ncb3(config);

	m_maincpu->set_addrmap(AS_PROGRAM, &cb3_state::chryangla_map);
	m_maincpu->set_addrmap(AS_OPCODES, &cb3_state::chryangla_decrypted_opcodes_map);

	m_palette->set_init(FUNC(cb3_state::lucky8_palette));
}

void cb3_state::chrygld(machine_config &config)
{
	ncb3(config);
	m_gfxdecode->set_info(gfx_chry10);
}

void cb3_state::cherrys(machine_config &config)
{
	ncb3(config);
	m_gfxdecode->set_info(gfx_cherrys);
}

void goldstar_state::wcherry(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &goldstar_state::wcherry_map);
	m_maincpu->set_addrmap(AS_IO, &goldstar_state::wcherry_readwriteport);

	I8255A(config, m_ppi[0]);
	m_ppi[0]->in_pa_callback().set_ioport("IN0");
	m_ppi[0]->in_pb_callback().set_ioport("IN3");  // Player2 controls, confirmed

	I8255A(config, m_ppi[1]);
	m_ppi[1]->in_pa_callback().set_ioport("IN1");
	m_ppi[1]->in_pb_callback().set_ioport("IN2");
	m_ppi[1]->in_pc_callback().set_ioport("DSW1");

	I8255A(config, m_ppi[2]);
	m_ppi[2]->in_pa_callback().set_ioport("DSW2");

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
//  screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(goldstar_state::screen_update_goldstar<false>));
	screen.screen_vblank().set_inputline(m_maincpu, 0, HOLD_LINE);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_cb3e);
	PALETTE(config, m_palette, FUNC(goldstar_state::cm_palette), 256);
	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();

	SN76489(config, "snsnd", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);

	ay8910_device &aysnd(AY8910(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW4");
	aysnd.port_b_read_callback().set_ioport("DSW3");
	aysnd.add_route(ALL_OUTPUTS, "mono", 0.50);
}


void cmaster_state::cm(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &cmaster_state::cm_map);
	m_maincpu->set_addrmap(AS_IO, &cmaster_state::cm_portmap);

	I8255A(config, m_ppi[0]);
	m_ppi[0]->in_pa_callback().set_ioport("IN0");
	m_ppi[0]->in_pb_callback().set_ioport("IN1");
	m_ppi[0]->in_pc_callback().set_ioport("IN2");

	I8255A(config, m_ppi[1]);
	m_ppi[1]->in_pa_callback().set_ioport("DSW1");
	m_ppi[1]->in_pb_callback().set_ioport("DSW2");
	m_ppi[1]->in_pc_callback().set_ioport("DSW3");

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
//  screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(cmaster_state::screen_update_goldstar<false>));
	screen.screen_vblank().set_inputline(m_maincpu, 0, HOLD_LINE);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_cmbitmap);
	PALETTE(config, m_palette, FUNC(cmaster_state::cm_palette), 256);
	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();
	ay8910_device &aysnd(AY8910(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW4");
	aysnd.port_b_read_callback().set_ioport("DSW5");
	aysnd.add_route(ALL_OUTPUTS, "mono", 0.50);
	
	TICKET_DISPENSER(config, m_ticket_dispenser, attotime::from_msec(50));
}

void cmaster_state::cmasterc(machine_config &config)
{
	cm(config);

	m_gfxdecode->set_info(gfx_cmasterc);
}

void cmaster_state::cmfb55(machine_config &config)
{
	cm(config);

	m_gfxdecode->set_info(gfx_cmfb55);
}

void cmast97_state::cmast97(machine_config &config)
{
	cm(config);

	m_maincpu->set_addrmap(AS_PROGRAM, &cmast97_state::cmast97_map);
	m_maincpu->set_addrmap(AS_IO, &cmast97_state::cmast97_portmap);

	subdevice<screen_device>("screen")->set_screen_update(FUNC(cmast97_state::screen_update_cmast97));

	m_gfxdecode->set_info(gfx_cmast97);

	m_palette->set_init(FUNC(cmast97_state::cmast97_palette_init));
	m_palette->set_entries(512);

	config.device_remove("ppi8255_0");
	config.device_remove("ppi8255_1");
}

void cmaster_state::chryangl(machine_config &config)
{
	cm(config);

	m_maincpu->set_addrmap(AS_OPCODES, &cmaster_state::chryangl_decrypted_opcodes_map);
}

void cmaster_state::cmtetriskr(machine_config &config)
{
	chryangl(config);

	m_maincpu->set_addrmap(AS_IO, &cmaster_state::cmtetriskr_portmap);

	config.device_remove("ppi8255_0");
	config.device_remove("ppi8255_1");
}

void cmaster_state::cmv4zg(machine_config &config)
{
	cm(config);

	m_maincpu->set_addrmap(AS_IO, &cmaster_state::cmv4zg_portmap);

	config.device_remove("ppi8255_0");
	config.device_remove("ppi8255_1");
}

void cmaster_state::super7(machine_config &config)
{
	cmv4zg(config);

	m_maincpu->set_addrmap(AS_PROGRAM, &cmaster_state::super7_map);
	m_maincpu->set_addrmap(AS_IO, &cmaster_state::super7_portmap);
	m_maincpu->set_addrmap(AS_OPCODES, &cmaster_state::chryangl_decrypted_opcodes_map);

	subdevice<ay8910_device>("aysnd")->port_a_read_callback().set_ioport("DSW1");
	subdevice<ay8910_device>("aysnd")->port_b_read_callback().set_ioport("DSW2");
}

void cmaster_state::cmast91(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &cmaster_state::cm_map);
	m_maincpu->set_addrmap(AS_IO, &cmaster_state::cmast91_portmap);

	I8255A(config, m_ppi[0]);
	m_ppi[0]->in_pa_callback().set_ioport("DSW1");
	m_ppi[0]->in_pb_callback().set_ioport("DSW2");
	m_ppi[0]->in_pc_callback().set_ioport("DSW3");

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
//  screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 1*8, 31*8-1);
	screen.set_screen_update(FUNC(cmaster_state::screen_update_cmast91));
	screen.screen_vblank().set_inputline(m_maincpu, 0, HOLD_LINE);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_cmast91);
	PALETTE(config, m_palette, FUNC(cmaster_state::cmast91_palette), 256);
	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();
	ay8910_device &aysnd(AY8910(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW4");
	aysnd.port_b_read_callback().set_ioport("DSW5");
	aysnd.add_route(ALL_OUTPUTS, "mono", 0.50);

	// payout hardware
	TICKET_DISPENSER(config, m_ticket_dispenser, attotime::from_msec(50));
}

void cmaster_state::cmast92(machine_config &config)
{
	cmast91(config);

	m_maincpu->set_addrmap(AS_PROGRAM, &cmaster_state::cmast92_map);
	m_maincpu->set_addrmap(AS_IO, &cmaster_state::cmast92_portmap);
}

void cmaster_state::eldoradd(machine_config &config)
{
	cmast92(config);

	m_gfxdecode->set_info(gfx_cmast97);  // TODO: wrong, needs correct decode
}



void wingco_state::masked_irq(int state)
{
	if (state && m_nmi_enable)
		m_maincpu->set_input_line(INPUT_LINE_NMI, ASSERT_LINE);
}

void wingco_state::lucky8(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &wingco_state::lucky8_map);
	//->m_maincpu->set_addrmap(AS_IO, &wingco_state::goldstar_readport);

	I8255A(config, m_ppi[0]);
	m_ppi[0]->in_pa_callback().set_ioport("IN0");
	m_ppi[0]->in_pb_callback().set_ioport("IN1");
	m_ppi[0]->in_pc_callback().set_ioport("IN2");

	I8255A(config, m_ppi[1]);
	m_ppi[1]->in_pa_callback().set_ioport("IN3");
	m_ppi[1]->in_pb_callback().set_ioport("IN4");
	m_ppi[1]->in_pc_callback().set_ioport("DSW1");

	I8255A(config, m_ppi[2]);
	m_ppi[2]->in_pa_callback().set_ioport("DSW2");
	m_ppi[2]->out_pa_callback().set(FUNC(wingco_state::system_outputa_w));
	m_ppi[2]->out_pb_callback().set(FUNC(wingco_state::system_outputb_w));
	m_ppi[2]->out_pc_callback().set(FUNC(wingco_state::system_outputc_w));

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
//  screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(wingco_state::screen_update_goldstar<false>));
	screen.screen_vblank().set(FUNC(wingco_state::masked_irq));

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_ncb3);
	PALETTE(config, m_palette, FUNC(wingco_state::lucky8_palette)).set_format(palette_device::BGR_233, 256);
	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();

	SN76489(config, "snsnd", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);

	ym2149_device &aysnd(YM2149(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW3");
	aysnd.port_b_read_callback().set_ioport("DSW4");
	aysnd.port_a_write_callback().set(FUNC(wingco_state::ay8910_outputa_w));
	aysnd.port_b_write_callback().set(FUNC(wingco_state::ay8910_outputb_w));
	aysnd.add_route(ALL_OUTPUTS, "mono", 0.50);

	// payout hardware
	TICKET_DISPENSER(config, m_ticket_dispenser, attotime::from_msec(200));
}

void wingco_state::nd8lines(machine_config &config)
{
	lucky8(config);

	m_maincpu->set_addrmap(AS_PROGRAM, &wingco_state::nd8lines_map);

	m_ppi[1]->in_pb_callback().set_ioport("DSW2");
	m_ppi[1]->in_pc_callback().set_ioport("DSW4");

	PALETTE(config.replace(), "palette", FUNC(wingco_state::cm_palette), 256);  // wrong

	SN76489A(config.replace(), "snsnd", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);

	config.device_remove("ppi8255_2");
	config.device_remove("aysnd");
}

void wingco_state::lucky8f(machine_config &config)
{
	lucky8(config);

	m_maincpu->set_addrmap(AS_OPCODES, &wingco_state::common_decrypted_opcodes_map);
}

void wingco_state::lucky8k(machine_config &config)
{
	lucky8(config);

	nec_315_5136_device &maincpu(NEC_315_5136(config.replace(), m_maincpu, CPU_CLOCK));
	maincpu.set_addrmap(AS_PROGRAM, &wingco_state::lucky8_map);
	maincpu.set_addrmap(AS_OPCODES, &wingco_state::common_decrypted_opcodes_map);
	maincpu.set_decrypted_tag(m_decrypted_opcodes);
}

void wingco_state::lucky8p(machine_config &config)
{
	lucky8(config);

	m_maincpu->set_addrmap(AS_PROGRAM, &wingco_state::lucky8p_map);
}

void wingco_state::superdrg(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &wingco_state::superdrg_map);
	m_maincpu->set_addrmap(AS_OPCODES, &wingco_state::superdrg_opcodes_map);

	I8255A(config, m_ppi[0]);
	m_ppi[0]->in_pa_callback().set_ioport("IN0");
	m_ppi[0]->in_pb_callback().set_ioport("IN1");
	m_ppi[0]->in_pc_callback().set_ioport("IN2");

	I8255A(config, m_ppi[1]);
	m_ppi[1]->in_pa_callback().set_ioport("IN3");
	m_ppi[1]->in_pb_callback().set_ioport("IN4");
	m_ppi[1]->in_pc_callback().set_ioport("DSW1");

	I8255A(config, m_ppi[2]);
	m_ppi[2]->in_pa_callback().set_ioport("DSW3");
	m_ppi[2]->out_pa_callback().set(FUNC(wingco_state::system_outputa_w));
	m_ppi[2]->out_pb_callback().set(FUNC(wingco_state::system_outputb_w));
	m_ppi[2]->out_pc_callback().set(FUNC(wingco_state::system_outputc_w));

	i8255_device &ppi3(I8255A(config, "ppi8255_3"));
	ppi3.in_pa_callback().set_ioport("DSW4");
	ppi3.in_pb_callback().set_ioport("DSW2");
	ppi3.in_pc_callback().set_ioport("DSW5");

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
//  screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(wingco_state::screen_update_goldstar<false>));
	screen.screen_vblank().set(FUNC(wingco_state::masked_irq));

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_animalhs);
	PALETTE(config, m_palette, FUNC(wingco_state::lucky8_palette)).set_format(palette_device::BGR_233, 256); // wrong
	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();

	SN76489(config, "snsnd", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);

	YM2413(config, "ym2413", 12_MHz_XTAL / 4).add_route(ALL_OUTPUTS, "mono", 1.0);
}

void wingco_state::luckylad(machine_config &config)
{
	lucky8(config);

	sega_315_5096_device &maincpu(SEGA_315_5096(config.replace(), m_maincpu, CPU_CLOCK));  // actually Falcon 03155096 encrypted Z80
	maincpu.set_addrmap(AS_PROGRAM, &wingco_state::lucky8_map);
	maincpu.set_addrmap(AS_OPCODES, &wingco_state::common_decrypted_opcodes_map);
	maincpu.set_decrypted_tag(":decrypted_opcodes");
}

void wingco_state::lucky8t(machine_config &config)
{
	lucky8(config);

	SN76489(config.replace(), "snsnd", 0);  // unusedÂ device
}

void wingco_state::animalw(machine_config &config)
{
	lucky8(config);

	m_maincpu->set_addrmap(AS_PROGRAM, &wingco_state::animalw_map);

	SN76489(config.replace(), "snsnd", 0);  // unusedÂ device
}


void wingco_state::super972(machine_config &config)
{
	lucky8(config);

	m_maincpu->set_addrmap(AS_OPCODES, &wingco_state::super972_decrypted_opcodes_map);
}

void wingco_state::luckybar(machine_config &config)
{
	lucky8(config);

	m_maincpu->set_addrmap(AS_PROGRAM, &wingco_state::luckybar_map);
	M68705P5(config, m_mcu, CPU_CLOCK); // unknown

	m_mcu->porta_w().set(FUNC(wingco_state::mcu_porta_w));  // MCU 0xa0 & 0xca: stx PORTA; 0xf0 & 0xf3 brset PORTA.
	m_mcu->portb_r().set(FUNC(wingco_state::mcu_portb_r));  // MCU 0xa8: lda PORTB.
	m_mcu->portb_w().set(FUNC(wingco_state::mcu_portb_w));  // MCU 0xcc: sta PORTB; 0xdc: stx PORTB.
	m_mcu->portc_w().set(FUNC(wingco_state::mcu_portc_w));  // MCU 0x90 and many; bset bclear (0-3) PORTC; 0xe4 & 0x108: sta/stx PORTC.
}


void wingco_state::bingowng(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &wingco_state::lucky8_map);
	//m_maincpu->set_addrmap(AS_IO, &wingco_state::goldstar_readport);

	I8255A(config, m_ppi[0]);
	m_ppi[0]->in_pa_callback().set_ioport("IN0");
	m_ppi[0]->in_pb_callback().set_ioport("IN1");
	m_ppi[0]->in_pc_callback().set_ioport("IN2");

	I8255A(config, m_ppi[1]);
	m_ppi[1]->in_pa_callback().set_ioport("IN3");
	m_ppi[1]->in_pb_callback().set_ioport("IN4");
	m_ppi[1]->in_pc_callback().set_ioport("DSW1");

	I8255A(config, m_ppi[2]);
	m_ppi[2]->in_pa_callback().set_ioport("DSW2");
	m_ppi[2]->out_pa_callback().set(FUNC(wingco_state::system_outputa_w));
	m_ppi[2]->out_pb_callback().set(FUNC(wingco_state::system_outputb_w));
	m_ppi[2]->out_pc_callback().set(FUNC(wingco_state::system_outputc_w));

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
//  screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(wingco_state::screen_update_bingowng));
	screen.screen_vblank().set(FUNC(wingco_state::masked_irq));

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_ncb3);
	PALETTE(config, m_palette, FUNC(wingco_state::lucky8_palette), 256);
	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	MCFG_VIDEO_START_OVERRIDE(wingco_state, bingowng)

	// sound hardware
	SPEAKER(config, "mono").front_center();

	SN76489(config, "snsnd", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);

	ay8910_device &aysnd(AY8910(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW3");
	aysnd.port_b_read_callback().set_ioport("DSW4");
	aysnd.port_a_write_callback().set(FUNC(wingco_state::ay8910_outputa_w));
	aysnd.port_b_write_callback().set(FUNC(wingco_state::ay8910_outputb_w));
	aysnd.add_route(ALL_OUTPUTS, "mono", 0.50);

	// payout hardware
	TICKET_DISPENSER(config, m_ticket_dispenser, attotime::from_msec(200));
}

void wingco_state::bingownga(machine_config &config)
{
	bingowng(config);

	m_gfxdecode->set_info(gfx_bingownga);
}


void wingco_state::flam7_w4(machine_config &config)
{
	lucky8(config);

	// basic machine hardware
	m_maincpu->set_addrmap(AS_PROGRAM, &wingco_state::flaming7_map);

	m_ppi[0]->out_pc_callback().set(FUNC(wingco_state::fl7w4_outc802_w));

	DS2401(config, m_fl7w4_id);
}

void wingco_state::flaming7(machine_config &config)
{
	lucky8(config);

	// basic machine hardware
	m_maincpu->set_addrmap(AS_PROGRAM, &wingco_state::flaming7_map);

	m_gfxdecode->set_info(gfx_flaming7);

	// to do serial protection.
	m_ppi[0]->out_pc_callback().set(FUNC(wingco_state::fl7w4_outc802_w));

	DS2401(config, m_fl7w4_id);
}

void wingco_state::flam7_tw(machine_config &config)
{
	lucky8(config);

	// basic machine hardware
	m_maincpu->set_addrmap(AS_PROGRAM, &wingco_state::flaming7_map);

	m_gfxdecode->set_info(gfx_flam7_tw);

	// to do serial protection.
	m_ppi[0]->out_pc_callback().set(FUNC(wingco_state::fl7w4_outc802_w));

	DS2401(config, m_fl7w4_id);
}

void wingco_state::mbstar(machine_config &config)
{
	lucky8(config);

	// basic machine hardware
	m_maincpu->set_addrmap(AS_PROGRAM, &wingco_state::mbstar_map);

	subdevice<screen_device>("screen")->set_screen_update(FUNC(wingco_state::screen_update_mbstar));
}



void wingco_state::magodds_palette(palette_device &palette) const
{
	uint8_t const *const proms = memregion("proms")->base();
	for (int i = 0; i < 0x100; i++)
	{
		uint8_t const b = pal4bit(proms[0x000 + i]);
		uint8_t const g = pal4bit(proms[0x100 + i]);
		uint8_t const r = pal4bit(proms[0x200 + i]);

		palette.set_pen_color(i, rgb_t(r, g, b));
	}
}

void wingco_state::magodds(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &wingco_state::magodds_map);

	I8255A(config, m_ppi[0]);
	m_ppi[0]->in_pa_callback().set_ioport("IN0");
	m_ppi[0]->in_pb_callback().set_ioport("IN1");
	m_ppi[0]->in_pc_callback().set_ioport("IN2");

	I8255A(config, m_ppi[1]);
	m_ppi[1]->in_pa_callback().set_ioport("IN3");
	m_ppi[1]->in_pb_callback().set_ioport("IN4");
	m_ppi[1]->in_pc_callback().set_ioport("DSW1");

	I8255A(config, m_ppi[2]);
	m_ppi[2]->in_pa_callback().set_ioport("DSW2");
	m_ppi[2]->out_pa_callback().set(FUNC(wingco_state::system_outputa_w));
	m_ppi[2]->out_pb_callback().set(FUNC(wingco_state::system_outputb_w));
	m_ppi[2]->out_pc_callback().set(FUNC(wingco_state::system_outputc_w));

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(wingco_state::screen_update_magical));
	screen.screen_vblank().set(FUNC(wingco_state::masked_irq));

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_magodds);
	PALETTE(config, m_palette, FUNC(wingco_state::magodds_palette), 256);
	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	MCFG_VIDEO_START_OVERRIDE(wingco_state, magical)

	// sound hardware
	SPEAKER(config, "mono").front_center();

	SN76489(config, "snsnd", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.00);  // shut up annoying whine

	ay8910_device &aysnd(AY8910(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW3");
	aysnd.port_b_read_callback().set_ioport("DSW4");
	aysnd.port_a_write_callback().set(FUNC(wingco_state::ay8910_outputa_w));
	aysnd.port_b_write_callback().set(FUNC(wingco_state::ay8910_outputb_w));
	aysnd.add_route(ALL_OUTPUTS, "mono", 0.80);
}


void goldstar_state::kkotnoli(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &goldstar_state::kkotnoli_map);

	I8255A(config, m_ppi[0]);
	m_ppi[0]->in_pa_callback().set_ioport("IN0");
	m_ppi[0]->in_pb_callback().set_ioport("IN1");
	m_ppi[0]->in_pc_callback().set_ioport("IN2");

	I8255A(config, m_ppi[1]);
	m_ppi[1]->in_pa_callback().set_ioport("IN3");
	m_ppi[1]->in_pb_callback().set_ioport("IN4");

	I8255A(config, m_ppi[2]);
	m_ppi[2]->in_pa_callback().set_ioport("DSW1");

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(goldstar_state::screen_update_goldstar<false>));
	screen.screen_vblank().set_inputline(m_maincpu, INPUT_LINE_NMI);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_ncb3);
	PALETTE(config, m_palette, FUNC(goldstar_state::lucky8_palette), 256);

	// sound hardware
	SPEAKER(config, "mono").front_center();

	SN76489(config, "snsnd", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);

	// payout hardware
	TICKET_DISPENSER(config, m_ticket_dispenser, attotime::from_msec(50));
}


void goldstar_state::ladylinr(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &goldstar_state::ladylinr_map);

	I8255A(config, m_ppi[0]);
	m_ppi[0]->in_pa_callback().set_ioport("IN0");
	m_ppi[0]->in_pb_callback().set_ioport("IN1");
	m_ppi[0]->in_pc_callback().set_ioport("IN2");

	I8255A(config, m_ppi[1]);
	m_ppi[1]->in_pa_callback().set_ioport("DSW1");

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(goldstar_state::screen_update_goldstar<false>));
	screen.screen_vblank().set_inputline(m_maincpu, INPUT_LINE_NMI);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_ncb3);
	PALETTE(config, m_palette, FUNC(goldstar_state::lucky8_palette), 256);
	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();

	SN76489(config, "snsnd", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);

	AY8930(config, "aysnd", AY_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.50);  // unused?
}


void goldstar_state::ladylinrb(machine_config &config)
{
	ladylinr(config);

	m_maincpu->set_addrmap(AS_OPCODES, &goldstar_state::common_decrypted_opcodes_map);
}


void wingco_state::wcat3(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &wingco_state::wcat3_map);
	m_maincpu->set_addrmap(AS_OPCODES, &wingco_state::super972_decrypted_opcodes_map);
	//m_maincpu->set_addrmap(AS_IO, &wingco_state::goldstar_readport);

	I8255A(config, m_ppi[0]);
	m_ppi[0]->in_pa_callback().set_ioport("IN0");
	m_ppi[0]->in_pb_callback().set_ioport("IN1");
	m_ppi[0]->in_pc_callback().set_ioport("IN2");

	I8255A(config, m_ppi[1]);
	m_ppi[1]->in_pa_callback().set_ioport("IN3");
	m_ppi[1]->in_pb_callback().set_ioport("IN4");
	m_ppi[1]->in_pc_callback().set_ioport("DSW1");

	I8255A(config, m_ppi[2]);
	m_ppi[2]->in_pa_callback().set_ioport("DSW2");
	m_ppi[2]->out_pa_callback().set(FUNC(wingco_state::system_outputa_w));
	m_ppi[2]->out_pb_callback().set(FUNC(wingco_state::system_outputb_w));
	m_ppi[2]->out_pc_callback().set(FUNC(wingco_state::system_outputc_w));

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
//  screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(wingco_state::screen_update_goldstar<false>));
	screen.screen_vblank().set_inputline(m_maincpu, INPUT_LINE_NMI);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_ncb3);
	PALETTE(config, m_palette, FUNC(wingco_state::lucky8_palette), 256);
	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();

	SN76489(config, "snsnd", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);

	ay8910_device &aysnd(AY8910(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW3");
	aysnd.port_b_read_callback().set_ioport("DSW4");
	aysnd.port_a_write_callback().set(FUNC(wingco_state::ay8910_outputa_w));
	aysnd.port_b_write_callback().set(FUNC(wingco_state::ay8910_outputb_w));
	aysnd.add_route(ALL_OUTPUTS, "mono", 0.50);
}


// diff with cm machine driver: gfxdecode, OKI & portmap
void cmaster_state::amcoe1(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &cmaster_state::cm_map);
	m_maincpu->set_addrmap(AS_IO, &cmaster_state::amcoe1_portmap);

	I8255A(config, m_ppi[0]);
	m_ppi[0]->in_pa_callback().set_ioport("IN0");
	m_ppi[0]->in_pb_callback().set_ioport("IN1");
	m_ppi[0]->in_pc_callback().set_ioport("IN2");

	I8255A(config, m_ppi[1]);
	m_ppi[1]->in_pa_callback().set_ioport("DSW1");
	m_ppi[1]->in_pb_callback().set_ioport("DSW2");
	m_ppi[1]->in_pc_callback().set_ioport("DSW3");

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
//  screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(cmaster_state::screen_update_goldstar<false>));
	screen.screen_vblank().set_inputline(m_maincpu, 0, HOLD_LINE);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_cm);
	PALETTE(config, m_palette, FUNC(cmaster_state::cm_palette), 256);
	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();
	ay8910_device &aysnd(AY8910(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW4");
	aysnd.port_b_read_callback().set_ioport("DSW5");
	aysnd.add_route(ALL_OUTPUTS, "mono", 0.50);

	OKIM6295(config, "oki", OKI_CLOCK, okim6295_device::PIN7_HIGH).add_route(ALL_OUTPUTS, "mono", 1.0);  // clock frequency & pin 7 not verified
}


// diff with cm machine driver: gfxdecode, OKI, portmap & tilemaps rect size/position
void cmaster_state::amcoe1a(machine_config &config)
{
	amcoe1(config);

	// video hardware
	subdevice<screen_device>("screen")->set_screen_update(FUNC(cmaster_state::screen_update_amcoe1a));
}


// diff with cm machine driver: gfxdecode, AY8910 volume & portmap
void cmaster_state::amcoe2(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &cmaster_state::cm_map);
	m_maincpu->set_addrmap(AS_IO, &cmaster_state::amcoe2_portmap);

	I8255A(config, m_ppi[0]);
	m_ppi[0]->in_pa_callback().set_ioport("IN0");
	m_ppi[0]->in_pb_callback().set_ioport("IN1");
	m_ppi[0]->in_pc_callback().set_ioport("IN2");

	I8255A(config, m_ppi[1]);
	m_ppi[1]->in_pa_callback().set_ioport("DSW1");
	m_ppi[1]->in_pb_callback().set_ioport("DSW2");
	m_ppi[1]->in_pc_callback().set_ioport("DSW3");

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
//  screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(cmaster_state::screen_update_goldstar<false>));
	screen.screen_vblank().set_inputline(m_maincpu, 0, HOLD_LINE);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_cm);
	PALETTE(config, m_palette, FUNC(cmaster_state::cm_palette), 256);
	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();
	ay8910_device &aysnd(AY8910(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW4");
	aysnd.port_b_read_callback().set_ioport("DSW5");
	aysnd.add_route(ALL_OUTPUTS, "mono", 2.00);  // analyzed for clips
}

void cmaster_state::nfm(machine_config &config)
{
	amcoe2(config);

	// basic machine hardware
	m_maincpu->set_addrmap(AS_PROGRAM, &cmaster_state::nfm_map);
	m_maincpu->set_addrmap(AS_IO, &cmaster_state::nfm_portmap);

	m_gfxdecode->set_info(gfx_nfm);

	m_palette->set_init(FUNC(cmaster_state::nfm_palette));

	OKIM6295(config, "oki", OKI_CLOCK, okim6295_device::PIN7_HIGH).add_route(ALL_OUTPUTS, "mono", 1.0);  // clock frequency & pin 7 not verified
}

void cmaster_state::amaztsk(machine_config &config)
{
	nfm(config);

	m_maincpu->set_addrmap(AS_PROGRAM, &cmaster_state::cm_map);  // expects NVRAM instead of ROM in the 0xd000 - 0xd7ff range
}

void unkch_state::vblank_irq(int state)
{
	if (state && m_vblank_irq_enable)
		m_maincpu->set_input_line(INPUT_LINE_NMI, ASSERT_LINE);
}

void unkch_state::unkch(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &unkch_state::unkch_map);
	m_maincpu->set_addrmap(AS_IO, &unkch_state::unkch_portmap);

	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
//  screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 1*8, 31*8-1);
	screen.set_screen_update(FUNC(unkch_state::screen_update_unkch));
	screen.screen_vblank().set(FUNC(unkch_state::vblank_irq));

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_unkch);
	PALETTE(config, m_palette).set_format(palette_device::xBGR_555, 512);

	// sound hardware
	SPEAKER(config, "mono").front_center();
	ay8910_device &aysnd(AY8910(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW1");
	aysnd.port_b_read_callback().set_ioport("DSW2");
	aysnd.add_route(ALL_OUTPUTS, "mono", 0.50);

	// payout hardware
	TICKET_DISPENSER(config, m_ticket_dispenser, attotime::from_msec(200));
}

void unkch_state::rolling(machine_config &config)
{
	unkch(config);

	m_gfxdecode->set_info(gfx_rolling);
}

// hw unknown - should be somewhat similar to cm
void cmaster_state::pkrmast(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &cmaster_state::cm_map);
	m_maincpu->set_addrmap(AS_IO, &cmaster_state::pkrmast_portmap);

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
//  screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(cmaster_state::screen_update_goldstar<false>));
	screen.screen_vblank().set_inputline(m_maincpu, 0, HOLD_LINE);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_pkrmast);
	PALETTE(config, m_palette, FUNC(cmaster_state::cm_palette), 256);
	NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();
	ay8910_device &aysnd(AY8910(config, "aysnd", AY_CLOCK));
	aysnd.port_a_read_callback().set_ioport("DSW4");
	aysnd.port_b_read_callback().set_ioport("DSW5");
	aysnd.add_route(ALL_OUTPUTS, "mono", 0.50);
}

void cmaster_state::jkrmast(machine_config &config)
{
	pkrmast(config);

	m_maincpu->set_addrmap(AS_PROGRAM, &cmaster_state::jkrmast_map);
	m_maincpu->set_addrmap(AS_IO, &cmaster_state::jkrmast_portmap);

	subdevice<screen_device>("screen")->set_screen_update(FUNC(cmaster_state::screen_update_goldstar<true>));
	MCFG_VIDEO_START_OVERRIDE(cmaster_state, jkrmast)

	subdevice<ay8910_device>("aysnd")->port_a_read_callback().set_ioport("DSW3");
	subdevice<ay8910_device>("aysnd")->port_b_read_callback().set_ioport("DSW4");
}

void cmaster_state::crazybon(machine_config &config)
{
	pkrmast(config);

	m_maincpu->set_addrmap(AS_IO, &cmaster_state::crazybon_portmap);
}

void cmaster_state::crazybonb(machine_config &config)
{
	pkrmast(config);

	m_maincpu->set_addrmap(AS_OPCODES, &cmaster_state::super972_decrypted_opcodes_map);
}

void cmaster_state::animalhs(machine_config &config)
{
	crazybonb(config);

	m_maincpu->set_addrmap(AS_PROGRAM, &cmaster_state::animalhs_map);
	m_maincpu->set_addrmap(AS_IO, &cmaster_state::animalhs_portmap);

	subdevice<screen_device>("screen")->set_screen_update(FUNC(cmaster_state::screen_update_cmast91));
	subdevice<screen_device>("screen")->set_size(64*8, 32*8);
	subdevice<screen_device>("screen")->set_visarea(0*8, 64*8-1, 1*8+4, 30*8+4-1);
	m_gfxdecode->set_info(gfx_animalhs);
	m_palette->set_init(FUNC(cmaster_state::cmast91_palette));

	subdevice<ay8910_device>("aysnd")->port_a_read_callback().set_ioport("DSW5");
	subdevice<ay8910_device>("aysnd")->port_b_read_callback().set_ioport("DSW6");
}

void cmaster_state::eldoraddoa(machine_config &config)
{
	animalhs(config);

	m_maincpu->set_addrmap(AS_IO, &cmaster_state::eldoraddoa_portmap);
}

void goldstar_state::megaline(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, CPU_CLOCK);
	m_maincpu->set_addrmap(AS_PROGRAM, &goldstar_state::megaline_map);
	m_maincpu->set_addrmap(AS_IO, &goldstar_state::megaline_portmap);

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
//  screen.set_vblank_time(ATTOSECONDS_IN_USEC(0));
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(goldstar_state::screen_update_goldstar<false>));
	screen.screen_vblank().set_inputline(m_maincpu, INPUT_LINE_NMI);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_megaline);
	PALETTE(config, m_palette, FUNC(goldstar_state::lucky8_palette), 256);
//  NVRAM(config, "nvram", nvram_device::DEFAULT_ALL_1);

	// sound hardware
	SPEAKER(config, "mono").front_center();

	SN76489(config, "sn1", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);
	SN76489(config, "sn2", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);
	SN76489(config, "sn3", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);
}


void unkch_state::bonusch(machine_config &config)
{
	// basic machine hardware
	Z80(config, m_maincpu, 12_MHz_XTAL / 2);
	m_maincpu->set_addrmap(AS_PROGRAM, &unkch_state::bonusch_map);
	m_maincpu->set_addrmap(AS_IO, &unkch_state::bonusch_portmap);

	I80C51(config, "mcu", 12_MHz_XTAL).set_disable();

	// video hardware
	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(unkch_state::screen_update_goldstar<false>));
	screen.screen_vblank().set_inputline(m_maincpu, INPUT_LINE_NMI);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_megaline);
	PALETTE(config, m_palette, FUNC(unkch_state::lucky8_palette), 256);

	// sound hardware
	SPEAKER(config, "mono").front_center();

	SN76489(config, "sn1", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);
	SN76489(config, "sn2", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);
	SN76489(config, "sn3", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);
	SN76489(config, "sn4", PSG_CLOCK).add_route(ALL_OUTPUTS, "mono", 0.80);
}

void goldstar_state::feverch(machine_config &config)
{
	Z80(config, m_maincpu, 12'000'000 / 2); // clock not verified
	m_maincpu->set_addrmap(AS_PROGRAM, &goldstar_state::feverch_map);
	m_maincpu->set_addrmap(AS_IO, &goldstar_state::feverch_portmap);

	I8255A(config, m_ppi[0]);
	m_ppi[0]->in_pa_callback().set_ioport("IN0");
	m_ppi[0]->in_pb_callback().set_ioport("IN1");
	m_ppi[0]->in_pc_callback().set_ioport("IN2");

	I8255A(config, m_ppi[1]);
	m_ppi[1]->in_pa_callback().set_ioport("IN3");
	m_ppi[1]->in_pb_callback().set_ioport("IN4");
	m_ppi[1]->in_pc_callback().set_ioport("DSW1");

	I8255A(config, m_ppi[2]);
	m_ppi[2]->in_pa_callback().set_ioport("DSW4");
	m_ppi[2]->in_pb_callback().set_ioport("DSW2");
	m_ppi[2]->in_pc_callback().set_ioport("DSW3");

	screen_device &screen(SCREEN(config, "screen", SCREEN_TYPE_RASTER));
	screen.set_refresh_hz(60);
	screen.set_size(64*8, 32*8);
	screen.set_visarea(0*8, 64*8-1, 2*8, 30*8-1);
	screen.set_screen_update(FUNC(goldstar_state::screen_update_goldstar<false>));
	screen.screen_vblank().set_inputline(m_maincpu, INPUT_LINE_NMI);

	GFXDECODE(config, m_gfxdecode, m_palette, gfx_ncb3);
	PALETTE(config, m_palette, FUNC(goldstar_state::cm_palette), 256);

	SPEAKER(config, "mono").front_center();

	SN76489A(config, "sn1", 12'000'000 / 12).add_route(ALL_OUTPUTS, "mono", 0.80);  // actually SN76489AN, clock not verified
	SN76489A(config, "sn2", 12'000'000 / 12).add_route(ALL_OUTPUTS, "mono", 0.80);  // actually SN76489AN, clock not verified
	SN76489A(config, "sn3", 12'000'000 / 12).add_route(ALL_OUTPUTS, "mono", 0.80);  // actually SN76489AN, clock not verified
}


void wingco_state::lucky8tet(machine_config &config)
{
	lucky8(config);

	// basic machine hardware
	m_maincpu->set_addrmap(AS_IO, &wingco_state::lucky8tet_ioport);

	I80C51(config, m_tmcu, 24'500'000);  // Internal Clock
	m_tmcu->set_addrmap(AS_PROGRAM, &wingco_state::tmcu_program_map);
	m_tmcu->set_addrmap(AS_IO, &wingco_state::tmcu_io_map);

	m_tmcu->port_out_cb<1>().set(FUNC(wingco_state::tmcu_p1_out));

	m_tmcu->port_in_cb<3>().set_ioport("DB_DIP").mask(0x0f);  // P3.0-P3.3  I8255A(config.replace(), m_ppi[1]);
	m_ppi[1]->in_pa_callback().set(FUNC(wingco_state::tetin3_r));
	m_ppi[1]->in_pb_callback().set_ioport("IN4");
	m_ppi[1]->in_pc_callback().set_ioport("DSW1");

}


/***************************************************************************

  Game driver(s)

***************************************************************************/

/*
  Golden Star (bootleg of Cherry 1 Gold)
  Processor: ZILOG Z0840006PSC Z80 CPU 9745 RN

  EPROM:

    Name:  1
    File:  gs1.bin
    Type:  TMS JL 27C010A-12 LX78AC96P

    Name:  2
    File:  gs2.bin
    Type:  TMS JL 27C010A-10 LX73A5J4P

    Nome:  3
    File:  gs3.bin
    Type:  TMS JL 29C010A-12 LX78AC96P

    Nome:  4
    File:  gs4.bin
    Type:  TMS JL 27C010A-10 LX73A5J4P

  Other IC's on MB

  - ACTEL A1020B PL84C 9713
  - 9703R MS6264L-70PC
  - HOLTEK HT 6116-70 9806K0625

*/
ROM_START( goldstar )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "gs4-cpu.bin",  0x0000, 0x10000, CRC(73e47d4d) SHA1(df2d8233572dc12e8a4b56e5d4f6c566e4ababc9) )

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "gs2.bin",      0x00000, 0x20000, CRC(a2d5b898) SHA1(84cca22c91628cfefb67013652b151f034a06159) )

	ROM_REGION( 0x08000, "gfx2", 0 )
	ROM_LOAD( "gs3.bin",      0x00000, 0x08000, CRC(8454ce3c) SHA1(74686ebb91f191db8cbc3d0417a5e8112c5b67b1) )

	ROM_REGION( 0x40000, "oki", 0 )  // Audio ADPCM
	ROM_LOAD( "gs1-snd.bin",  0x0000, 0x20000, CRC(9d58960f) SHA1(c68edf95743e146398aabf6b9617d18e1f9bf25b) )
ROM_END

/*
  Golden Star (blue version)

  This is the blue PCB version. EPROMs are marked with colored stickers.

  The red and yellow EPROMs are for graphics. The red is identical to the one found in normal golden star,
  while yellow match only 90% (probably the logo)

  The blue one match the golden star ROM 1 and contains ADCPM audio.

*/
ROM_START( goldstbl )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "gsb-cpu.bin",  0x0000, 0x10000, CRC(82b238c3) SHA1(1306e700e213f423bdd79b182aa11335796f7f38) )

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "gs2.bin",      0x00000, 0x20000, CRC(a2d5b898) SHA1(84cca22c91628cfefb67013652b151f034a06159) )

	ROM_REGION( 0x08000, "gfx2", 0 )
	ROM_LOAD( "gsb-spr.bin",  0x00000, 0x08000, CRC(52ecd4c7) SHA1(7ef013020521a0c19ecd67db1c00047e78a3c736) )

	ROM_REGION( 0x40000, "oki", 0 )  // Audio ADPCM
	ROM_LOAD( "gs1-snd.bin",  0x0000, 0x20000, CRC(9d58960f) SHA1(c68edf95743e146398aabf6b9617d18e1f9bf25b) )
ROM_END


/*
  Star 100, by Sang Ho.

  PCB SANGHO PM-003 (VER-B2).
  Different hardware, but seems to be close to GoldStar.
  Also different memory map.

  27C020 socket for OKI samples is unpopulated.

*/
ROM_START( star100 )
	ROM_REGION( 0x80000, "maincpu", 0 )
	ROM_LOAD( "str-100_051212__27c512.1e",  0x00000, 0x10000, CRC(6c73ae4e) SHA1(8476b77a190a653b2a47682072bc9b4db594c02e) )

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "str_l3__flash29c011a-15.3l", 0x00000, 0x20000, CRC(89bf5935) SHA1(f8af107e21a9157ea5056eedbda36a1b99c5df5b) )

	ROM_REGION( 0x20000, "gfx2", 0 )
	ROM_LOAD( "str_m3__flash29c011a-15.3m", 0x00000, 0x20000, CRC(fff9ea0e) SHA1(6125c99e684ac639a0f85cbb00c26131a23324aa) )

	ROM_REGION( 0x40000, "oki", 0 )  // Audio ADPCM
	ROM_LOAD( "27c020.bin",  0x0000, 0x20000, NO_DUMP )
ROM_END


/*
  Crazy Bonus, by Sang Ho.

  PCB SANGHO PM-001 SW-008.
  Close to star100 hardware, but with 5x DSW banks.

  27C020 socket place for OKI samples is blind.

  This dump is not from the original Sang Ho board, it's from a Poker Master stealth conversion kit
  Plug-in daughterboard dated 1997
  This set displays Crazy Co. copyright

*/
ROM_START( crazybon )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "crazy_14_030418.bin",  0x00000, 0x10000, CRC(0071fb2a) SHA1(771b9b2b9fdf11dafc5ec0dbababc181d2ce4c75) )

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "crazy_h3.bin", 0x00000, 0x20000, CRC(6b3692b5) SHA1(ffdcd4e59d7c009fd76a65e8f87642da35f996f4) )

	ROM_REGION( 0x20000, "gfx2", 0 )
	ROM_LOAD( "crazy_j3.bin", 0x00000, 0x20000, CRC(e375cd4b) SHA1(68888126ff9743cd589f3426205231bc3a896588) )

	ROM_REGION( 0x10000, "user1", ROMREGION_ERASE00 )

	// proms taken from cmv4, probably wrong
	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) BAD_DUMP )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) BAD_DUMP )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) BAD_DUMP )
ROM_END

ROM_START( crazybona )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "27c512_main.bin",  0x00000, 0x10000, CRC(61a5585d) SHA1(5fdcf80f62ed21c9e903da64cf67ed39ec55b8b9) )

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "crazy_h3.bin", 0x00000, 0x20000, CRC(6b3692b5) SHA1(ffdcd4e59d7c009fd76a65e8f87642da35f996f4) )

	ROM_REGION( 0x20000, "gfx2", 0 )
	ROM_LOAD( "crazy_j3.bin", 0x00000, 0x20000, CRC(e375cd4b) SHA1(68888126ff9743cd589f3426205231bc3a896588) )

	ROM_REGION( 0x10000, "user1", ROMREGION_ERASE00 )

	// proms taken from cmv4, probably wrong
	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) BAD_DUMP )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) BAD_DUMP )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) BAD_DUMP )
ROM_END

ROM_START( crazybonb )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "main sub-board 27c512.bin",  0x0000, 0x10000, CRC(1195f0b7) SHA1(bf5f502f5090246f7be605cb588ec889a8127df7) )

	ROM_REGION( 0x20000, "gfx1", 0 )  // tiles
	ROM_LOAD( "k-4 m27c10001 rom 2.bin", 0x00000,  0x20000, CRC(33f4230b) SHA1(26c5aa4f74b221c58390ae1e223a8e879cafa7ca) )

	ROM_REGION( 0x20000, "gfx2", 0 )  // reels + girl?
	ROM_LOAD( "i-4 m27c10001 rom 1.bin", 0x00000,  0x20000, CRC(e375cd4b) SHA1(68888126ff9743cd589f3426205231bc3a896588) )

	ROM_REGION( 0x10000, "user1", ROMREGION_ERASE00 )

	// proms taken from cmv4, probably wrong
	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) BAD_DUMP )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) BAD_DUMP )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) BAD_DUMP )
ROM_END

/*
  Cherry Gold  (Cherry 10)

  Anno    1997
  Produttore
  N.revisione W4BON (rev.1)

  CPU

  1x TMPZ84C00AP-6 (u12)(main)
  2x D8255AC-2 (u45,u46)
  1x D71055C (u40)
  1x WF19054 (u39)(equivalent to AY-3-8910)
  1x SN76489AN (u38)
  1x PIC16F84 (on a small daughterboard)(read protected)
  1x oscillator 12.000

  ROMs

  1x TMS27C256 (u3)
  1x TMS27C010 (u1)
  1x PROM N82S147AN (u2)
  1x M27C512 (u20)
  2x PALCE20V8H (pl1,pl2)(read protected)
  1x ispLSI1024-60LJ (pl3)(read protected)
  3x PALCE16V8H (pl4,pl6,pl7)(read protected)
  1x GAL22V10B (pl5)(read protected)

  Note

  1x 36x2 edge connector
  1x 10x2 edge connector
  2x trimmer (volume)
  5x 8x2 switches dip (sw1-5)
  1x push lever (TS)

*/
ROM_START( chry10 )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "ver.1h2.u20",       0x0000, 0x10000, CRC(85bbde06) SHA1(f44d335feb4697b195e9fc7e5aeaabf099e21ed8) )

	ROM_REGION( 0x10000, "pic", 0 )
	ROM_LOAD( "pic16f84.bad.dump", 0x0000, 0x14f4, BAD_DUMP CRC(876ff1ed) SHA1(fcd6892e2b8371030af15e4d8c9f4a351ce0551c) )

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "27c010.u1",         0x00000, 0x20000, CRC(05515cf8) SHA1(366dd44ae93bdc4cf456f97f38edac83441cbc89) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1.u3",              0x0000, 0x8000, CRC(32b46e5c) SHA1(49e59589188324e15ec2b8157839423faea9833f) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s147.u2",         0x0000, 0x0200, CRC(5c8f2b8f) SHA1(67d2121e75813dd85d83858c5fc5ec6ad9cc2a7d) )

	ROM_REGION( 0x02e5, "palgal", 0 )
	ROM_LOAD( "palce20v8h.pl1",    0x00000, 0x0157, NO_DUMP )
	ROM_LOAD( "palce20v8h.pl2",    0x00000, 0x0157, NO_DUMP )
	ROM_LOAD( "palce16v8h.pl4",    0x00000, 0x0117, NO_DUMP )
	ROM_LOAD( "gal22v10b.pl5",     0x00000, 0x02e5, NO_DUMP )
	ROM_LOAD( "palce16v8h.pl6",    0x00000, 0x0117, NO_DUMP )
	ROM_LOAD( "palce16v8h.pl7",    0x00000, 0x0117, NO_DUMP )
ROM_END


/*
  Cherry I Gold

  Anno    1998
  Produttore
  N.revisione W4BON (rev.1)


  CPU

  1x TMPZ84C00AP-6 (u12)(main)
  2x D8255AC-2 (u45,u46) (missing)
  1x D71055C (u40) (missing)
  1x YM2149 (u39)
  1x SN76489AN (u38)
  1x oscillator 12.0C45

  ROMs

  1x I27256 (u3)
  1x I27C010 (u1)
  1x PROM N82S147AN (u2)
  1x M27C512 (u20)
  1x GAL20V8 (pl1)(read protected)
  1x PALCE20V8H (pl2)(read protected)
  1x ispLSI1024-60LJ (pl3)(read protected)
  3x PALCE16V8H (pl4,pl6,pl7)(read protected)
  1x PEEL22CV10 (pl5)(read protected)

  Note

  1x 36x2 edge connector
  1x 10x2 edge connector
  2x trimmer (volume)
  5x 8x2 switches dip (sw1-5)
  1x push lever (TS)

*/
ROM_START( chrygld )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "ol-v9.u20",       0x00000, 0x10000, CRC(b61c0695) SHA1(63c44b20fd7f76bdb33331273d2610e8cfd31add) )

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "ol-la.u1",        0x00000, 0x20000, CRC(c3c912f1) SHA1(a2131f092ae1971f79a11d6a18b031cd98529320) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1.u3",            0x0000, 0x8000, CRC(32b46e5c) SHA1(49e59589188324e15ec2b8157839423faea9833f) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s147.u2",       0x0000, 0x0200, CRC(5c8f2b8f) SHA1(67d2121e75813dd85d83858c5fc5ec6ad9cc2a7d) )

	ROM_REGION( 0x02dd, "palgal", 0 )
	ROM_LOAD( "gal20v8.pl1",     0x00000, 0x0157, NO_DUMP )
	ROM_LOAD( "palce20v8h.pl2",  0x00000, 0x0157, NO_DUMP )
	ROM_LOAD( "palce16v8h.pl4",  0x00000, 0x0117, NO_DUMP )
	ROM_LOAD( "peel22cv10a.pl5", 0x00000, 0x02dd, NO_DUMP )
	ROM_LOAD( "palce16v8h.pl6",  0x00000, 0x0117, NO_DUMP )
	ROM_LOAD( "palce16v8h.pl7",  0x00000, 0x0117, NO_DUMP )
ROM_END


/* Moon Light (V.0629)
   Rip off / clone of Gold Star.

   The program ROM is double size and stores two different programs.
   Whilst we have not idea about the real addressing, we can support
   both sets separately.

*/
ROM_START( moonlght )
	ROM_REGION( 0x20000, "maincpu", 0 )  // using only the first half of the program ROM.
	ROM_LOAD( "4.bin",       0x0000, 0x20000, CRC(ecb06cfb) SHA1(e32613cac5583a0fecf04fca98796b91698e530c) )  // low program, normal gfx

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "28.bin",      0x00000, 0x20000, CRC(76915c0f) SHA1(3f6d1c0dd3d9bf29538181a0e930291b822dad8c) )

	ROM_REGION( 0x20000, "gfx2", 0 )
	ROM_LOAD( "29.bin",      0x00000, 0x20000, CRC(8a5f274d) SHA1(0f2ad61b00e220fc509c01c11c1a8f4e47b54f2a) )

	ROM_REGION( 0x40000, "oki", 0 )  // Audio ADPCM
	ROM_LOAD( "gs1-snd.bin",  0x0000, 0x20000, CRC(9d58960f) SHA1(c68edf95743e146398aabf6b9617d18e1f9bf25b) )
ROM_END

ROM_START( moonlghta )
	ROM_REGION( 0x20000, "maincpu", 0 )  // using only the second half of the program ROM.
	ROM_LOAD( "4.bin",       0x10000, 0x10000, CRC(ecb06cfb) SHA1(e32613cac5583a0fecf04fca98796b91698e530c) )  // high program, normal gfx
	ROM_CONTINUE(            0x00000, 0x10000)

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "28.bin",      0x00000, 0x20000, CRC(76915c0f) SHA1(3f6d1c0dd3d9bf29538181a0e930291b822dad8c) )

	ROM_REGION( 0x20000, "gfx2", 0 )
	ROM_LOAD( "29.bin",      0x00000, 0x20000, CRC(8a5f274d) SHA1(0f2ad61b00e220fc509c01c11c1a8f4e47b54f2a) )

	ROM_REGION( 0x40000, "oki", 0 )  // Audio ADPCM
	ROM_LOAD( "gs1-snd.bin",  0x0000, 0x20000, CRC(9d58960f) SHA1(c68edf95743e146398aabf6b9617d18e1f9bf25b) )
ROM_END

/* Moon Light (V.02L0A)
   Rip off / clone of Gold Star.

   The program ROM is double size and stores two different programs.
   Whilst we have not idea about the real addressing, we can support
   both sets separately.

   GFX devices are 4 times bigger and contains 4 times the same data.
   Maybe the manufacturers run out of proper devices...

   The background is not set properly due to a palette error. The program ROM stores
   the palette at offset 0xC700 onwards... The value stored at 0xC780 (color 0x80) should
   be black to mask the reels tilemaps and turn them 'invisible'. This program has a value
   of 0x40 instead, turning the tilemaps blue and therefore visible. The results is an odd
   effect that shouldn't be there. Maybe is product of a bad dump. Need to be checked with
   the real board.

   The hardware currently uses only the second half of the program ROM (high program), that
   replaces the double-up's cards graphics with 'drakkars' (scandinavian / viking ships).

  ----------------------------------------------------------------------------------------
  28.bin                                          FIXED BITS (00xxxxxx)
  29.bin                                                 00xxxxxxxxxxxxxxx = 0xFF
                          moon-gfx1.bin           BADADDR     --xxxxxxxxxxxxxxxxx
                          moon-gfx2.bin           FIXED BITS (00xxxxxx)
                          moon-gfx2.bin           BADADDR     --xxxxxxxxxxxxxxxxx
  29.bin                  moon-gfx1.bin [1/4]      IDENTICAL
  29.bin                  moon-gfx1.bin [2/4]      IDENTICAL
  29.bin                  moon-gfx1.bin [3/4]      IDENTICAL
  29.bin                  moon-gfx1.bin [4/4]      IDENTICAL
  4.bin        [1/4]      moon-main.bin [1/4]      99.615479%
  4.bin        [3/4]      moon-main.bin [3/4]      99.426270%
  4.bin        [2/4]      moon-main.bin [2/4]      97.201538%
  4.bin        [4/4]      moon-main.bin [4/4]      95.953369%
  28.bin                  moon-gfx2.bin [1/4]      94.188690%
  28.bin                  moon-gfx2.bin [2/4]      94.188690%
  28.bin                  moon-gfx2.bin [3/4]      94.188690%
  28.bin                  moon-gfx2.bin [4/4]      94.188690%

*/
ROM_START( moonlghtb )
	ROM_REGION( 0x20000, "maincpu", 0 )  // using only the first half of the program ROM.
	ROM_LOAD( "moon-main.bin",       0x00000, 0x20000, CRC(0a4b5dd0) SHA1(825801e9b72c10fed8e07f42b3b475688bdbd878) )  // low program, normal gfx

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "28.bin",      0x00000, 0x20000, CRC(76915c0f) SHA1(3f6d1c0dd3d9bf29538181a0e930291b822dad8c) )  // Normal GFX, from the other PCB

	ROM_REGION( 0x20000, "gfx2", 0 )
	ROM_LOAD( "29.bin",      0x00000, 0x20000, CRC(8a5f274d) SHA1(0f2ad61b00e220fc509c01c11c1a8f4e47b54f2a) )  // Normal GFX, from the other PCB

	ROM_REGION( 0x40000, "oki", 0 )  // Audio ADPCM
	ROM_LOAD( "moon-sound.bin",  0x0000, 0x20000, CRC(9d58960f) SHA1(c68edf95743e146398aabf6b9617d18e1f9bf25b) )
ROM_END

ROM_START( moonlghtc )
	ROM_REGION( 0x20000, "maincpu", 0 )  // using only the second half of the program ROM.
	ROM_LOAD( "moon-main.bin",       0x10000, 0x10000, CRC(0a4b5dd0) SHA1(825801e9b72c10fed8e07f42b3b475688bdbd878) )  // high program, alt gfx
	ROM_CONTINUE(                    0x00000, 0x10000)

	ROM_REGION( 0x80000, "gfx1", 0 )
	ROM_LOAD( "moon-gfx2.bin",      0x00000, 0x80000, CRC(2ce5b722) SHA1(feb87fbf3b8d875842df80cd1edfef5071ed60c7) )  // Alt GFX set. Ships instead of cards

	ROM_REGION( 0x80000, "gfx2", 0 )
	ROM_LOAD( "moon-gfx1.bin",      0x00000, 0x80000, CRC(ea7d4234) SHA1(4016227aabf176c6e0fd822ebc59cade811f4ce8) )  // Alt GFX set. Ships instead of cards

	ROM_REGION( 0x40000, "oki", 0 )  // Audio ADPCM
	ROM_LOAD( "moon-sound.bin",  0x0000, 0x20000, CRC(9d58960f) SHA1(c68edf95743e146398aabf6b9617d18e1f9bf25b) )
ROM_END

/*
  Golden Regular.
  The hopper payout routine is NOP'ed, doing a reset when finish.

*/
ROM_START( gregular )
	ROM_REGION( 0x20000, "maincpu", 0 )
	ROM_LOAD( "30.prg", 0x00000, 0x20000, CRC(7219d1c1) SHA1(8d17f29f94f50db952a1dd144c971b2e3be2dad3) ) // 1ST AND 2ND HALF IDENTICAL

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "28.gfx", 0x00000, 0x20000, CRC(dfd27fa2) SHA1(408ae9de1d6e869c6dc5daa073b845081204624b) ) // FIXED BITS (00xxxxxx), but correct

	ROM_REGION( 0x20000, "gfx2", 0 )
	ROM_LOAD( "29.gfx", 0x00000, 0x20000, CRC(8a5f274d) SHA1(0f2ad61b00e220fc509c01c11c1a8f4e47b54f2a) ) // 00xxxxxxxxxxxxxxx = 0xFF

	ROM_REGION( 0x40000, "oki", 0 )
	ROM_LOAD( "27.oki", 0x00000, 0x20000, CRC(9d58960f) SHA1(c68edf95743e146398aabf6b9617d18e1f9bf25b) )
ROM_END


/*
   Gold Fruit

   Graphics are packed/encoded in a different way.
   Game rate is fixed in 40%.
   Coin A and B are fixed to 100 credits by pulse.

*/
ROM_START( goldfrui )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "27c1000.u6",  0x0000, 0x10000, CRC(84b982fc) SHA1(39f401da52a9df799f3fe6bbeb7cad493911b831) )
	ROM_CONTINUE( 0x0000, 0x10000) // Discarding 1st half 0xff filled

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "27c1000.u24",      0x00000, 0x20000, CRC(9642c9c2) SHA1(10fdced265ef4a9a5494d8df0432337df4ecec7f) ) //FIXED BITS (00xxxxxx)

	ROM_REGION( 0x08000, "gfx2", 0 )
	ROM_LOAD( "27c1000.u25",      0x00000, 0x08000, CRC(5ce73db6) SHA1(e93948f6a44831583e0779da3158d7b5e33bcca7) )
	ROM_CONTINUE( 0x0000, 0x08000)  // Discarding 1st quarter 0xff filled
	ROM_CONTINUE( 0x0000, 0x08000)  // Discarding 2nd quarter 0xff filled
	ROM_CONTINUE( 0x0000, 0x08000)  // Discarding 3rd quarter 0xff filled

	ROM_REGION( 0x40000, "oki", 0 )  // Audio ADPCM
	ROM_LOAD( "27c1000.u57",  0x0000, 0x20000, CRC(9d58960f) SHA1(c68edf95743e146398aabf6b9617d18e1f9bf25b) )
ROM_END


/*
    Super Nove by Playmark

    load the first half of the program ROM, bp 2db
    the next call ($0C33) hangs the game
    since there are ascii strings there
    instead of code.

    the second half seems to work, but where is the palette?

    are the two halves banked somehow?
*/

ROM_START( super9 )
	ROM_REGION( 0x20000, "maincpu", 0 )
	ROM_LOAD( "27e010.30", 0x10000, 0x10000, CRC(1aaea8d3) SHA1(71395a6d74a7cd55606daa57d17ff4628aa5f577) )
	ROM_CONTINUE(          0x00000, 0x10000 )

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "nearcpu.bin", 0x00000, 0x20000, CRC(643cff6f) SHA1(305ca9182c3f6d69e09be38b854b3d7bdfa75439) )

	ROM_REGION( 0x20000, "gfx2", 0 )
	ROM_LOAD( "27e010.29", 0x00000, 0x08000, CRC(5ea46322) SHA1(147078689f0194affcdcf0e8f8e17fe8a113a377) )
	ROM_CONTINUE(          0x00000, 0x08000)  // Discarding 1st quarter 0xff filled
	ROM_CONTINUE(          0x00000, 0x08000)  // Discarding 2nd quarter 0xff filled
	ROM_CONTINUE(          0x00000, 0x08000)  // Discarding 3rd quarter 0xff filled

	ROM_REGION( 0x40000, "oki", 0 )  // Audio ADPCM
	ROM_LOAD( "27c1001.27", 0x00000, 0x20000, CRC(9d58960f) SHA1(c68edf95743e146398aabf6b9617d18e1f9bf25b) )
ROM_END

// on a very tiny PCB with only PLAYMARK s.r.l. ITALY and no PCB code
// has Z0840006PSC with 12 MHz XTAL + ACTEL A40MX04 + U6295 1000J resonator + 5x 8-dip banks
// basically same as above but has strings for Euro instead of Lire and some routine changed, possibly to remove bet limit
ROM_START( super9a )
	ROM_REGION( 0x20000, "maincpu", 0 )
	ROM_LOAD( "27e010.30", 0x10000, 0x10000, CRC(986a9439) SHA1(c877379c6d2b283d209ec5abea4a5a542b934436) )
	ROM_CONTINUE(          0x00000, 0x10000 )

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "27e010.28", 0x00000, 0x20000, CRC(643cff6f) SHA1(305ca9182c3f6d69e09be38b854b3d7bdfa75439) )

	ROM_REGION( 0x20000, "gfx2", 0 )
	ROM_LOAD( "27e010.29", 0x00000, 0x08000, CRC(5ea46322) SHA1(147078689f0194affcdcf0e8f8e17fe8a113a377) )
	ROM_CONTINUE(          0x00000, 0x08000)  // Discarding 1st quarter 0xff filled
	ROM_CONTINUE(          0x00000, 0x08000)  // Discarding 2nd quarter 0xff filled
	ROM_CONTINUE(          0x00000, 0x08000)  // Discarding 3rd quarter 0xff filled

	ROM_REGION( 0x40000, "oki", 0 )  // Audio ADPCM
	ROM_LOAD( "27c1001.27", 0x00000, 0x20000, CRC(9d58960f) SHA1(c68edf95743e146398aabf6b9617d18e1f9bf25b) )

	ROM_REGION( 0x2dd, "pld", 0 )
	ROM_LOAD( "palce22v10", 0x000, 0x2dd, NO_DUMP )
ROM_END

ROM_START( ncb3 )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "8.512", 0x00000, 0x10000, CRC(1f669cd0) SHA1(fd394119e33c017507fde87a710577e37dcdec07) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "2.256", 0x00000, 0x08000, CRC(83650a94) SHA1(e79420ab559d3f74013708767ca3f238fd333fb7) )
	ROM_LOAD( "3.256", 0x08000, 0x08000, CRC(2f46a3f5) SHA1(3e6022ee8f84039e48f41aea5e68ee28aabdc556) )
	//ROM_LOAD( "4.256", 0x10000, 0x08000, BAD_DUMP CRC(a390f1f2) SHA1(0a04a5af51f91f04773125f703c7cd3397d192f2) ) // FIXED BITS (xxxx1xxx) - use main_7.256 from set below instead?
	ROM_LOAD( "main_7.256", 0x10000, 0x08000, CRC(dcf97517) SHA1(0a29696e0464c8878c499b1786a17080fd088a72) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "7.764", 0x00000, 0x02000, CRC(7cc6d26b) SHA1(de33e8985affce7bd3ead89463117c9aaa93d5e4) )
	ROM_LOAD( "6.764", 0x02000, 0x02000, CRC(e73ea4e3) SHA1(c9fd56461f6986d6bc170403d298fcc408a524e9) )
	ROM_LOAD( "5.764", 0x04000, 0x02000, CRC(91162010) SHA1(3acc21e7074602b247f2f392eb181802092d2f21) )
	ROM_LOAD( "1.764", 0x06000, 0x02000, CRC(cbcc6bfb) SHA1(5bafc934fef1f50d8c182c39d3a7ce795c89d175) )

	ROM_REGION( 0x0200, "proms", 0 )  // PROM from chrygld. need verification
	ROM_LOAD( "82s147.u2",      0x00000, 0x0200, BAD_DUMP CRC(5c8f2b8f) SHA1(67d2121e75813dd85d83858c5fc5ec6ad9cc2a7d) )
ROM_END


/*
  mame -romident cb3.zip
  cpu_u6.512          NO MATCH
  main_3.764          = 5.764                 New Cherry Bonus 3
  main_4.764          = 1.764                 New Cherry Bonus 3
  main_5.256          = 2.256                 New Cherry Bonus 3
  main_6.256          = 3.256                 New Cherry Bonus 3
  main_7.256          NO MATCH

*/
ROM_START( cb3 )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "cpu_u6.512", 0x00000, 0x10000, CRC(d17c936b) SHA1(bf90edd214118116da675bcfca41247d5891ac90) )  // encrypted??

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "main_5.256", 0x00000, 0x08000, CRC(83650a94) SHA1(e79420ab559d3f74013708767ca3f238fd333fb7) )
	ROM_LOAD( "main_6.256", 0x08000, 0x08000, CRC(2f46a3f5) SHA1(3e6022ee8f84039e48f41aea5e68ee28aabdc556) )
	ROM_LOAD( "main_7.256", 0x10000, 0x08000, CRC(dcf97517) SHA1(0a29696e0464c8878c499b1786a17080fd088a72) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	// 2 roms missing - the first 2 roms below taken from above set
	ROM_LOAD( "7.764",      0x00000, 0x02000, CRC(7cc6d26b) SHA1(de33e8985affce7bd3ead89463117c9aaa93d5e4) )
	ROM_LOAD( "6.764",      0x02000, 0x02000, CRC(e73ea4e3) SHA1(c9fd56461f6986d6bc170403d298fcc408a524e9) )
	ROM_LOAD( "main_3.764", 0x04000, 0x02000, CRC(91162010) SHA1(3acc21e7074602b247f2f392eb181802092d2f21) )
	ROM_LOAD( "main_4.764", 0x06000, 0x02000, CRC(cbcc6bfb) SHA1(5bafc934fef1f50d8c182c39d3a7ce795c89d175) )

	ROM_REGION( 0x0200, "proms", 0 )  // PROM from chrygld. need verification
	ROM_LOAD( "82s147.u2",      0x00000, 0x0200, BAD_DUMP CRC(5c8f2b8f) SHA1(67d2121e75813dd85d83858c5fc5ec6ad9cc2a7d) )
ROM_END


/*
  CB3A
  Known differences with ncb3:

  - Double-Up rate: 50% and 80% instead of 80% and 90%.

*/
ROM_START( cb3a )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "cb3a01.bin", 0x00000, 0x10000, CRC(53b099ab) SHA1(612d86d7f011a554903400e60e2c4a0d4f24e095) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "2.256", 0x00000, 0x08000, CRC(83650a94) SHA1(e79420ab559d3f74013708767ca3f238fd333fb7) )
	ROM_LOAD( "3.256", 0x08000, 0x08000, CRC(2f46a3f5) SHA1(3e6022ee8f84039e48f41aea5e68ee28aabdc556) )
	ROM_LOAD( "main_7.256", 0x10000, 0x08000, CRC(dcf97517) SHA1(0a29696e0464c8878c499b1786a17080fd088a72) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "7.764", 0x00000, 0x02000, CRC(7cc6d26b) SHA1(de33e8985affce7bd3ead89463117c9aaa93d5e4) )
	ROM_LOAD( "6.764", 0x02000, 0x02000, CRC(e73ea4e3) SHA1(c9fd56461f6986d6bc170403d298fcc408a524e9) )
	ROM_LOAD( "5.764", 0x04000, 0x02000, CRC(91162010) SHA1(3acc21e7074602b247f2f392eb181802092d2f21) )
	ROM_LOAD( "1.764", 0x06000, 0x02000, CRC(cbcc6bfb) SHA1(5bafc934fef1f50d8c182c39d3a7ce795c89d175) )

	ROM_REGION( 0x0200, "proms", 0 )  // PROM from chrygld. need verification
	ROM_LOAD( "82s147.u2",      0x00000, 0x0200, BAD_DUMP CRC(5c8f2b8f) SHA1(67d2121e75813dd85d83858c5fc5ec6ad9cc2a7d) )
ROM_END


ROM_START( cb3b )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "adatabin.bin",   0x00000, 0x10000,  CRC(db583c1b) SHA1(ea733e625922d6064ee4d8ceee4acfa6c1c7337e) )

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "adatabin_2.bin",   0x00000, 0x10000, CRC(48fd96fb) SHA1(193ed2be51555af80a9f0478139f28963e9d0c5e) )
	ROM_LOAD( "adatabin_3.bin",   0x10000, 0x10000, CRC(010462df) SHA1(53dd3060097f964c516d1cc5be2403a9bd5ee434) )

	ROM_REGION( 0x08000, "gfx2", 0 )
	ROM_LOAD( "adatabin_4.bin",   0x00000, 0x08000, CRC(3cb4642a) SHA1(8db03c0227836d988e99f6fe4719d871ea3749ca) )

	ROM_REGION( 0x0200, "proms", 0 )  // PROM from chrygld - wasn't in this set, is it correct?, none of the other proms have the colours?
	ROM_LOAD( "82s147.u2",      0x00000, 0x0200, BAD_DUMP CRC(5c8f2b8f) SHA1(67d2121e75813dd85d83858c5fc5ec6ad9cc2a7d) )

	ROM_REGION( 0x0200, "proms2", 0 )   // other roms
	ROM_LOAD( "adatabin_1.bin",      0x00000, 0x020, CRC(87dbc339) SHA1(e5c67bc29612c8ab93857639e46608a814d471f5) )
	ROM_LOAD( "adatabin_5.bin",      0x00000, 0x180, CRC(ad267b0c) SHA1(a4cfec15ae0cde7d4fb8c278e977995680779058) )
	ROM_LOAD( "adatabin_6.bin",      0x00000, 0x010, CRC(f3d9ed7a) SHA1(594fef6323530f68c7303dcdea77b44c331e5113) )
	ROM_LOAD( "adatabin_0.bin",      0x00000, 0x100, CRC(f566e5e0) SHA1(754f04521b9eb73b34fe3de07e8f3679d1034870) )
ROM_END


ROM_START( cb3c )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "27c512.bin", 0x00000, 0x10000, CRC(c42533cd) SHA1(d55b54b31c910d97418f400fc1ba78460c7183a9) )

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "cbt1grk.bin", 0x00000, 0x20000, BAD_DUMP CRC(c6fdebc7) SHA1(736bbe5ae7b148e529f7cb80e9ae8903203c7869) )

	ROM_REGION( 0x08000, "gfx2", 0 )
	ROM_LOAD( "rbt1grb.bin", 0x00000, 0x8000, CRC(ed635dd7) SHA1(350a4b10ccfddcd6f3aaf748c15d585f0b9dc09b) )

	ROM_REGION( 0x0200, "proms", 0 )  // wasn't in this set..
	ROM_LOAD( "82s147.u2",      0x00000, 0x0200, CRC(5c8f2b8f) SHA1(67d2121e75813dd85d83858c5fc5ec6ad9cc2a7d) )
ROM_END


// set marked 'pignapoke'
ROM_START( cb3d )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "0.14b", 0x00000, 0x10000, CRC(4f8be0f9) SHA1(0201bf0c1dca1570d2ccc862f10a19e0e261f7ab) )

	ROM_REGION( 0x30000, "gfx1", 0 )
	ROM_LOAD( "5.7h", 0x00000, 0x10000, CRC(50701ce1) SHA1(3af3f124e28fda2bb3ba4f2c78fcd21c725d7ebc) )
	ROM_LOAD( "6.9h", 0x10000, 0x10000, CRC(baf1c9a2) SHA1(f75a64fa64d102a0e75919c76db638f6c34ecc9e) )
	ROM_LOAD( "7.10h",0x20000, 0x10000, CRC(87c944c4) SHA1(754b410dbcef07967f7cfdc3923df20394909e49) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1.1h", 0x00000, 0x02000, CRC(7cc6d26b) SHA1(de33e8985affce7bd3ead89463117c9aaa93d5e4) )
	ROM_LOAD( "2.3h", 0x02000, 0x02000, CRC(e73ea4e3) SHA1(c9fd56461f6986d6bc170403d298fcc408a524e9) )
	ROM_LOAD( "3.4h", 0x04000, 0x02000, CRC(91162010) SHA1(3acc21e7074602b247f2f392eb181802092d2f21) )
	ROM_LOAD( "4.5h", 0x06000, 0x02000, CRC(cbcc6bfb) SHA1(5bafc934fef1f50d8c182c39d3a7ce795c89d175) )

	ROM_REGION( 0x0200, "proms", 0 )
	ROM_LOAD_NIB_LOW(  "n82s129.13g",  0x0000, 0x0100, CRC(59ac98e4) SHA1(5fc0f1a48c49c956cdb8826e20663dc57a9175e4) )  // 1st bank colors, low 4 bits.
	ROM_LOAD_NIB_HIGH( "n82s129.14g",  0x0000, 0x0100, CRC(0d8f35bd) SHA1(0c2a0145cdaaf9beabdce241731a36b0c65f18a2) )  // 1st bank colors, high 4 bits.
	ROM_LOAD(          "dm74s288.13d", 0x0080, 0x0020, CRC(77a85e21) SHA1(3b41e0ab7cc55c5d78914d23e8289383f5bd5654) )  // 2nd bank colors
ROM_END


/*
  1x Z80.
  3x 8255 (2 have no mark).
  1x Ay-3-8910.
  5x 8 DIP switches.
  1x 12 MHz xtal.

  ROM 3v202 is the prg.

*/
ROM_START( cb3e )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "3v202.u22",  0x00000, 0x10000, CRC(f127d203) SHA1(d23b9e5972e797e7c18e9e8e2e70c01f381a4c4d) )

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "2.u6",      0x00000, 0x20000, CRC(e3be1d33) SHA1(5cc3b5d6e371e8bb414b552c68770666e3914ae4) )

	ROM_REGION( 0x08000, "gfx2", 0 )
	ROM_LOAD( "1.u3",      0x00000, 0x08000, CRC(919bd692) SHA1(1aeb66f1e4555b731858833445000593e613f74d) )

	ROM_REGION( 0x0200, "proms", 0 )
	ROM_LOAD( "82s147.u1",      0x00000, 0x0100, CRC(d4eaa276) SHA1(b6598ee64ac3d41ca979c8667de8576cfb304451) )
	ROM_CONTINUE(               0x00000, 0x0100)    // 2nd half has the data.
ROM_END


ROM_START( cb3f )  // original Wing W4 PCB + subboard with Z80, ROM, RAM and encryption logic
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "en27c512.u6", 0x00000, 0x10000, CRC(de6d6050) SHA1(7164584b159c8180ffc65d4e0bedbb4a405c74d9) )  // encrypted

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5.7h",  0x00000, 0x08000, CRC(83650a94) SHA1(e79420ab559d3f74013708767ca3f238fd333fb7) )
	ROM_LOAD( "6.8h",  0x08000, 0x08000, CRC(2f46a3f5) SHA1(3e6022ee8f84039e48f41aea5e68ee28aabdc556) )
	ROM_LOAD( "7.10h", 0x10000, 0x08000, CRC(dcf97517) SHA1(0a29696e0464c8878c499b1786a17080fd088a72) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1.1h", 0x00000, 0x02000, CRC(7cc6d26b) SHA1(de33e8985affce7bd3ead89463117c9aaa93d5e4) )
	ROM_LOAD( "2.3h", 0x02000, 0x02000, CRC(e73ea4e3) SHA1(c9fd56461f6986d6bc170403d298fcc408a524e9) )
	ROM_LOAD( "3.4h", 0x04000, 0x02000, CRC(91162010) SHA1(3acc21e7074602b247f2f392eb181802092d2f21) )
	ROM_LOAD( "4.5h", 0x06000, 0x02000, CRC(cbcc6bfb) SHA1(5bafc934fef1f50d8c182c39d3a7ce795c89d175) )

	ROM_REGION( 0x0200, "proms", 0 )
	ROM_LOAD_NIB_LOW(  "n82s129.13g",  0x0000, 0x0100, CRC(59ac98e4) SHA1(5fc0f1a48c49c956cdb8826e20663dc57a9175e4) )  // 1st bank colors, low 4 bits.
	ROM_LOAD_NIB_HIGH( "n82s129.14g",  0x0000, 0x0100, CRC(0d8f35bd) SHA1(0c2a0145cdaaf9beabdce241731a36b0c65f18a2) )  // 1st bank colors, high 4 bits.
	ROM_LOAD(          "dm74s288.13d", 0x0080, 0x0020, CRC(77a85e21) SHA1(3b41e0ab7cc55c5d78914d23e8289383f5bd5654) )  // 2nd bank colors

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "82s129.f3", 0x0000, 0x0100, CRC(1d668d4a) SHA1(459117f78323ea264d3a29f1da2889bbabe9e4be) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "dm74s288.d12", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END


/*
  Original Wing W4 PCB + Dyna D9005 subboard with Z80,
  ROM, RAM and Dyna DP 1200-5 custom.

  GFX ROMs are identical to many other sets.

*/
ROM_START( cb3g )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "cb3-s4.ic5", 0x00000, 0x10000, CRC(ad0fa0b7) SHA1(29b43e764ca2712406b37d24d942c90992ea46e1) )  // encrypted, on subboard

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "cb3-5.7h",  0x00000, 0x08000, CRC(83650a94) SHA1(e79420ab559d3f74013708767ca3f238fd333fb7) )
	ROM_LOAD( "cb3-6.8h",  0x08000, 0x08000, CRC(2f46a3f5) SHA1(3e6022ee8f84039e48f41aea5e68ee28aabdc556) )
	ROM_LOAD( "cb3-7.10h", 0x10000, 0x08000, CRC(dcf97517) SHA1(0a29696e0464c8878c499b1786a17080fd088a72) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "cb3-1.1h", 0x00000, 0x02000, CRC(7cc6d26b) SHA1(de33e8985affce7bd3ead89463117c9aaa93d5e4) )
	ROM_LOAD( "cb3-2.3h", 0x02000, 0x02000, CRC(e73ea4e3) SHA1(c9fd56461f6986d6bc170403d298fcc408a524e9) )
	ROM_LOAD( "cb3-3.4h", 0x04000, 0x02000, CRC(91162010) SHA1(3acc21e7074602b247f2f392eb181802092d2f21) )
	ROM_LOAD( "cb3-4.5h", 0x06000, 0x02000, CRC(cbcc6bfb) SHA1(5bafc934fef1f50d8c182c39d3a7ce795c89d175) )

	// all the PROMs weren't dumped for this set, marking bad as precaution
	ROM_REGION( 0x0200, "proms", 0 )
	ROM_LOAD_NIB_LOW(  "n82s129.13g",  0x0000, 0x0100, BAD_DUMP CRC(59ac98e4) SHA1(5fc0f1a48c49c956cdb8826e20663dc57a9175e4) )  // 1st bank colors, low 4 bits.
	ROM_LOAD_NIB_HIGH( "n82s129.14g",  0x0000, 0x0100, BAD_DUMP CRC(0d8f35bd) SHA1(0c2a0145cdaaf9beabdce241731a36b0c65f18a2) )  // 1st bank colors, high 4 bits.
	ROM_LOAD(          "dm74s288.13d", 0x0080, 0x0020, BAD_DUMP CRC(77a85e21) SHA1(3b41e0ab7cc55c5d78914d23e8289383f5bd5654) )  // 2nd bank colors

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "82s129.f3", 0x0000, 0x0100, BAD_DUMP CRC(1d668d4a) SHA1(459117f78323ea264d3a29f1da2889bbabe9e4be) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "dm74s288.d12", 0x0000, 0x0020, BAD_DUMP CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END


ROM_START( cb3h )  // very similar to the cb3 set, but changes are legit
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "sub.u6", 0x00000, 0x10000, CRC(e154a31d) SHA1(18a7d36563ed914207100286fd6ad75e6180bae8) )  // encrypted, on subboard

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5.7h",  0x00000, 0x08000, CRC(83650a94) SHA1(e79420ab559d3f74013708767ca3f238fd333fb7) )
	ROM_LOAD( "6.8h",  0x08000, 0x08000, CRC(2f46a3f5) SHA1(3e6022ee8f84039e48f41aea5e68ee28aabdc556) )
	ROM_LOAD( "7.10h", 0x10000, 0x08000, CRC(dcf97517) SHA1(0a29696e0464c8878c499b1786a17080fd088a72) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1.1h", 0x00000, 0x02000, CRC(7cc6d26b) SHA1(de33e8985affce7bd3ead89463117c9aaa93d5e4) )
	ROM_LOAD( "2.3h", 0x02000, 0x02000, CRC(e73ea4e3) SHA1(c9fd56461f6986d6bc170403d298fcc408a524e9) )
	ROM_LOAD( "3.4h", 0x04000, 0x02000, CRC(91162010) SHA1(3acc21e7074602b247f2f392eb181802092d2f21) )
	ROM_LOAD( "4.5h", 0x06000, 0x02000, CRC(cbcc6bfb) SHA1(5bafc934fef1f50d8c182c39d3a7ce795c89d175) )

	ROM_REGION( 0x0200, "proms", 0 )
	ROM_LOAD_NIB_LOW(  "n82s129.13g",  0x0000, 0x0100, CRC(59ac98e4) SHA1(5fc0f1a48c49c956cdb8826e20663dc57a9175e4) )  // 1st bank colors, low 4 bits.
	ROM_LOAD_NIB_HIGH( "n82s129.14g",  0x0000, 0x0100, CRC(0d8f35bd) SHA1(0c2a0145cdaaf9beabdce241731a36b0c65f18a2) )  // 1st bank colors, high 4 bits.
	ROM_LOAD(          "dm74s288.13d", 0x0080, 0x0020, CRC(77a85e21) SHA1(3b41e0ab7cc55c5d78914d23e8289383f5bd5654) )  // 2nd bank colors

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "82s129.f3", 0x0000, 0x0100, CRC(1d668d4a) SHA1(459117f78323ea264d3a29f1da2889bbabe9e4be) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "dm74s288.d12", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END

/*
  Original Wing W4 PCB + Dyna D9005 subboard with Z80,
  ROM, RAM and Xilinx. Dumper says GFX ROMs are identical
  to many other sets.

*/
ROM_START( cb3s51 )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "cb3s-v51.ic5", 0x00000, 0x10000, CRC(1b9a12a1) SHA1(75f76b47147d07e8086812bc13c08f06952622a2) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "cb3-5.7h",  0x00000, 0x08000, CRC(83650a94) SHA1(e79420ab559d3f74013708767ca3f238fd333fb7) )
	ROM_LOAD( "cb3-6.8h",  0x08000, 0x08000, CRC(2f46a3f5) SHA1(3e6022ee8f84039e48f41aea5e68ee28aabdc556) )
	ROM_LOAD( "cb3-7.10h", 0x10000, 0x08000, CRC(dcf97517) SHA1(0a29696e0464c8878c499b1786a17080fd088a72) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "cb3-1.1h", 0x00000, 0x02000, CRC(7cc6d26b) SHA1(de33e8985affce7bd3ead89463117c9aaa93d5e4) )
	ROM_LOAD( "cb3-2.3h", 0x02000, 0x02000, CRC(e73ea4e3) SHA1(c9fd56461f6986d6bc170403d298fcc408a524e9) )
	ROM_LOAD( "cb3-3.4h", 0x04000, 0x02000, CRC(91162010) SHA1(3acc21e7074602b247f2f392eb181802092d2f21) )
	ROM_LOAD( "cb3-4.5h", 0x06000, 0x02000, CRC(cbcc6bfb) SHA1(5bafc934fef1f50d8c182c39d3a7ce795c89d175) )

	ROM_REGION( 0x0200, "proms", 0 )
	ROM_LOAD_NIB_LOW(  "n82s129.13g",  0x0000, 0x0100, CRC(59ac98e4) SHA1(5fc0f1a48c49c956cdb8826e20663dc57a9175e4) )  // 1st bank colors, low 4 bits.
	ROM_LOAD_NIB_HIGH( "n82s129.14g",  0x0000, 0x0100, CRC(0d8f35bd) SHA1(0c2a0145cdaaf9beabdce241731a36b0c65f18a2) )  // 1st bank colors, high 4 bits.
	ROM_LOAD(          "dm74s288.13d", 0x0080, 0x0020, CRC(77a85e21) SHA1(3b41e0ab7cc55c5d78914d23e8289383f5bd5654) )  // 2nd bank colors

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "82s129.f3", 0x0000, 0x0100, CRC(1d668d4a) SHA1(459117f78323ea264d3a29f1da2889bbabe9e4be) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "dm74s288.d12", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END

/*
  Cherry Gold I (bootleg)
  It runs in CB3e similar hardware...

  1x TMPZ84C00AP-6  u15               8-bit Microprocessor
  3x D71055C        u30, u39, u40     Programmable Peripheral Interface
  1x WF19054        u27               Programmable Sound Generator
  1x SN76489AN      u28               Digital Complex Sound Generator
  1x oscillator   unmarked  Y1

  ROMs
  1x D27256      1.u3
  1x AM27512     3.u22
  1x D27C010     2u6
  1x N82S147AF   u1

  RAMs
  4x HM6116LP-4   u9, u10, u11, u12
  1x D4016C-1     u23

  PLDs
  1x unknown Cl-001 (QFP144)  CY144A     read protected
  4x GAL20V8A-15LNC  pl1, pl4, pl5, pl6  read protected
  2x PALCE20V8H-25PC/4   u2,u?           read protected
  1x PALCE22V10H-25PC/4  u?              read protected

  Others
  1x 36x2 edge connector
  1x 10x2 edge connector
  1x pushbutton (TS)
  2x trimmer (volume)(VR1,VR2)
  5x 8x2 switches DIP(SW1-5)
  1x battery 5,5V

  Notes
  PCB is marked "REV.3"

*/
ROM_START( chryglda )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "3.u22",   0x00000, 0x10000, CRC(059857c5) SHA1(f4becfda1e25ab347f55f35dc9f5818ef9344e2c) )

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "2.u6",    0x00000, 0x20000, CRC(1359dfac) SHA1(78eb934055cda9e10d8e939c79bfa62262ecad7d) )

	ROM_REGION( 0x08000, "gfx2", 0 )
	ROM_LOAD( "1.u3",    0x00000, 0x08000, CRC(919bd692) SHA1(1aeb66f1e4555b731858833445000593e613f74d) )

	ROM_REGION( 0x0200, "proms", 0 )
	ROM_LOAD( "n82s147af.u1",   0x00000, 0x0100, CRC(d4eaa276) SHA1(b6598ee64ac3d41ca979c8667de8576cfb304451) )
	ROM_CONTINUE(               0x00000, 0x0100)    // 2nd half has the data.
ROM_END


ROM_START( cmv801 )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "prg512",   0x0000, 0x10000, CRC(2f6e3fe9) SHA1(c5ffa51478a0dc2d8ff6a0f286cfb461011bb55d) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "m5.256",   0x00000, 0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "m6.256",   0x08000, 0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "m7.256",   0x10000, 0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "m3.64",     0x0000, 0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "m4.64",     0x2000, 0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "m1.64",     0x4000, 0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "m2.64",     0x6000, 0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )  // taken from other set, was missing in this dump
	ROM_LOAD( "27512.u53",  0x0000, 0x10000, BAD_DUMP CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )  // pal
	ROM_LOAD( "prom2.287", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "prom3.287", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )  // something else?
	ROM_LOAD( "prom1.287", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


/*
  Super Seven - 199? (>= 1995 since it cites an Italian law from 1995)
  Bootleg /licensed version of Cherry Master (Dyna CM-1 V1.01 at 0xd000 of the program ROM).

  PCB with a New Impeuropex sticker

  - Main cpu is a Z80B (Z8400B) clocked @3MHz (derived by a 12MHZ quartz)
  - Sound is generated by a AY-3-8910 clocked @1.5MHz (derived by the same 12MHZ quartz)
  - One 27C512 for storing program code
  - Two 27C010 for storing GFX data
  - One 82S191AN BPROM
  - One 82S137AN
  - Five PLDs (two PALCE16V8 and three GAL20V8)
  - One 3.6V lithium battery probably for storing high-scores

*/
ROM_START( super7 )
	ROM_REGION( 0x10000, "maincpu", 0 )
	// first 0x8000 opcodes & data encrypted, 0x8000 - 0x93ff only opcodes encrypted, 0x9400 onwards unencrypted?
	ROM_LOAD( "27c512_1", 0x00000, 0x10000, CRC(ddfa6fe7) SHA1(0d86ec5029afd565e039fe84f7001b2dc77c919c) )

	ROM_REGION( 0x18000, "gfx1", 0 )  // very similar to most cmv4 sets, but differently arranged
	ROM_LOAD( "27c010_2", 0x10000, 0x8000, CRC(9636d785) SHA1(8f851aae0b05ad909c48cf94142ab927145da464) )
	ROM_CONTINUE(         0x08000, 0x8000 )
	ROM_CONTINUE(         0x00000, 0x8000 ) // 0xff filled, overwrite
	ROM_CONTINUE(         0x00000, 0x8000 )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "27c010_3", 0x2000, 0x2000, CRC(a6db1162) SHA1(05019166526b0797e3eca8b72d90c325573b3d74) )
	ROM_CONTINUE(         0x2000, 0x2000 )
	ROM_CONTINUE(         0x2000, 0x2000 )
	ROM_CONTINUE(         0x2000, 0x2000 )
	ROM_CONTINUE(         0x0000, 0x2000 )
	ROM_CONTINUE(         0x0000, 0x2000 )
	ROM_CONTINUE(         0x0000, 0x2000 )
	ROM_CONTINUE(         0x0000, 0x2000 )
	ROM_CONTINUE(         0x6000, 0x2000 )
	ROM_CONTINUE(         0x6000, 0x2000 )
	ROM_CONTINUE(         0x6000, 0x2000 )
	ROM_CONTINUE(         0x6000, 0x2000 )
	ROM_CONTINUE(         0x4000, 0x2000 )
	ROM_CONTINUE(         0x4000, 0x2000 )
	ROM_CONTINUE(         0x4000, 0x2000 )
	ROM_CONTINUE(         0x4000, 0x2000 )

	ROM_REGION( 0x10000, "user1", ROMREGION_ERASEFF )  // no girls ROM

	ROM_REGION( 0x800, "proms", 0 )  // RGB generation
	ROM_LOAD( "82s191an.bin", 0x000, 0x800, BAD_DUMP CRC(d54dda1d) SHA1(c3053cc412bb3b15f5ae7c58c593bd63a6ec4c80) ) // hand-fixed, original dump had address bit 6 stuck

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s137an.bin",  0x000, 0x100, CRC(92975789) SHA1(4a85d169db5e298ee201fe7d4b9964b1df16992e) )
	ROM_IGNORE(0x300)

	ROM_REGION( 0xa00, "plds", 0 )
	ROM_LOAD( "palce16v8.bin", 0x000, 0x114, NO_DUMP )
	ROM_LOAD( "palce16v8.bin", 0x000, 0x114, NO_DUMP )
	ROM_LOAD( "gal20v8.bin",   0x000, 0x114, NO_DUMP )
	ROM_LOAD( "gal20v8.bin",   0x000, 0x114, NO_DUMP )
	ROM_LOAD( "gal20v8.bin",   0x000, 0x114, NO_DUMP )
ROM_END

/*
  Channel Three
  Seems a modded version of Cherry Master.

*/
ROM_START( chthree )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "1.u40",   0x0000, 0x8000, CRC(3d677758) SHA1(d2d13e54d3b55460a05b0ca42e12d8a6d72954ba) )  // 1ST AND 2ND HALF IDENTICAL
	ROM_IGNORE(0x8000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "7.u46",  0x00000, 0x8000, CRC(65e2e9e9) SHA1(3085aec35ac6d232fcf9be847ab4fcde586dd4f5) )  // 1ST AND 2ND HALF IDENTICAL
	ROM_IGNORE(0x8000)
	ROM_LOAD( "8.u47",  0x08000, 0x8000, CRC(0ec483a9) SHA1(55913f830ee310c2326f50af4527aeb63649e68d) )  // 0xxxxxxxxxxxxxxx = 0xFF
	ROM_CONTINUE(       0x08000, 0x8000)
	ROM_LOAD( "9.u48",  0x10000, 0x8000, CRC(39f528f7) SHA1(29d31783afdb256cd9454c87170591d3f9c53665) )  // 1ST AND 2ND HALF IDENTICAL
	ROM_IGNORE(0x8000)

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "3.u49",   0x0000, 0x2000, CRC(b541cbc0) SHA1(ab8666c06a71fa8364c71d14715ddf9e222064cd) )
	ROM_LOAD( "5.u51",   0x2000, 0x2000, CRC(a99c87ba) SHA1(4d74ded22da25e093b09d0a4abfbd3e1eabd816c) )
	ROM_LOAD( "4.u50",   0x4000, 0x2000, CRC(95ecd2aa) SHA1(73452c77dd83f96038d197bad5e37f0b3d9de561) )
	ROM_LOAD( "6.u52",   0x6000, 0x2000, CRC(5b19025d) SHA1(8e861ed8249811fdf50de8ca9c44fe1176a7e340) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "2.u53",  0x0000, 0x10000, CRC(4124228a) SHA1(d1a6c98cac20ae49daaaa165ac9ccfaca14323b1) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u23", 0x0000, 0x0100, CRC(fdb15bef) SHA1(68c6539f5c9136e5f822dce86fcf3335e8c3874d) )
	ROM_LOAD( "82s129.u35", 0x0100, 0x0100, CRC(fd90f7e6) SHA1(6bfa15ab2db8667e28277c9a5cd80ad3d5a0ea4d) )

	ROM_REGION( 0x200, "proms2", 0 )
	ROM_LOAD( "82s129.u24", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )

	ROM_REGION( 0x800, "plds", 0 ) // PALs were bruteforced and converted.
	ROM_LOAD( "tibpal_16l8.u18", 0x0000, 0x117, CRC(374f878e) SHA1(3b3a66dd1addbd4a8678ef8000a5426651010ebd) )
	ROM_LOAD( "tibpal_16l8.u30", 0x0200, 0x117, CRC(d3cfa978) SHA1(9aae06336be34818896c39d9af9c19d8b2035548) )
	ROM_LOAD( "tibpal_16l8.u31", 0x0400, 0x117, CRC(97f1f441) SHA1(bc9e7bba675df363e7fcad18efad89f6a543b2a4) )
	ROM_LOAD( "tibpal_16l8.u32", 0x0600, 0x117, CRC(8a5a8ded) SHA1(abb2bb51f0ead55606cc279ca4bef400d62730b0) )
ROM_END


/*
  2764.u10                m4.64                   IDENTICAL
  27256.u11               m6.256                  IDENTICAL
  2764.u14                m1.64                   IDENTICAL
  2764.u15                m3.64                   IDENTICAL
  27256.u16               m5.256                  IDENTICAL
  27256.u4                m7.256                  IDENTICAL
  82s129.u46              prom1.287               IDENTICAL
  82s129.u79              prom3.287               IDENTICAL
  82s129.u84              prom2.287               IDENTICAL
  2764.u9                 m2.64                   IDENTICAL
  27512.u53               prg512                  4.640198%
  27256.u81                                       NO MATCH

  PCB Layout
  ----------

  |-----|  |------|  |---------------------------|
  |     |--|      |--|  ROM.U4                   |
  |                     ROM.U11  ROM.U10  ROM.U9 |
  |_            DSW5(8) ROM.U16  ROM.U15  ROM.U14|
    |  WF19054  DSW4(8)                          |
   _|           DSW3(8) 6116                     |
  |             DSW2(8) 6116         6116        |
  |             DSW1(8)                          |
  |    ?DIP40                        6116        |
  |                                              |
  |                     PROM.U46            12MHz|
  |                                              |
  |    8255                   PAL-U51            |
  |         ROM.U53                              |
  |                                              |
  |                                              |
  |                                  PAL-U66     |
  |BATTERY  PROM.U79    PAL-U74   PAL-U73        |
  |_        PROM.U84        6116  ROM.U81    Z80 |
    |--------------------------------------------|

  Notes:
        Z80 @ 3.0MHz [12/4]
        WF19054 = AY-3-8910 @ 1.5MHz [12/8]
        ?DIP40 - Maybe another 8255 or HD6845 or something else?

*/
ROM_START( cmv4 )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "27256.u81",  0x0000, 0x1000, CRC(e27e98a3) SHA1(1eb03f6c770f25ff5e3c25a1f9b9294c6b3c61d9) )
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "27256.u16",  0x00000, 0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "27256.u11",  0x08000, 0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "27256.u4",   0x10000, 0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "2764.u15",   0x0000, 0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "2764.u10",   0x2000, 0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "2764.u14",   0x4000, 0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "2764.u9",    0x6000, 0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )  // girl bitmaps
	ROM_LOAD( "27512.u53",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

/*
  cmv4 vs. fruit2

  12 and 12 files
  82s129.u46                                      FIXED BITS (0000x0xx)
  82s129.u46                                      BADADDR                xxxxxxx-
  82s129.u79                                      FIXED BITS (0000xxxx)
  82s129.u84                                      FIXED BITS (0000xxxx)
                        HOLD8_PR1.U46           FIXED BITS (0000x0xx)
                        HOLD8_PR1.U46           BADADDR                xxxxxxx-
                        HOLD8_PR2.U84           FIXED BITS (0000xxxx)
                        HOLD8_PR3.U79           FIXED BITS (0000xxxx)
                        TETRIS_5.U4             1ST AND 2ND HALF IDENTICAL
                        TETRIS_6.U11            1ST AND 2ND HALF IDENTICAL
                        TETRIS_7.U16            1ST AND 2ND HALF IDENTICAL
  2764.u10                HOLDX8_3.U10            IDENTICAL
  2764.u14                HOLDX8_2.U14            IDENTICAL
  2764.u15                HOLDX8_4.U15            IDENTICAL
  82s129.u46              HOLD8_PR1.U46            IDENTICAL
  27512.u53               HOLDX8_8.U53            IDENTICAL
  82s129.u79              HOLD8_PR3.U79            IDENTICAL
  82s129.u84              HOLD8_PR2.U84            IDENTICAL
  2764.u9                 HOLDX8_1.U9             IDENTICAL
  27256.u81               HOLDX8.U81              25.512695%
  27256.u11                                       NO MATCH
  27256.u16                                       NO MATCH
  27256.u4                                        NO MATCH
                          TETRIS_5.U4             NO MATCH
                          TETRIS_6.U11            NO MATCH
                          TETRIS_7.U16            NO MATCH

*/
ROM_START( cmv4a )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "holdx8.u81", 0x0000, 0x2000, CRC(2da4d267) SHA1(3deb6ce4703bb1cca2b58409a6fc5ba7cf601011) )
	ROM_CONTINUE(0x4000,0x2000)
	ROM_CONTINUE(0x2000,0x2000)
	ROM_CONTINUE(0x6000,0x2000)

	ROM_REGION( 0x30000, "gfx1", 0 )  // double size... tetris gfx inside.
	ROM_LOAD( "tetris_7.u16",  0x00000, 0x10000, CRC(a9e61fac) SHA1(a4093868b570af52f1cd816d523dbb6a750bc1af) )
	ROM_LOAD( "tetris_6.u11",  0x10000, 0x10000, CRC(f3e15b41) SHA1(6c44bcdcf7b29d201018e2c2cc0b6b0b62cbaf12) )
	ROM_LOAD( "tetris_5.u4",   0x20000, 0x10000, CRC(79a85560) SHA1(b028345ac2d01c643230c6e6c28189c11734aaf5) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "holdx8_4.u15",   0x0000, 0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "holdx8_3.u10",   0x2000, 0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "holdx8_2.u14",   0x4000, 0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "holdx8_1.u9",    0x6000, 0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )
	// contains a bitmap? and an extra plane for gfx2, should it be used?
	ROM_LOAD( "holdx8_8.u53",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "hold8_pr2.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "hold8_pr3.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "hold8_pr1.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

ROM_START( cmwm )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "waterm.rom",  0x0000, 0x1000, CRC(93b6cb9b) SHA1(294e1e5909b304252c79a7d3f50fc175558e713b) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "27256.u16",  0x00000, 0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "27256.u11",  0x08000, 0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "27256.u4",   0x10000, 0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "2764.u15",   0x0000, 0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "2764.u10",   0x2000, 0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "2764.u14",   0x4000, 0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "2764.u9",    0x6000, 0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )  // girl bitmaps
	ROM_LOAD( "27512.u53",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


ROM_START( cmfun )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "cmvfun.rom",  0x0000, 0x1000, CRC(128f373e) SHA1(24d51ab669d568c004e2c94cac22eb8476ce2718) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "27256.u16",  0x00000, 0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "27256.u11",  0x08000, 0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "27256.u4",   0x10000, 0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "2764.u15",   0x0000, 0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "2764.u10",   0x2000, 0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "2764.u14",   0x4000, 0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "2764.u9",    0x6000, 0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )  // girl bitmaps
	ROM_LOAD( "27512.u53",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

/*
  this has a little protection (?):

  8199: 3A 00 A0    ld   a,($A000) <---- 0x59
  819C: FE 5A       cp   $5A
  819E: 20 F9       jr   nz,$8199
  81A0: 21 60 82    ld   hl,$8260
  81A3: 06 0F       ld   b,$0F
  81A5: 7E          ld   a,(hl)
  81A6: C6 30       add  a,$30
  81A8: 4F          ld   c,a
  81A9: 3A 00 A0    ld   a,($A000)
  81AC: B9          cp   c
  81AD: 20 FA       jr   nz,$81A9
  81AF: 23          inc  hl
  81B0: 10 F3       djnz $81A5

  do PC = 0x81b2 to bypass and boot the game

*/
ROM_START( 3cdpoker )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "v1.6.u81",  0x0000, 0x10000, CRC(d0aeca41) SHA1(f780dbe2d2a0d82b8110a57e161547be41318a81) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "7.u16",  0x00000, 0x8000, CRC(d09f9414) SHA1(db5eb359a3e3fcd4d964403888a5496643081f5e) )
	ROM_LOAD( "6.u11",  0x08000, 0x8000, CRC(f169878f) SHA1(b8bd5e79a813cea0aff8c80e6284bc2f69644c3c) )
	ROM_LOAD( "5.u4",   0x10000, 0x8000, CRC(591c355e) SHA1(dd4f63853a380c400ca22c4d8f5c6e4f4c002f23) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "4.u15",   0x0000, 0x2000, CRC(534bec1a) SHA1(ca7093bbb2ab9da5174688e8d0096ee5c50ca495) )  // this and the following are identical and only contain 0x00 and 0xff? GFX seem ok in game
	ROM_LOAD( "3.u10",   0x2000, 0x2000, CRC(534bec1a) SHA1(ca7093bbb2ab9da5174688e8d0096ee5c50ca495) )
	ROM_LOAD( "2.u14",   0x4000, 0x2000, CRC(ef4b3dc8) SHA1(85dc609ee133950f46ccdb8994bee1cf01bc53b9) )
	ROM_LOAD( "1.u9",    0x6000, 0x2000, CRC(1a700a5f) SHA1(1c214e42644a0f551ad18aea869f4dbad17bfe94) )

	ROM_REGION( 0x10000, "user1", 0 )  // girl bitmaps
	ROM_LOAD( "8.u53",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


ROM_START( 3cdpokera )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "v1.0.u81",  0x0000, 0x10000, CRC(26f21835) SHA1(9a29daeb60a91ab6c73820769911fa1ddd27e3b2) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "7.u16",  0x00000, 0x8000, CRC(d09f9414) SHA1(db5eb359a3e3fcd4d964403888a5496643081f5e) )
	ROM_LOAD( "6.u11",  0x08000, 0x8000, CRC(f169878f) SHA1(b8bd5e79a813cea0aff8c80e6284bc2f69644c3c) )
	ROM_LOAD( "5.u4",   0x10000, 0x8000, CRC(591c355e) SHA1(dd4f63853a380c400ca22c4d8f5c6e4f4c002f23) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "4.u15",   0x0000, 0x2000, CRC(534bec1a) SHA1(ca7093bbb2ab9da5174688e8d0096ee5c50ca495) )  // this and the following are identical and only contain 0x00 and 0xff? GFX seem ok in game
	ROM_LOAD( "3.u10",   0x2000, 0x2000, CRC(534bec1a) SHA1(ca7093bbb2ab9da5174688e8d0096ee5c50ca495) )
	ROM_LOAD( "2.u14",   0x4000, 0x2000, CRC(ef4b3dc8) SHA1(85dc609ee133950f46ccdb8994bee1cf01bc53b9) )
	ROM_LOAD( "1.u9",    0x6000, 0x2000, CRC(1a700a5f) SHA1(1c214e42644a0f551ad18aea869f4dbad17bfe94) )

	ROM_REGION( 0x10000, "user1", 0 )  // girl bitmaps
	ROM_LOAD( "8.u53",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


// looks like a bootleg of cmv4
ROM_START( cmaster )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "3.bin",   0x00000, 0x1000, CRC(ccb64229) SHA1(532f4b59952702a3609ff20239acbbacaf71f38f) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)
	ROM_IGNORE(0x8000)  // 2nd half is identical

	ROM_REGION( 0x30000, "gfx1", 0 )
	ROM_LOAD( "6.bin",   0x00000, 0x10000, CRC(a98d610f) SHA1(d14b3bc8bd6dc9fe2d3fb05ec08224b1a9d52bee) )
	ROM_LOAD( "7.bin",   0x10000, 0x10000, CRC(a0ffd2d6) SHA1(e78d20d3ab578ccc880bc19678782cb1f8d3671e) )
	ROM_LOAD( "8.bin",   0x20000, 0x10000, CRC(4f67fca7) SHA1(808e84b9b1f67f137528bb76b0e8aac3dceba20c) )

	// 4-9 all of these contain the same bitmap at 0x0000-0xe000
	// rom 9 matches the rom containing the bitmap in the cmv4 set, but also contains an extra gfx2 plane
	// should that plane be used??
	ROM_REGION( 0x50000, "graphics", 0 )
	ROM_LOAD( "4.bin",   0x00000, 0x10000, CRC(52240e0f) SHA1(7b8375e1f91fdff2b4ccc2e81fbcf843f7ede292) )
	ROM_LOAD( "5.bin",   0x10000, 0x10000, CRC(763973c1) SHA1(b364f22041f1d678332554edb3c718cf0ad778b4) )
	ROM_LOAD( "1.bin",   0x20000, 0x10000, CRC(634fe2ad) SHA1(2284a09446c8928060270861d372a19c0c9d827a) )
	ROM_LOAD( "2.bin",   0x30000, 0x10000, CRC(a3d59f79) SHA1(588c45550cca673390a35af9617c68c853ff84ba) )
	ROM_LOAD( "9.bin",   0x40000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	// for now we don't copy the extra plane..
	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_COPY( "graphics", 0x0e000, 0x00000, 0x2000 )
	ROM_COPY( "graphics", 0x1e000, 0x02000, 0x2000 )
	ROM_COPY( "graphics", 0x2e000, 0x04000, 0x2000 )
	ROM_COPY( "graphics", 0x3e000, 0x06000, 0x2000 )

	// copy one of the versions of the bitmap
	ROM_REGION( 0x10000, "user1", 0 )
	ROM_COPY( "graphics", 0x40000, 0x00000, 0xe000 )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


/*
  Cherry Master II ver 8.41
  (cmasterb & cmasterc)

  CPU : LH0080B Z80B CPU

  RAM : MB8128-15 x2
        MB8416-20 x2
        HM6116

  Sound : Winbond WF19054

  Crystal : 12.000 Mhz

  Dip SW :  4x8 dip + 1 Switch (main test ???)

*/
ROM_START( cmasterb )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "u81.9",  0x0000,  0x1000, CRC(09e44314) SHA1(dbb7e9afc9a1dc0d4ce7b150324077f3f3579c02) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "u16.7", 0x00000,  0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "u11.6", 0x08000,  0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "u4.5",  0x10000,  0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "u15.4",  0x0000,  0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "u10.3",  0x2000,  0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "u14.2",  0x4000,  0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "u9.1",   0x6000,  0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "u53.8",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	// proms taken from cmv4, probably wrong
	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


ROM_START( cmezspin )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "ezspin.rom",  0x0000,  0x1000, CRC(de92b85c) SHA1(36e99b1444980a279293839c6db10f577b9e8657) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "u16.7", 0x00000,  0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "up11.6", 0x08000,  0x8000, CRC(c1466efa) SHA1(d725fc507c77e66bde93d0c33bf469add15f39b9) ) // changed title
	ROM_LOAD( "u4.5",  0x10000,  0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "u15.4",  0x0000,  0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "u10.3",  0x2000,  0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "u14.2",  0x4000,  0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "u9.1",   0x6000,  0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "u53.8",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	// proms taken from cmv4, probably wrong
	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


ROM_START( cmezspina )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "ezspinhcv2.rom", 0x0000, 0x1000, CRC(5203f088) SHA1(2ac2e32350661dc54fb78cff5543d68bda072614) )
	ROM_CONTINUE(               0x4000, 0x1000 )
	ROM_CONTINUE(               0x3000, 0x1000 )
	ROM_CONTINUE(               0x7000, 0x1000 )
	ROM_CONTINUE(               0x1000, 0x1000 )
	ROM_CONTINUE(               0x6000, 0x1000 )
	ROM_CONTINUE(               0x2000, 0x1000 )
	ROM_CONTINUE(               0x5000, 0x1000 )

	// only the program ROM was provided, but dumper's readme says everything else matches cmezspin set
	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "u16.7", 0x00000,  0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "u11.6", 0x08000,  0x8000, CRC(c1466efa) SHA1(d725fc507c77e66bde93d0c33bf469add15f39b9) )
	ROM_LOAD( "u4.5",  0x10000,  0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "u15.4", 0x0000,  0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "u10.3", 0x2000,  0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "u14.2", 0x4000,  0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "u9.1",  0x6000,  0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "u53.8", 0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


ROM_START( cmezspinb )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "ezspinhcv3.rom", 0x0000, 0x1000, CRC(1c7538f8) SHA1(ca458e45161284e6cb7ad7a66d799cd93bfdeb93) )
	ROM_CONTINUE(               0x4000, 0x1000 )
	ROM_CONTINUE(               0x3000, 0x1000 )
	ROM_CONTINUE(               0x7000, 0x1000 )
	ROM_CONTINUE(               0x1000, 0x1000 )
	ROM_CONTINUE(               0x6000, 0x1000 )
	ROM_CONTINUE(               0x2000, 0x1000 )
	ROM_CONTINUE(               0x5000, 0x1000 )

	// only the program ROM was provided, but dumper's readme says everything else matches cmezspin set
	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "u16.7", 0x00000,  0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "u11.6", 0x08000,  0x8000, CRC(c1466efa) SHA1(d725fc507c77e66bde93d0c33bf469add15f39b9) )
	ROM_LOAD( "u4.5",  0x10000,  0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "u15.4", 0x0000,  0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "u10.3", 0x2000,  0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "u14.2", 0x4000,  0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "u9.1",  0x6000,  0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "u53.8", 0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


ROM_START( cmasterc )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "msii841.u81",  0x3000,  0x1000, CRC(977db602) SHA1(0fd3d6781b654ac6befdc9278f84ca708d5d448c) )
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x0000,0x1000)
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "msii841.u16", 0x00000,  0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "msii841.u11", 0x08000,  0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "msii841.u4",  0x10000,  0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	// these gfx are in a different format to usual
	ROM_REGION( 0x8000, "reels", 0 )
	ROM_LOAD( "msii841.u1",  0x0000,  0x4000, CRC(cf322ed2) SHA1(84df96229b7bdba0ab498e3bf9c77d7a7661f7b3) )
	ROM_LOAD( "msii841.u2",  0x4000,  0x4000, CRC(58c05653) SHA1(59454c07f4fe5b684d078cf97f2b1ee05b02f4ed) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "msii841.u53",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	// proms taken from cmv4, probably wrong
	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

/*
  this set is weird, apart from the MGRAISE.BIN it's a cherry master set, I'm assuming that somehow
  there is extra hardware which causes it to run a different game contained in that rom?

  the extra rom contains

  MEGA DOUBLE POKER TM        COPYRIGHT 1991

  as well as various

  COPYRIGHT (C) 1988-90-92 GERALD DUHAMEL

  strings spread across the rom

  ------------------

  Blitz Video Poker
  1991

  Hardware for a real Video Poker Machine that was supposed to pay out $$$.

  Contains:

  1 X Z80 CPU
  2 X 6505s?
  1 GI AY-3-8910
  2 x 8255

  CH3      BIN        32,768  11-15-98  8:46a CH3.BIN
  MAST9    BIN        65,536  11-15-98  8:47a MAST9.BIN
  MAST5    BIN        32,768  11-15-98  8:48a MAST5.BIN
  MAST6    BIN        32,768  11-15-98  8:50a MAST6.BIN
  MAST7    BIN        32,768  11-15-98  8:50a MAST7.BIN
  MAST1    BIN         8,192  11-15-98  8:52a MAST1.BIN
  MAST2    BIN         8,192  11-15-98  8:53a MAST2.BIN
  MAST3    BIN         8,192  11-15-98  8:54a MAST3.BIN
  MAST4    BIN         8,192  11-15-98  8:55a MAST4.BIN
  MGRAISE  BIN       131,072  11-15-98  8:58a MGRAISE.BIN Sound Amp with 6502

*/
ROM_START( cmasterbv )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "ch3.bin",  0x0000, 0x1000, CRC(9af51e47) SHA1(ac002c218502430a3e45259776ca409d32d2d4e5) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)

	ROM_REGION( 0x20000, "extra", 0 )  // how do we use this?!!
	ROM_LOAD( "mgraise.bin",  0x0000, 0x20000, CRC(019f37d4) SHA1(ab71fe0b41ff4415896a23f28b27a0e64950c68c) )


	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "mast5.bin",  0x00000, 0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "mast6.bin",  0x08000, 0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "mast7.bin",   0x10000, 0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "mast3.bin",  0x0000, 0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "mast4.bin",  0x2000, 0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "mast1.bin",  0x4000, 0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "mast2.bin",  0x6000, 0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 ) // girl bitmaps
	ROM_LOAD( "mast9.bin",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


ROM_START( cmasterd )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "cherryb.rom",  0x0000, 0x1000, CRC(b6ab94f6) SHA1(6e74a2354d15aa1da6b8207e0413158d7cb52a44) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "u16.7", 0x00000,  0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "u11.6", 0x08000,  0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "u4.5",  0x10000,  0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "u15.4",  0x0000,  0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "u10.3",  0x2000,  0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "u14.2",  0x4000,  0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "u9.1",   0x6000,  0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "u53.8",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	// proms taken from cmv4, probably wrong
	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


ROM_START( cmastere )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "cm33.rom",  0x0000, 0x1000, CRC(c3c3f7df) SHA1(47eda025859afebe64fd76e17e8390262fb40e0b) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "u16.7", 0x00000,  0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "u11.6", 0x08000,  0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "u4.5",  0x10000,  0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "u15.4",  0x0000,  0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "u10.3",  0x2000,  0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "u14.2",  0x4000,  0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "u9.1",   0x6000,  0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "u53.8",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	// proms taken from cmv4, probably wrong
	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


ROM_START( cmasterf )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "cmbig55.rom",  0x0000, 0x1000, CRC(2cc4df7b) SHA1(ad5b8108913ff88fb435c8c12b47446575e1360e) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "u16.7", 0x00000,  0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "u11.6", 0x08000,  0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "u4.5",  0x10000,  0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "u15.4",  0x0000,  0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "u10.3",  0x2000,  0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "u14.2",  0x4000,  0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "u9.1",   0x6000,  0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "u53.8",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	// proms taken from cmv4, probably wrong
	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


/*
  Cherry Master I (CM1-1.01)
  Sticker with "Cherry Master V4 -B-" on the PCB.
  Similar to cmasterb. Different program.

  1x TMPZ84C00AP-6   u80    8-bit Microprocessor
  1x D8255AC-5       u36    Programmable Peripheral Interface
  1x D71055C         u54    Parallel Interface Unit
  1x YM2149F         u13    Programmable Sound Generator
  1x oscillator 12.000MHz   Y1

  ROMs
  4x 2764    1,2,3,4
  4x 27256   5,6,7,9
  1x 27512   8
  3x N82S129AN    u46, u79, u84

  RAMs
  1x LC3517AL-10    u82
  4x D4016CX-15-10  u22, u26, u28, u38

  PLDs
  4x PALCE16V8H-25pc/4    u51, u66, u73, u74

  Others
  1x 36x2 edge connector
  1x 10x2 edge connector
  1x pushbutton (SW6)
  1x trimmer (volume)(VR1)
  5x 8x2 switches DIP(SW1-SW5)
  1x battery 5.5V(BT1)

*/
ROM_START( cmasterg )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "9.u81",  0x0000,  0x1000, CRC(10979629) SHA1(a7342e37c75c85aef8a86ab5366a9e27f2c4bab8) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "7.u16", 0x00000,  0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "6.u11", 0x08000,  0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "5.u4",  0x10000,  0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "4.u15",  0x0000,  0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "3.u10",  0x2000,  0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "2.u14",  0x4000,  0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "1.u9",   0x6000,  0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "8.u53",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "n82s129an.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "n82s129an.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "n82s129an.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


/*
  Cherry Master I (V1.10)
  Original Dyna upgrade for Cherry Master boards.
  The game runs in an original Dyna D9001 PCB.
  It lacks the STOP ALL button.

  From the owner (sic):
  - The reels cannot be stop, not exist all stop button or cannot be stop from small, big, double-up button.
  - The odds still be "high" (on the version 4.x be "low" odds).
  - Not hold a pair option to, and the min bet to start is fixed x1.

*/
ROM_START( cmasterh )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "cm_v1.10_dyna.bin",  0x0000,  0x1000, CRC(872f2ef0) SHA1(ec68a03a1e8ab793d4a5eae1ce25f91608351c55) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "7.u16", 0x00000,  0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "6.u11", 0x08000,  0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "5.u4",  0x10000,  0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "4.u15",  0x0000,  0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "3.u10",  0x2000,  0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "2.u14",  0x4000,  0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "1.u9",   0x6000,  0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "8.u53",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "n82s129an.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "n82s129an.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "n82s129an.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


/*
  Cherry Master.

  The EPROMS devices only hold the second half of the needed program and regular tiles data.
  EPROMS are NMC27CP128Q that are sized 0x4000, when the real data should be 0x8000 for each position.

  *EDIT*
  Even when the NMC27CP128Q datasheet says that these devices are 128 Kbits (16k x8), we redumped
  them as 27c256, and got perfect complete 32k x8 dumps.

  This is very weird, since the datasheet diagram clearly shows that this device lacks of A14 line.

  So... The National NMC27CP128Q devices could hold twice the specified size, or these on the board
  are just fake devices for protection purposes.

*/
ROM_START( cmasteri )
	ROM_REGION( 0x10000, "maincpu", 0 )  // 32k x 8 data coming from a real NMC27CP128Q
	ROM_LOAD( "9.u81",  0x0000,  0x1000, CRC(2738eb55) SHA1(95e420544f36e4ce6358f14fee7a6b7ecd4cc568) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )  // 32k x 8 data coming from real NMC27CP128Q devices
	ROM_LOAD( "7.u16", 0x00000,  0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "6.u11", 0x08000,  0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "5.u4",  0x10000,  0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "4.u15",  0x0000,  0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "3.u10",  0x2000,  0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "2.u14",  0x4000,  0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "1.u9",   0x6000,  0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "8.u58",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "74s287.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "74s287.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "74s287.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


/*
  Cherry Master.
  CM-1 v1.01

  These sets were modified to use different inputs to stop all reels.

  cmasterj uses BET to stop all.
  (this set needs to press stop as soon as the spin starts)

  cmasterk uses TAKE to stop all.

  Should be other changes since there are program blocks moved/modded,
  but these are unknown.

*/
ROM_START( cmasterj )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "mb1_hold__bet_all_stop.bin", 0x0000, 0x1000, CRC(5f168417) SHA1(7ba7fed94ce7211fa8cf6c2abe8dea4b44a22aee) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "7.u16", 0x00000, 0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "6.u11", 0x08000, 0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "5.u4",  0x10000, 0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "4.u15",  0x0000, 0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "3.u10",  0x2000, 0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "2.u14",  0x4000, 0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "1.u9",   0x6000, 0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "8.u58",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "prom1.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "prom2.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "prom3.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

ROM_START( cmasterk )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "mb1_hold__take_all_stop.bin", 0x0000, 0x1000, CRC(4ffc137f) SHA1(0f080241fa9ded561324b0c602f80159f4683387) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "7.u16", 0x00000, 0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "6.u11", 0x08000, 0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "5.u4",  0x10000, 0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "4.u15",  0x0000, 0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "3.u10",  0x2000, 0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "2.u14",  0x4000, 0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "1.u9",   0x6000, 0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "8.u58",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "prom1.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "prom2.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "prom3.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

ROM_START( cmasterl )  // most similar to cmasterbv but without the extra ROM
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "sc9.16f", 0x0000, 0x1000, CRC(9b305a27) SHA1(7ab27f3ea1c0fd71ebaa54fc3d60d43cf6ab7c8b) )
	ROM_CONTINUE(        0x4000, 0x1000 )
	ROM_CONTINUE(        0x3000, 0x1000 )
	ROM_CONTINUE(        0x7000, 0x1000 )
	ROM_CONTINUE(        0x1000, 0x1000 )
	ROM_CONTINUE(        0x6000, 0x1000 )
	ROM_CONTINUE(        0x2000, 0x1000 )
	ROM_CONTINUE(        0x5000, 0x1000 )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5.1e", 0x00000, 0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "6.2e", 0x08000, 0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "7.3e", 0x10000, 0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "3.2f", 0x0000, 0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "4.3f", 0x2000, 0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "1.2h", 0x4000, 0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "2.3h", 0x6000, 0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )  // girl bitmaps
	ROM_LOAD( "1.10c", 0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

ROM_START( cutyline )  // Dyna D9001 PCB, DYNA QL-1 V1.01 string in ROM
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "16f", 0x0000, 0x1000, CRC(07accc1f) SHA1(fa6ff31acf93510530c81d474cccc0d4f73235dc) )
	ROM_CONTINUE(    0x4000, 0x1000 )
	ROM_CONTINUE(    0x3000, 0x1000 )
	ROM_CONTINUE(    0x7000, 0x1000 )
	ROM_CONTINUE(    0x1000, 0x1000 )
	ROM_CONTINUE(    0x6000, 0x1000 )
	ROM_CONTINUE(    0x2000, 0x1000 )
	ROM_CONTINUE(    0x5000, 0x1000 )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "70.3e", 0x00000, 0x8000, CRC(19cc1d67) SHA1(47487f9362bfb36a32100ed772960628844462bf) )
	ROM_LOAD( "60.2e", 0x08000, 0x8000, CRC(63b3df4e) SHA1(9bacd23da598805ec18ec5ad15cab95d71eb9262) )
	ROM_LOAD( "50.1e", 0x10000, 0x8000, CRC(e39fff9c) SHA1(22fdc517fa478441622c6245cecb5728c5595757) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "4.3f", 0x0000, 0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "3.2f", 0x2000, 0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "2.3h", 0x4000, 0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "1.2h", 0x6000, 0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )  // girl bitmaps
	ROM_LOAD( "8.10c", 0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "16.16c", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "15.15c", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "9.9e", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

ROM_START( cutylinea )  // bootleg PCB, DYNA QL-1 V8.05C string in ROM
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "rom9.16f", 0x0000, 0x1000, CRC(8a16515f) SHA1(411f1286c25905150e77f002d940b7a6de329b25) )
	ROM_CONTINUE(         0x4000, 0x1000 )
	ROM_CONTINUE(         0x3000, 0x1000 )
	ROM_CONTINUE(         0x7000, 0x1000 )
	ROM_CONTINUE(         0x1000, 0x1000 )
	ROM_CONTINUE(         0x6000, 0x1000 )
	ROM_CONTINUE(         0x2000, 0x1000 )
	ROM_CONTINUE(         0x5000, 0x1000 )
	ROM_CONTINUE(         0x8000, 0x8000 )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "rom7.3e", 0x00000, 0x8000, CRC(1fa8d85e) SHA1(963570178dfb359c6ef4c322791de8f08306eb0c) )
	ROM_LOAD( "rom6.2e", 0x08000, 0x8000, CRC(36dfbbcb) SHA1(8dee44f4b007a41b67e2d4eb75b88b02b9118be0) )
	ROM_LOAD( "rom5.1e", 0x10000, 0x8000, CRC(2350e482) SHA1(03c4a83fb5b544d061378db319ff652a2c053062) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "rom4.3f", 0x0000, 0x2000, CRC(2d044e6b) SHA1(7ca60cca8de2c368ca43f1ce54a5140a3dd1ee37) )
	ROM_LOAD( "rom3.2f", 0x2000, 0x2000, CRC(e7e300c2) SHA1(b21926d41aa9d27c78fbf28efd86ac070891a7bb) )
	ROM_LOAD( "rom2.3h", 0x4000, 0x2000, CRC(955d0517) SHA1(3662f97996f80ef9093936dfe0a73de5f6850294) )
	ROM_LOAD( "rom1.2h", 0x6000, 0x2000, CRC(188fc72b) SHA1(501afe548dc279c5f77d9827d0a073875fa7a64f) )

	ROM_REGION( 0x10000, "user1", 0 )  // girl bitmaps... dump not included, but present on PCB pic
	ROM_LOAD( "rom8.10c", 0x0000, 0x10000, BAD_DUMP CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )  // dump not included, but present on PCB pic
	ROM_LOAD( "b12.16c", 0x0000, 0x0100, BAD_DUMP CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "b12.15c", 0x0100, 0x0100, BAD_DUMP CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )  // dump not included, but present on PCB pic
	ROM_LOAD( "b11.9e", 0x0000, 0x0100, BAD_DUMP CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

ROM_START( cutylineb )  // bootleg PCB, DYNA QL-1 V7C.14 string in ROM
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "rom9.16f", 0x0000, 0x1000, CRC(90b700aa) SHA1(9abdedf144f631f21853e7df8f533a5b0d4bf43e) )
	ROM_CONTINUE(         0x4000, 0x1000 )
	ROM_CONTINUE(         0x3000, 0x1000 )
	ROM_CONTINUE(         0x7000, 0x1000 )
	ROM_CONTINUE(         0x1000, 0x1000 )
	ROM_CONTINUE(         0x6000, 0x1000 )
	ROM_CONTINUE(         0x2000, 0x1000 )
	ROM_CONTINUE(         0x5000, 0x1000 )
	ROM_CONTINUE(         0x8000, 0x8000 )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "rom7.3e", 0x00000, 0x8000, CRC(1fa8d85e) SHA1(963570178dfb359c6ef4c322791de8f08306eb0c) )
	ROM_LOAD( "rom6.2e", 0x08000, 0x8000, CRC(36dfbbcb) SHA1(8dee44f4b007a41b67e2d4eb75b88b02b9118be0) )
	ROM_LOAD( "rom5.1e", 0x10000, 0x8000, CRC(2350e482) SHA1(03c4a83fb5b544d061378db319ff652a2c053062) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "rom4.3f", 0x0000, 0x2000, CRC(2d044e6b) SHA1(7ca60cca8de2c368ca43f1ce54a5140a3dd1ee37) )
	ROM_LOAD( "rom3.2f", 0x2000, 0x2000, CRC(e7e300c2) SHA1(b21926d41aa9d27c78fbf28efd86ac070891a7bb) )
	ROM_LOAD( "rom2.3h", 0x4000, 0x2000, CRC(955d0517) SHA1(3662f97996f80ef9093936dfe0a73de5f6850294) )
	ROM_LOAD( "rom1.2h", 0x6000, 0x2000, CRC(188fc72b) SHA1(501afe548dc279c5f77d9827d0a073875fa7a64f) )

	ROM_REGION( 0x10000, "user1", 0 )  // girl bitmaps... dump not included, but present on PCB pic
	ROM_LOAD( "rom8.10c", 0x0000, 0x10000, BAD_DUMP CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )  // dump not included, but present on PCB pic
	ROM_LOAD( "b12.16c", 0x0000, 0x0100, BAD_DUMP CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "b12.15c", 0x0100, 0x0100, BAD_DUMP CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )  // dump not included, but present on PCB pic
	ROM_LOAD( "b11.9e", 0x0000, 0x0100, BAD_DUMP CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

ROM_START( srmagic )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "real magic.u81", 0x00000, 0x10000, CRC(93ef9f6a) SHA1(ad482b5df9de02a245567642d20f51da2ec2dfed) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "7.u16", 0x00000, 0x8000, CRC(a88e5ba1) SHA1(571658a50dd7dafdaf3eeb18a5153b014ee9f837) )
	ROM_LOAD( "6.u11", 0x08000, 0x8000, CRC(ca6578e7) SHA1(a33fe55f51b15850bef507d36192707c0959f708) )
	ROM_LOAD( "5.u4",  0x10000, 0x8000, CRC(5227ccd6) SHA1(16b31977782e14aa9757cc99bf21a95ffdae3d25) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "4.u15", 0x0000, 0x2000, CRC(1df9ffa7) SHA1(851f32c369e7879c2054399a820463d84007bc1c) )  // 1xxxxxxxxxxxx = 0x00
	ROM_LOAD( "3.u10", 0x2000, 0x2000, CRC(123ccb63) SHA1(c23391a1fb70a8122eee48b8ea6300a058da98d5) )  // 1xxxxxxxxxxxx = 0x00
	ROM_LOAD( "2.u14", 0x4000, 0x2000, CRC(fdaeb68f) SHA1(f41e54d43cb73c7e9ae99e78043a7df4958cb8ce) )  // 1xxxxxxxxxxxx = 0x00
	ROM_LOAD( "1.u9",  0x6000, 0x2000, CRC(768d2483) SHA1(ac7f02b26d12363281cb65b74577a8fc1d68c35b) )  // 1xxxxxxxxxxxx = 0x00

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "8.u13", 0x00000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x000, 0x100, CRC(208727e7) SHA1(7c868b06da03fe95266555775b8185d38e25ce3f) )
	ROM_LOAD( "82s129.u79", 0x100, 0x100, CRC(01349092) SHA1(cd2910f7d842f37db35ad25414536a8c49a85293) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x000, 0x100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

// A hack of cmv4 with cb3 GFX. DYNA CM V4.1 and ZIOGAS V4.1 in ROM
ROM_START( cmv4zg )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "512_main.bin", 0x04000, 0x4000, CRC(4367007d) SHA1(fd3a864dd124d14ed3b15d550b53c07ae13a6f23) )
	ROM_CONTINUE(             0x03000, 0x1000 )
	ROM_CONTINUE(             0x02000, 0x1000 )
	ROM_CONTINUE(             0x01000, 0x1000 )
	ROM_CONTINUE(             0x00000, 0x1000 )
	ROM_CONTINUE(             0x08000, 0x8000 )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "rom7-91.bin", 0x00000, 0x8000, CRC(05ffb23d) SHA1(41fecf4e236d8a4a55b7e65a20e0ee70fe40f3bf) )
	ROM_LOAD( "rom6-91.bin", 0x08000, 0x8000, CRC(91d66abf) SHA1(6a8f741e23cd5afefad3cb73217481551ca80b06) )
	ROM_LOAD( "rom5-91.bin", 0x10000, 0x8000, CRC(449e8aa2) SHA1(236bbd3f821874fc55745d7c8c7e9a1c65bb472f) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "rom4-91.bin", 0x0000, 0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "rom3-91.bin", 0x2000, 0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "rom2-91.bin", 0x4000, 0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )
	ROM_LOAD( "rom1-91.bin", 0x6000, 0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )

	ROM_REGION( 0x10000, "user1", ROMREGION_ERASE00 )
	// not populated

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x000, 0x100, CRC(208727e7) SHA1(7c868b06da03fe95266555775b8185d38e25ce3f) )
	ROM_LOAD( "82s129.u79", 0x100, 0x100, CRC(01349092) SHA1(cd2910f7d842f37db35ad25414536a8c49a85293) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x000, 0x100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )

	ROM_REGION( 0x400, "plds", 0 )
	ROM_LOAD( "pal16l8a.g10", 0x000, 0x104, CRC(a7ea9062) SHA1(e17b2831d9c6302318f54d5382aef1d9c218a34b) )
	ROM_LOAD( "pal16l8a.c12", 0x200, 0x104, CRC(adcc5e32) SHA1(6fae21d1d6f0aec18a7b4d604db87ee2df25f9a4) )
ROM_END

/*
  A hack of cmv4 with cb3 GFX. Only ZIOGAS V4.1 in ROM
  (DYNA string removed, among other changes from the above set)

*/
ROM_START( cmv4zga )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "512_main.bin", 0x04000, 0x4000, CRC(9aa5e5d2) SHA1(f9c7cfe433bf3a5ff8c5c066393ec74d517715cf) )
	ROM_CONTINUE(             0x03000, 0x1000 )
	ROM_CONTINUE(             0x02000, 0x1000 )
	ROM_CONTINUE(             0x01000, 0x1000 )
	ROM_CONTINUE(             0x00000, 0x1000 )
	ROM_CONTINUE(             0x08000, 0x8000 )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "rom7-91.bin", 0x00000, 0x8000, CRC(05ffb23d) SHA1(41fecf4e236d8a4a55b7e65a20e0ee70fe40f3bf) )
	ROM_LOAD( "rom6-91.bin", 0x08000, 0x8000, CRC(91d66abf) SHA1(6a8f741e23cd5afefad3cb73217481551ca80b06) )
	ROM_LOAD( "rom5-91.bin", 0x10000, 0x8000, CRC(449e8aa2) SHA1(236bbd3f821874fc55745d7c8c7e9a1c65bb472f) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "rom4-91.bin", 0x0000, 0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "rom3-91.bin", 0x2000, 0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "rom2-91.bin", 0x4000, 0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )
	ROM_LOAD( "rom1-91.bin", 0x6000, 0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )

	ROM_REGION( 0x10000, "user1", ROMREGION_ERASE00 )
	// not populated

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x000, 0x100, CRC(208727e7) SHA1(7c868b06da03fe95266555775b8185d38e25ce3f) )
	ROM_LOAD( "82s129.u79", 0x100, 0x100, CRC(01349092) SHA1(cd2910f7d842f37db35ad25414536a8c49a85293) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x000, 0x100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )

	ROM_REGION( 0x400, "plds", 0 )
	ROM_LOAD( "pal16l8a.g10", 0x000, 0x104, CRC(a7ea9062) SHA1(e17b2831d9c6302318f54d5382aef1d9c218a34b) )
	ROM_LOAD( "pal16l8a.c12", 0x200, 0x104, CRC(adcc5e32) SHA1(6fae21d1d6f0aec18a7b4d604db87ee2df25f9a4) )
ROM_END


ROM_START( ll3 )  // WANG QL-1  V3.03 string
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "min bet 8.u1", 0x00000, 0x10000, CRC(f19d0af3) SHA1(deefe5782213d60d8d0aae6826aa6a0109925289) )  // on sub PCB

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "lucky line iii rom 7.u16", 0x00000, 0x8000, CRC(304f9630) SHA1(78089e9d59e471e4cd70fbf254e46dc0c0729957) )
	ROM_LOAD( "lucky line iii rom 6.u11", 0x08000, 0x8000, CRC(1afe38d9) SHA1(cf247634b80f72c8288e49b7c5628b5cc9e555d3) )
	ROM_LOAD( "lucky line iii rom 5.u4",  0x10000, 0x8000, CRC(e7660d2c) SHA1(1df9553bfaaf94ca076cea772dc72b6b5cb2c557) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "lucky line iii rom 4.u15",  0x0000, 0x2000, CRC(f9d75b29) SHA1(b56572fcfc2a20f45f241ec433e1fa813cb3e260) )
	ROM_LOAD( "lucky line iii rom 3.u10",  0x2000, 0x2000, CRC(104eda10) SHA1(71b77dbf0c34d2186ac25e906da406fc74c180fc) )
	ROM_LOAD( "lucky line iii rom 2.u14",  0x4000, 0x2000, CRC(14369397) SHA1(32dc356d333e9b439e490407cef9eb70c44e86a4) )
	ROM_LOAD( "lucky line iii rom 1.u9",   0x6000, 0x2000, CRC(626947e5) SHA1(13b7dd7fad4659ddc6a82883f1da5a8dd09e46b5) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "lucky line iii rom 8.u53",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "prom1.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "prom2.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "prom3.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END


ROM_START( cmast99 )
	ROM_REGION( 0x10000, "maincpu", 0 )
	// this ROM loading is confirmed via ICE dump at reset
	// however, ICE dump after 1 second shows that the 0x4000-0x4fff range gets overwritten with what's at 0x8000-0x8fff.
	// ROM banking as protection? Couldn't spot any suspect writes to select it.
	// there are however strange, apparently intentional writes in ROM ranges.
	// see code at 0x332 and at 0x358, f.e.
	ROM_LOAD( "cm99-041-8.u81", 0x0000, 0x1000, CRC(5fb0800e) SHA1(14d316b7b89340c5b5c9fdd0b43d5810513b74d6) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)
	ROM_CONTINUE(0x8000,0x8000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "cm99-041-7.u16", 0x00000, 0x8000, CRC(69e2aef2) SHA1(195faec239734650dcd777d55a8da84e3a0ed50c) )
	ROM_LOAD( "cm99-041-6.u11", 0x08000, 0x8000, CRC(900f36f5) SHA1(0fd41f8c8cb2f7940b653a1fad93df2e3f28a34b) )
	ROM_LOAD( "cm99-041-5.u4",  0x10000, 0x8000, CRC(3e465e38) SHA1(847dc27e45d495cb924b3fd5ce8e68a1cb83ffc8) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "cm99-041-4.u15", 0x0000, 0x2000, CRC(6b870b29) SHA1(d65f24817d9d45c148cb857439b46e9e75dabfe7) )
	ROM_LOAD( "cm99-041-3.u10", 0x2000, 0x2000, CRC(8a0b205f) SHA1(3afea0464b793526bf23610cac6736a31edc7ec2) )
	ROM_LOAD( "cm99-041-2.u14", 0x4000, 0x2000, CRC(c84dba45) SHA1(ab4ac891a23d6b9a216df046d516e868c77e8a36) )
	ROM_LOAD( "cm99-041-1.u9",  0x6000, 0x2000, CRC(44046c31) SHA1(c9703ce2371cf86bc597e5fdb9c0d4dd6d91f7dc) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_FILL( 0x0000, 0x10000, 0xff )  // U53 (girl bitmaps) not populated

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )

	ROM_REGION( 0x800, "plds", ROMREGION_ERASE00 )
	ROM_LOAD( "gal16v8d.f10",   0x000, 0x117, CRC(6655473e) SHA1(f7bdd98a5ec5d3fc53332c12ea81c03af02d561a) )
	ROM_LOAD( "palce16v8h.e14", 0x200, 0x117, CRC(4dbf87ec) SHA1(338d9fabba8928e25ca39fbe717c5e6ce35b7278) )
	ROM_LOAD( "palce16v8h.f14", 0x400, 0x117, CRC(12a5e577) SHA1(ee5ea1afef775db3a9f848b5cc5384bc10b4e349) )
	ROM_LOAD( "palce16v8h.g13", 0x600, 0x117, CRC(deee0b94) SHA1(3682affbe803ffa8b436346f159c3818d6714d1a) )
ROM_END


ROM_START( cmast99b )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "cm99b-041-8.u81", 0x0000, 0x1000, CRC(e0872d9f) SHA1(6d8f5e09e5c9daf834d5c74434eae86e5dd7e194) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)
	ROM_CONTINUE(0x8000,0x8000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "cm99-041-7.u16", 0x00000, 0x8000, CRC(69e2aef2) SHA1(195faec239734650dcd777d55a8da84e3a0ed50c) )
	ROM_LOAD( "cm99-041-6.u11", 0x08000, 0x8000, CRC(900f36f5) SHA1(0fd41f8c8cb2f7940b653a1fad93df2e3f28a34b) )
	ROM_LOAD( "cm99-041-5.u4",  0x10000, 0x8000, CRC(3e465e38) SHA1(847dc27e45d495cb924b3fd5ce8e68a1cb83ffc8) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "cm99-041-4.u15", 0x0000, 0x2000, CRC(6b870b29) SHA1(d65f24817d9d45c148cb857439b46e9e75dabfe7) )
	ROM_LOAD( "cm99-041-3.u10", 0x2000, 0x2000, CRC(8a0b205f) SHA1(3afea0464b793526bf23610cac6736a31edc7ec2) )
	ROM_LOAD( "cm99-041-2.u14", 0x4000, 0x2000, CRC(c84dba45) SHA1(ab4ac891a23d6b9a216df046d516e868c77e8a36) )
	ROM_LOAD( "cm99-041-1.u9",  0x6000, 0x2000, CRC(44046c31) SHA1(c9703ce2371cf86bc597e5fdb9c0d4dd6d91f7dc) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_FILL( 0x0000, 0x10000, 0xff )  // U53 (girl bitmaps) not populated

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

/*
  A-Plan
  (C) 1993 WeaShing H.K.

  TMP91P640 @ 5MHz or 10MHz (or SDIP64 gfx chip of some kind?)
  Z80 [clock probably 12/4]
  8255 x2
  YM2149 [clock probably 12/8]
  12MHz and 10MHz XTALs
  6116 2kx8 SRAM x4
  BPROM 82S129 x2
  8-position DIPSW x5
  PCB number only says 'WEASHING'

*/
ROM_START( aplan )  // Has "DYNA QL-1  V1.01" string.
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "u18", 0x02000, 0x1000, CRC(e0e5328d) SHA1(fd02c65fecada69a0953372a39e520a80c744109) )
	ROM_CONTINUE(0xf000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0xa000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0xc000,0x1000)
	ROM_CONTINUE(0x0000,0x1000)
	ROM_CONTINUE(0x8000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)
	ROM_CONTINUE(0xe000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0xb000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0xd000,0x1000)
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x9000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "u64",   0x00000, 0x8000, CRC(2e593152) SHA1(ca0f587b26ed6e962e100d9178b6f79995a26fec) )
	ROM_LOAD( "u67",   0x08000, 0x8000, CRC(aa865924) SHA1(574c4ba06e0bb37624ebd0fd7f5bfa4d0be62eba) )
	ROM_LOAD( "u68",   0x10000, 0x8000, CRC(3043a99c) SHA1(cf936a866cc90b1cb477914e484e1d21165d6526) )

	ROM_REGION( 0x10000, "gfx2", 0 ) // ???
	ROM_LOAD( "u56",   0x0000, 0x4000, CRC(e1ea0658) SHA1(1f31c493556f6ff6564be439040914a18a56ea64) )
	ROM_LOAD( "u58",   0x4000, 0x4000, CRC(aa5ae1a5) SHA1(f4a9b3d97ac4df81fc071962698eab4b63e2e608) )
	ROM_LOAD( "u60",   0x8000, 0x4000, CRC(ba6cc02d) SHA1(80f06761eeb08b3852041f7a1773059c69420c44) )
	ROM_LOAD( "u62",   0xc000, 0x4000, CRC(609a6300) SHA1(ec8301c603a2af2aeecbef83d5cfba1796209988) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_FILL( 0x0000, 0x10000, 0xff ) // (girl bitmaps, not present)

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u45",   0x000, 0x100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u46",   0x100, 0x100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )
ROM_END

/*
  DYNA QL-1  V7.07 string, but not original.
  Utech Top-7v8.8 05/26/1993 string.

  According to pics also sports a
  é‡‘é¸¡æŠ¥å–œ (Jin Ji Bao Xi) title screen

*/
ROM_START( top7 )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "top7.u81", 0x0000, 0x1000, CRC(29b5a888) SHA1(695bebcad1d3034d6a3d0ca2fd0eb279a5db240a) )
	ROM_CONTINUE(         0x4000, 0x1000 )
	ROM_CONTINUE(         0x3000, 0x1000 )
	ROM_CONTINUE(         0x7000, 0x1000 )
	ROM_CONTINUE(         0x1000, 0x1000 )
	ROM_CONTINUE(         0x6000, 0x1000 )
	ROM_CONTINUE(         0x2000, 0x1000 )
	ROM_CONTINUE(         0x5000, 0x1000 )
	ROM_CONTINUE(         0x8000, 0x8000 )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "7.u16", 0x00000, 0x8000, CRC(40a35a3e) SHA1(040a645bd1201d484181b55f2a4ab3d6457ce21e) )
	ROM_LOAD( "6.u11", 0x08000, 0x8000, CRC(6760ee4d) SHA1(10412d5ec62e8c442a5a772867daeaf38521b87c) )
	ROM_LOAD( "5.u4",  0x10000, 0x8000, CRC(23246ab5) SHA1(860231a185c6d286171e0bd265d2a646fb0ee7df) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "4.u15", 0x0000, 0x2000, CRC(02b3d190) SHA1(4a68dd9f392996942c3d3e2aa28e880a9d0f62d4) )
	ROM_LOAD( "3.u10", 0x2000, 0x2000, CRC(32972c9e) SHA1(6ebf18d9e91f7a7ef23961c31c6fbad933e1b708) )
	ROM_LOAD( "2.u14", 0x4000, 0x2000, CRC(741f707d) SHA1(a9eb4045794662c2029c71dca2bd70142befcc5e) )
	ROM_LOAD( "1.u9",  0x6000, 0x2000, CRC(12f9071f) SHA1(92f13ba8dffce56934b110da73c41f8aa7151e81) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_FILL( 0x0000, 0x10000, 0xff )  // U53 (girl bitmaps) not populated

	// PROMs not dumped for this set
	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, BAD_DUMP CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, BAD_DUMP CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, BAD_DUMP CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

// Minor differences from above, but legit.
ROM_START( top7a )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "top7a.u81", 0x0000, 0x1000, CRC(68874abe) SHA1(bfd2c38475be8cc2bc7061b1f25bb1b6eafbc333) )
	ROM_CONTINUE(          0x4000, 0x1000 )
	ROM_CONTINUE(          0x3000, 0x1000 )
	ROM_CONTINUE(          0x7000, 0x1000 )
	ROM_CONTINUE(          0x1000, 0x1000 )
	ROM_CONTINUE(          0x6000, 0x1000 )
	ROM_CONTINUE(          0x2000, 0x1000 )
	ROM_CONTINUE(          0x5000, 0x1000 )
	ROM_CONTINUE(          0x8000, 0x8000 )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "7.u16", 0x00000, 0x8000, CRC(40a35a3e) SHA1(040a645bd1201d484181b55f2a4ab3d6457ce21e) )
	ROM_LOAD( "6.u11", 0x08000, 0x8000, CRC(6760ee4d) SHA1(10412d5ec62e8c442a5a772867daeaf38521b87c) )
	ROM_LOAD( "5.u4",  0x10000, 0x8000, CRC(23246ab5) SHA1(860231a185c6d286171e0bd265d2a646fb0ee7df) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "4.u15", 0x0000, 0x2000, CRC(02b3d190) SHA1(4a68dd9f392996942c3d3e2aa28e880a9d0f62d4) )
	ROM_LOAD( "3.u10", 0x2000, 0x2000, CRC(32972c9e) SHA1(6ebf18d9e91f7a7ef23961c31c6fbad933e1b708) )
	ROM_LOAD( "2.u14", 0x4000, 0x2000, CRC(741f707d) SHA1(a9eb4045794662c2029c71dca2bd70142befcc5e) )
	ROM_LOAD( "1.u9",  0x6000, 0x2000, CRC(12f9071f) SHA1(92f13ba8dffce56934b110da73c41f8aa7151e81) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_FILL( 0x0000, 0x10000, 0xff )  // U53 (girl bitmaps) not populated

	// PROMs not dumped for this set
	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, BAD_DUMP CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, BAD_DUMP CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, BAD_DUMP CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

/*
  WANG QL-0B V1.00 in NVRAM,
  SANGHO in GFX ROMs

*/
ROM_START( war3cb )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "27c512 9 sub-board.bin", 0x2000, 0x2000, CRC(7fc6009d) SHA1(cb664890cffaddb741e8fe94d73ca23634c21e95) )
	ROM_CONTINUE(                       0x0000, 0x2000 )
	ROM_CONTINUE(                       0x6000, 0x2000 )
	ROM_CONTINUE(                       0x4000, 0x2000 )
	ROM_CONTINUE(                       0xa000, 0x2000 )
	ROM_CONTINUE(                       0x8000, 0x2000 )
	ROM_CONTINUE(                       0xe000, 0x2000 )
	ROM_CONTINUE(                       0xc000, 0x2000 )
	ROM_COPY( "maincpu" ,       0x6000, 0x7000, 0x1000 )  // verified with Z80 ICE memory dump

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "27c256 5.bin",   0x00000, 0x8000, CRC(5ba97822) SHA1(f089a09509c13d01a375e273eadcd4007c2054c8) )
	ROM_LOAD( "27c256 6.bin",   0x08000, 0x8000, CRC(56f7359a) SHA1(b33b6853d05607b1a35b6f5e1a52a4b84a86759a) )
	ROM_LOAD( "27c256 7.bin",   0x10000, 0x8000, CRC(b2ba5c16) SHA1(4ba64eed71b3e470dbb5250fcb98ab24abc151df) )

	ROM_REGION( 0x10000, "gfx2", 0 )
	ROM_LOAD( "27c64 1.bin",   0x0000, 0x2000, CRC(b35c5114) SHA1(1f3e105ebc1ee59201defcea78a8abf0607608f8) )
	ROM_LOAD( "27c64 2.bin",   0x2000, 0x2000, CRC(d65f8608) SHA1(bd68c6004a97617fbc23acbd76ac1e093a565f89) )
	ROM_LOAD( "27c64 3.bin",   0x4000, 0x2000, CRC(7f2d9f4c) SHA1(f7f62cd09091bd8e713237c6ac4ee3b4c28350b2) )
	ROM_LOAD( "27c64 4.bin",   0x6000, 0x2000, CRC(1d7f7f2a) SHA1(787f9d2cea1f0690445c65c0a4827b07d85571b7) )

	ROM_REGION( 0x10000, "user1", ROMREGION_ERASEFF )  // no girls bitmap ROM

	ROM_REGION( 0x200, "proms", 0 )  // not yet dumped
	ROM_LOAD( "prom1",   0x000, 0x100, BAD_DUMP CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "prom2",   0x100, 0x100, BAD_DUMP CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )
ROM_END

ROM_START( chryangl )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "8.u6",  0x0000, 0x10000, CRC(331961e4) SHA1(50c7e0e983aed1f199f238442bb8fafce1849f84) )

	ROM_REGION( 0x30000, "gfx1", 0 )
	ROM_LOAD( "7.e1",  0x00000,  0x10000, CRC(f8e523ba) SHA1(bfbe1803f0f3c3426a4cc252257c8a4dd83a70ac) )  // 1ST AND 2ND HALF IDENTICAL
	ROM_LOAD( "6.e2",  0x10000,  0x10000, CRC(0d3b322a) SHA1(64b6bd387a78f51f83002c67d857b157a4651279) )  // 1ST AND 2ND HALF IDENTICAL
	ROM_LOAD( "5.e3",  0x20000,  0x10000, CRC(da87dbeb) SHA1(3656b569d08540171003820ec86944d2a7a55b3b) )  // 1ST AND 2ND HALF IDENTICAL

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1.f3",  0x0000,  0x2000, CRC(7cc6d26b) SHA1(de33e8985affce7bd3ead89463117c9aaa93d5e4) )  // 1ST AND 2ND HALF IDENTICAL
	ROM_LOAD( "2.f2",  0x2000,  0x2000, CRC(e73ea4e3) SHA1(c9fd56461f6986d6bc170403d298fcc408a524e9) )  // 1ST AND 2ND HALF IDENTICAL
	ROM_LOAD( "3.h3",  0x4000,  0x2000, CRC(91162010) SHA1(3acc21e7074602b247f2f392eb181802092d2f21) )
	ROM_LOAD( "4.h2",  0x6000,  0x2000, CRC(cbcc6bfb) SHA1(5bafc934fef1f50d8c182c39d3a7ce795c89d175) )

	ROM_REGION( 0x10000, "user1", ROMREGION_ERASEFF )
	// nothing

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129a.c15", 0x0000, 0x0100, CRC(6144d7fc) SHA1(4563ea31864d8732e3a4b0270449a0a79db334a2) )
	ROM_LOAD( "82s129a.c16", 0x0100, 0x0100, CRC(0893e05d) SHA1(fabd58d498f5efdddae4c7142915cb7b092d6804) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129a.e9", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

/*
  PCB type: CK88 / CM99
  LONG BLUE BOARD

*/
ROM_START( chryanglb )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "ca5-main-27c512.bin",  0x0000, 0x10000, CRC(55a78b9f) SHA1(d262ecb0628401a7a39dfe5ffeaac908b86f67b2) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "rom5-27c256.bin",  0x00000,  0x08000, CRC(7b687bc5) SHA1(c6be9c62dec3887ab5279f852f0c84b87acd2e95) )
	ROM_LOAD( "rom6-27c256.bin",  0x08000,  0x08000, CRC(e9997f3d) SHA1(db7fa59b2023bfe5b78f7e98db326bcb518aa2a8) )
	ROM_LOAD( "rom7-27c256.bin",  0x10000,  0x08000, CRC(9ad8e541) SHA1(e28b6ba68c5c51c7eed6aea0d3fa7019b34356a5) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "rom4-27c128.bin.001",  0x0000,  0x2000, CRC(7cc6d26b) SHA1(de33e8985affce7bd3ead89463117c9aaa93d5e4) )  // 1ST AND 2ND HALF IDENTICAL
	ROM_LOAD( "rom3-27c128.bin.001",  0x2000,  0x2000, CRC(e455694e) SHA1(335815baa8912d4195ae790bbd8ec3e16f9ec916) )
	ROM_LOAD( "rom2-27c128.bin.001",  0x4000,  0x2000, CRC(4015b2b3) SHA1(806bff41fc388f25cacd78f4d396c8b8e2ed6d67) )
	ROM_LOAD( "rom1-27c128.bin.001",  0x6000,  0x2000, CRC(cbcc6bfb) SHA1(5bafc934fef1f50d8c182c39d3a7ce795c89d175) )

	ROM_REGION( 0x10000, "user1", ROMREGION_ERASEFF )
	// nothing

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "c15-u79-bprom-82s129.bin", 0x0000, 0x0100, CRC(6144d7fc) SHA1(4563ea31864d8732e3a4b0270449a0a79db334a2) )
	ROM_LOAD( "c16-u84-bprom-82s129.bin", 0x0100, 0x0100, CRC(0893e05d) SHA1(fabd58d498f5efdddae4c7142915cb7b092d6804) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "9-e,-bprom-82s129.bin", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

ROM_START( tonypok )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "tonypok.rom",  0x0000,  0x1000, CRC(c7047fcb) SHA1(a224e5a3c0fcd1d588ab264c4d0c624159834488) )
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "pok_u16.7", 0x00000,  0x8000, CRC(d7511644) SHA1(2aedd80b279f6e1231bacfce913e06070c74fff7) )
	ROM_LOAD( "pok_u11.6", 0x08000,  0x8000, CRC(6ff4d0f9) SHA1(3faccac9562c9269f392655d045a10569f335ccc) )
	ROM_LOAD( "pok_u4.5",  0x10000,  0x8000, CRC(7c641db2) SHA1(b90d4c5efc388fe8938ed3180b3c36a20ecdc15b) )

	// the remainder of the roms are from Cherry Master - this was a conversion kit
	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "u15.4",  0x0000,  0x2000, CRC(8607ffd9) SHA1(9bc94715554aa2473ae2ed249a47f29c7886b3dc) )
	ROM_LOAD( "u10.3",  0x2000,  0x2000, CRC(c32367be) SHA1(ff217021b9c58e23b2226f8b0a7f5da966225715) )
	ROM_LOAD( "u14.2",  0x4000,  0x2000, CRC(6dfcb188) SHA1(22430429c798954d9d979e62699b58feae7fdbf4) )
	ROM_LOAD( "u9.1",   0x6000,  0x2000, CRC(9678ead2) SHA1(e80aefa98b2363fe9e6b2415762695ace272e4d3) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "u53.8",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u84", 0x0000, 0x0100, CRC(0489b760) SHA1(78f8632b17a76335183c5c204cdec856988368b0) )
	ROM_LOAD( "82s129.u79", 0x0100, 0x0100, CRC(21eb5b19) SHA1(9b8425bdb97f11f4855c998c7792c3291fd07470) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.u46", 0x0000, 0x0100, CRC(50ec383b) SHA1(ae95b92bd3946b40134bcdc22708d5c6b0f4c23e) )
ROM_END

ROM_START( cmfb55 ) // uses same GFX as pkrmast
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "cherry master dyna plus v9.0. jackpot 9000.n3", 0x3000, 0x1000, CRC(875bc881) SHA1(c4b59442f6c55e37672d9b80712125042408d541) )
	ROM_CONTINUE(                                              0x6000, 0x1000)
	ROM_CONTINUE(                                              0x4000, 0x1000)
	ROM_CONTINUE(                                              0x1000, 0x1000)
	ROM_CONTINUE(                                              0x0000, 0x1000)
	ROM_CONTINUE(                                              0x2000, 0x1000)
	ROM_CONTINUE(                                              0x7000, 0x1000)
	ROM_CONTINUE(                                              0x5000, 0x1000)

	ROM_REGION( 0x20000, "gfx1", 0 )  // tiles
	ROM_LOAD( "cherry master f-3.f3", 0x00000,  0x20000, CRC(ed0dfbfe) SHA1(c3a5b68e821461b161293eaec1515e2b0f26c4f9) )

	ROM_REGION( 0x10000, "gfx2", 0 )  // reels
	ROM_LOAD( "cherry master h-3.3h", 0x00000,  0x10000, CRC(4c42f829) SHA1(110f7b7cd186d0e56ae822709ad42db70a3d0788) )

	ROM_REGION( 0x10000, "user1", 0 )
	ROM_LOAD( "c.m.89-005-8.j6",  0x0000, 0x10000, CRC(e92443d3) SHA1(4b6ca4521841610054165f085ae05510e77af191) )

	ROM_REGION( 0x10000, "colours", 0 )  // this uses a big ROM containing the data for the usual PROMs
	ROM_LOAD( "cherry master n-5.n5", 0x00000, 0x10000, CRC(2ae7f151) SHA1(b41ec09fddf51895dfcca461d9b0ddb1cdb72506) )

	ROM_REGION( 0x200, "proms", ROMREGION_ERASE00 )
	// filled at init from the "colours" region

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_COPY( "colours", 0x1000, 0x0000, 0x0100 )
ROM_END


// the program roms on these are scrambled
ROM_START( jkrmast )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "pid-515.u5",  0x4000, 0x4000, CRC(73caf824) SHA1(b7a7bb6190465f7c3b40f2ef97f4f6beeb89ec41) )
	ROM_CONTINUE(0x0000, 0x4000)
	ROM_CONTINUE(0xc000, 0x4000)
	ROM_CONTINUE(0x8000, 0x4000)

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "2000b.u48", 0x00000,  0x20000, CRC(e7b406ec) SHA1(c0a10cf8bf5467ecfe3c90e6897db3ab9aae0127) )

	ROM_REGION( 0x20000, "gfx2", 0 )
	ROM_LOAD( "2000a.u41", 0x00000,  0x20000, CRC(cb8b1563) SHA1(c8c3ae646a9f3a7482d83566e4b3e18441c5d67f) )

	ROM_REGION( 0x200, "colours", 0 )
	ROM_LOAD( "n82s147a.u13", 0x000, 0x200, CRC(da92f0ae) SHA1(1269a2029e689a5f111c57e80825b3756b50521e) )

	ROM_REGION( 0x200, "proms", ROMREGION_ERASE00 )
	// filled at init()

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "n82s129.u28",  0x0000, 0x0100, CRC(cfb152cf) SHA1(3166b9b21be4ce1d3b6fc8974c149b4ead03abac) )
ROM_END

ROM_START( jkrmasta )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "pid-513.u5",  0x4000, 0x4000, CRC(12fa7ea0) SHA1(71ee141fe01ae2ce9913620b52c54cf445fd0b00) )
	ROM_CONTINUE(0x0000, 0x4000)
	ROM_CONTINUE(0xc000, 0x4000)
	ROM_CONTINUE(0x8000, 0x4000)

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "2000b.u48", 0x00000,  0x20000, CRC(e7b406ec) SHA1(c0a10cf8bf5467ecfe3c90e6897db3ab9aae0127) )

	ROM_REGION( 0x20000, "gfx2", 0 )
	ROM_LOAD( "2000a.u41", 0x00000,  0x20000, CRC(cb8b1563) SHA1(c8c3ae646a9f3a7482d83566e4b3e18441c5d67f) )

	ROM_REGION( 0x200, "colours", 0 )
	ROM_LOAD( "n82s147a.u13", 0x000, 0x200, CRC(da92f0ae) SHA1(1269a2029e689a5f111c57e80825b3756b50521e) )

	ROM_REGION( 0x200, "proms", ROMREGION_ERASE00 )
	// filled at init()

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "n82s129.u28",  0x0000, 0x0100, CRC(cfb152cf) SHA1(3166b9b21be4ce1d3b6fc8974c149b4ead03abac) )
ROM_END

ROM_START( pkrmast )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "pokermastera.rom",  0x7000, 0x1000, CRC(467249f7) SHA1(efbab56896dc58d22ec921e7f5fd0befcfaadc52) )
	ROM_CONTINUE(                  0x0000, 0x1000)
	ROM_CONTINUE(                  0x6000, 0x1000)
	ROM_CONTINUE(                  0x1000, 0x1000)
	ROM_CONTINUE(                  0x5000, 0x1000)
	ROM_CONTINUE(                  0x2000, 0x1000)
	ROM_CONTINUE(                  0x4000, 0x1000)
	ROM_CONTINUE(                  0x3000, 0x1000)
	ROM_CONTINUE(                  0x8000, 0x8000)

	ROM_REGION( 0x20000, "gfx1", 0 )  // tiles
	ROM_LOAD( "103-2.bin", 0x00000,  0x20000, CRC(ed0dfbfe) SHA1(c3a5b68e821461b161293eaec1515e2b0f26c4f9) )

	ROM_REGION( 0x20000, "gfx2", 0 )  // reels + girl?
	ROM_LOAD( "103-1.bin", 0x00000,  0x20000, CRC(e375cd4b) SHA1(68888126ff9743cd589f3426205231bc3a896588) )

	ROM_REGION( 0x10000, "user1", ROMREGION_ERASE00 )

	ROM_REGION( 0x200, "colours", 0 )
	ROM_LOAD( "82s147.s8", 0x000, 0x200, CRC(da92f0ae) SHA1(1269a2029e689a5f111c57e80825b3756b50521e) )

	ROM_REGION( 0x200, "proms", ROMREGION_ERASE00 )
	// filled at init()

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.h3", 0x000, 0x100, CRC(cfb152cf) SHA1(3166b9b21be4ce1d3b6fc8974c149b4ead03abac) )

	ROM_REGION( 0xa00, "plds", 0 )
	ROM_LOAD( "gal16v8.b6",  0x000, 0x117, CRC(ba5882c8) SHA1(e7ac1c97e578b7064805e6aa9a555133012f35aa) )
	ROM_LOAD( "pal16l8.r6",  0x200, 0x104, CRC(ad352255) SHA1(34415a48c38c6f2c8f2388c0a3304cbce72e42b7) )
	ROM_LOAD( "gal16v8.s3",  0x400, 0x117, CRC(a72273b1) SHA1(3b085971d2f5716118510e67bce47caca125c09f) )
	ROM_LOAD( "gal16v8.s45", 0x600, 0x117, CRC(52f45f51) SHA1(ba6359fb8422b2552aebdda30b29933d1792252e) )
	ROM_LOAD( "gal16v8.u45", 0x800, 0x117, CRC(a982d6ec) SHA1(4d13ee910f6aed400335c318ffd6e8b2bdd78da7) )
ROM_END

ROM_START( pkrmasta )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "pokermasterb.rom",  0x7000, 0x1000, CRC(f59e0273) SHA1(160426b86dbb8a718cb3b886f90a231baed86a40) )
	ROM_CONTINUE(                  0x0000, 0x1000)
	ROM_CONTINUE(                  0x6000, 0x1000)
	ROM_CONTINUE(                  0x1000, 0x1000)
	ROM_CONTINUE(                  0x5000, 0x1000)
	ROM_CONTINUE(                  0x2000, 0x1000)
	ROM_CONTINUE(                  0x4000, 0x1000)
	ROM_CONTINUE(                  0x3000, 0x1000)
	ROM_CONTINUE(                  0x8000, 0x8000)

	ROM_REGION( 0x20000, "gfx1", 0 )  // tiles
	ROM_LOAD( "103-2.bin", 0x00000,  0x20000, CRC(ed0dfbfe) SHA1(c3a5b68e821461b161293eaec1515e2b0f26c4f9) )

	ROM_REGION( 0x20000, "gfx2", 0 )  // reels + girl?
	ROM_LOAD( "103-1.bin", 0x00000,  0x20000, CRC(e375cd4b) SHA1(68888126ff9743cd589f3426205231bc3a896588) )

	ROM_REGION( 0x10000, "user1", ROMREGION_ERASE00 )

	ROM_REGION( 0x200, "colours", 0 )
	ROM_LOAD( "82s147.s8", 0x000, 0x200, CRC(da92f0ae) SHA1(1269a2029e689a5f111c57e80825b3756b50521e) )

	ROM_REGION( 0x200, "proms", ROMREGION_ERASE00 )
	// filled at init()

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "82s129.h3", 0x000, 0x100, CRC(cfb152cf) SHA1(3166b9b21be4ce1d3b6fc8974c149b4ead03abac) )

	ROM_REGION( 0xa00, "plds", 0 )
	ROM_LOAD( "gal16v8.b6",  0x000, 0x117, CRC(ba5882c8) SHA1(e7ac1c97e578b7064805e6aa9a555133012f35aa) )
	ROM_LOAD( "pal16l8.r6",  0x200, 0x104, CRC(ad352255) SHA1(34415a48c38c6f2c8f2388c0a3304cbce72e42b7) )
	ROM_LOAD( "gal16v8.s3",  0x400, 0x117, CRC(a72273b1) SHA1(3b085971d2f5716118510e67bce47caca125c09f) )
	ROM_LOAD( "gal16v8.s45", 0x600, 0x117, CRC(52f45f51) SHA1(ba6359fb8422b2552aebdda30b29933d1792252e) )
	ROM_LOAD( "gal16v8.u45", 0x800, 0x117, CRC(a982d6ec) SHA1(4d13ee910f6aed400335c318ffd6e8b2bdd78da7) )
ROM_END


/*
  Cherry Master '91
  -----------------

  CPU: z8400
  other chips: NEC D71055C, WB5300
  Dips 5 x 8 position

  OSC: 12.000mhz

  all pals are type 16L8
  all proms are type s129

*/
ROM_START( cmast91 )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "8.bin",   0x00000, 0x01000, CRC(31a16d9f) SHA1(f007148449d66954b780f12a9f910968a4052482) )
	ROM_CONTINUE(0x1000,0x1000)
	ROM_CONTINUE(0x4000,0x1000)
	ROM_CONTINUE(0x5000,0x1000)
	ROM_CONTINUE(0x2000,0x1000)
	ROM_CONTINUE(0x3000,0x1000)
	ROM_CONTINUE(0x6000,0x1000)
	ROM_CONTINUE(0x7000,0x1000)
	ROM_CONTINUE(0x8000,0x1000)
	ROM_CONTINUE(0x9000,0x1000)
	ROM_CONTINUE(0xa000,0x1000)
	ROM_CONTINUE(0xb000,0x1000)
	ROM_CONTINUE(0xc000,0x1000)
	ROM_CONTINUE(0xd000,0x1000)
	ROM_CONTINUE(0xe000,0x1000)
	ROM_CONTINUE(0xf000,0x1000)

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "7.bin",  0x00000, 0x8000, CRC(1edf1f1d) SHA1(558fa01f1efd7f6541047d3930bdce0974bae5b0) )
	ROM_LOAD( "6.bin",  0x08000, 0x8000, CRC(13582e74) SHA1(27e318542606b8e8d38250749ba996402d314abd) )
	ROM_LOAD( "5.bin",  0x10000, 0x8000, CRC(28ff88cc) SHA1(46bc0407be857e8348159735b60cfb660f047a56) )

	ROM_REGION( 0x20000, "gfx2", 0 )
	ROM_LOAD( "4.bin",  0x00000, 0x8000, CRC(0dbabaa2) SHA1(44235b19dac1c996e2166672b03f6e3888ecbefa) )
	ROM_LOAD( "3.bin",  0x08000, 0x8000, CRC(dc77d04a) SHA1(d8656130cde54d4bb96307899f6d607867e49e6c) )
	ROM_LOAD( "1.bin",  0x10000, 0x8000, CRC(71bdab69) SHA1(d2c594ed88d6368df15b623c48eecc1c219b839e) )
	ROM_LOAD( "2.bin",  0x18000, 0x8000, CRC(201d1e90) SHA1(c3c5224646b777f98ee35d146136788029b1782d) )

	ROM_REGION( 0x40000, "user1", 0 )  // girls GFX
	ROM_LOAD( "9.bin",  0x00000, 0x40000, CRC(92342276) SHA1(f9436752f2ec67cf873fd01c729c7c113dc18be0) )

	ROM_REGION( 0x300, "proms", 0 )
	ROM_LOAD( "p1.bin", 0x0000, 0x0100, CRC(ac529f04) SHA1(5bc92e50c85bb23e609172cc15c430ddea7fdcb5) )
	ROM_LOAD( "p2.bin", 0x0100, 0x0100, CRC(3febce95) SHA1(c7c0fec0fb024ebf7d7365a09d28ba3d0037b0b4) )
	ROM_LOAD( "p3.bin", 0x0200, 0x0100, CRC(99dbdf19) SHA1(3680335406f63289f8d9a81b4cd163e4aa0c14d4) )

	ROM_REGION( 0x100, "proms2", 0 )  // screen layout?
	ROM_LOAD( "p4.bin", 0x0000, 0x0100, CRC(72212427) SHA1(e87a91f28284313c706ebb8175a3586780636e31) )

	ROM_REGION( 0x800, "plds", 0 )  // all 16L8 type, protected
	ROM_LOAD( "pld1.bin", 0x0000, 0x0104, NO_DUMP )
	ROM_LOAD( "pld2.bin", 0x0200, 0x0104, NO_DUMP )
	ROM_LOAD( "pld3.bin", 0x0400, 0x0104, NO_DUMP )
	ROM_LOAD( "pld4.bin", 0x0600, 0x0104, NO_DUMP )
ROM_END

/*
  Dyna D9004 PCB, DYNA CLLB
  V1.30 string in ROM

*/
ROM_START( cll )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "cll_80_t.bin",   0x0000, 0x1000, CRC(62d386db) SHA1(9a061e80d78ed13a6dae59e447c138b0f5e5d892) )  // M27512
	ROM_CONTINUE(               0x4000, 0x1000 )
	ROM_CONTINUE(               0x1000, 0x1000 )
	ROM_CONTINUE(               0x5000, 0x1000 )
	ROM_CONTINUE(               0x2000, 0x1000 )
	ROM_CONTINUE(               0x6000, 0x1000 )
	ROM_CONTINUE(               0x3000, 0x1000 )
	ROM_CONTINUE(               0x7000, 0x9000 )

	ROM_REGION( 0x18000, "gfx1", 0 )  // all UPD27C256A
	ROM_LOAD( "cm_73.bin",  0x00000, 0x8000, CRC(6bc1d96a) SHA1(9eeae92f171e99bedadd5a681250d3dcaa77d5ee) )
	ROM_LOAD( "cm_63.bin",  0x08000, 0x8000, CRC(5e03fe51) SHA1(74aefdab3d2008555a740e73d7b8a0a60d2902c3) )
	ROM_LOAD( "cm_53.bin",  0x10000, 0x8000, CRC(36131408) SHA1(5e1dee61c9e4bd75e63a441eedc49604707296a1) )

	ROM_REGION( 0x20000, "gfx2", 0 )
	ROM_LOAD( "cm_4.bin",  0x00000, 0x8000, CRC(0dbabaa2) SHA1(44235b19dac1c996e2166672b03f6e3888ecbefa) )  // UPD27C256A, 11xxxxxxxxxxxxx = 0xFF
	ROM_LOAD( "cm_3.bin",  0x08000, 0x8000, CRC(dc77d04a) SHA1(d8656130cde54d4bb96307899f6d607867e49e6c) )  // AM27C256, 11xxxxxxxxxxxxx = 0xFF
	ROM_LOAD( "cm_1.bin",  0x10000, 0x8000, CRC(71bdab69) SHA1(d2c594ed88d6368df15b623c48eecc1c219b839e) )  // AM27C256, 11xxxxxxxxxxxxx = 0xFF
	ROM_LOAD( "cm_2.bin",  0x18000, 0x8000, CRC(201d1e90) SHA1(c3c5224646b777f98ee35d146136788029b1782d) )  // AM27C256, 11xxxxxxxxxxxxx = 0xFF

	ROM_REGION( 0x40000, "user1", ROMREGION_ERASE00 ) // girls GFX, PCB shows the girls when dip 5:1 is on
	// videos show it has the same screens as cmast91. Reusing that ROM for now, but would be better to have it dumped
	ROM_LOAD( "9.bin",  0x00000, 0x40000, BAD_DUMP CRC(92342276) SHA1(f9436752f2ec67cf873fd01c729c7c113dc18be0) )

	// PROMs weren't included in the dump, using cmast91's for now. Colors seem correct, though.
	ROM_REGION( 0x300, "proms", 0 )
	ROM_LOAD( "p1.bin", 0x0000, 0x0100, BAD_DUMP CRC(ac529f04) SHA1(5bc92e50c85bb23e609172cc15c430ddea7fdcb5) )
	ROM_LOAD( "p2.bin", 0x0100, 0x0100, BAD_DUMP CRC(3febce95) SHA1(c7c0fec0fb024ebf7d7365a09d28ba3d0037b0b4) )
	ROM_LOAD( "p3.bin", 0x0200, 0x0100, BAD_DUMP CRC(99dbdf19) SHA1(3680335406f63289f8d9a81b4cd163e4aa0c14d4) )

	ROM_REGION( 0x100, "proms2", 0 )
	ROM_LOAD( "p4.bin", 0x0000, 0x0100, BAD_DUMP CRC(72212427) SHA1(e87a91f28284313c706ebb8175a3586780636e31) )

	ROM_REGION( 0x800, "plds", 0 )
	ROM_LOAD( "pld1.bin", 0x0000, 0x0104, NO_DUMP )
	ROM_LOAD( "pld2.bin", 0x0200, 0x0104, NO_DUMP )
	ROM_LOAD( "pld3.bin", 0x0400, 0x0104, NO_DUMP )
	ROM_LOAD( "pld4.bin", 0x0600, 0x0104, NO_DUMP )
ROM_END

/*
  DYNA D9106B PCB
  Seems to be using a different GFX hw

*/
ROM_START( cmast92 )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "cm9230d.rom",   0x00000, 0x10000, CRC(214a0a2d) SHA1(2d349e0888ac2da3df954517fdeb9214a3b17ae1) )  // V1.2D

	// the rest of the PROMs were dumped for V1.1D, adding them as bad until it can be verified they're good for this newer version, too
	ROM_REGION( 0x120000, "gfx", 0 )
	ROM_LOAD( "dyna dm9105.2h", 0x000000, 0x100000, NO_DUMP )
	ROM_LOAD( "1h",             0x000000, 0x020000, BAD_DUMP CRC(2ca1ba89) SHA1(dec50bb0f68f03d3433cc3a09eec5ee60f2d096c) )

	ROM_REGION( 0x300, "proms", 0 )
	ROM_LOAD( "14h", 0x000, 0x100, BAD_DUMP CRC(20e594fe) SHA1(d798f142732e8da6ec9764133955c041d2259f64) )
	ROM_LOAD( "15h", 0x100, 0x100, BAD_DUMP CRC(83fab238) SHA1(7c5451d69f865a10b63c013169ddbf57405bc3a9) )
	ROM_LOAD( "16h", 0x200, 0x100, BAD_DUMP CRC(706e7ee6) SHA1(dca1cc0e2c1c27bc211516ad369f557eb4b3980a) )
ROM_END

ROM_START( cmast92a ) // DYNA D9106B PCB - Seems to be using a different GFX hw
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "15d", 0x00000, 0x10000, CRC(d703c8e5) SHA1(77d8228878b64a299b4b6f3fe3befcea179ca4af) )  // V1.1D

	ROM_REGION( 0x120000, "gfx", 0 )
	ROM_LOAD( "dyna dm9105.2h", 0x000000, 0x100000, NO_DUMP )
	ROM_LOAD( "1h",              0x00000, 0x020000, CRC(2ca1ba89) SHA1(dec50bb0f68f03d3433cc3a09eec5ee60f2d096c) )

	ROM_REGION( 0x300, "proms", 0 )
	ROM_LOAD( "14h", 0x000, 0x100, CRC(20e594fe) SHA1(d798f142732e8da6ec9764133955c041d2259f64) )
	ROM_LOAD( "15h", 0x100, 0x100, CRC(83fab238) SHA1(7c5451d69f865a10b63c013169ddbf57405bc3a9) )
	ROM_LOAD( "16h", 0x200, 0x100, CRC(706e7ee6) SHA1(dca1cc0e2c1c27bc211516ad369f557eb4b3980a) )
ROM_END

/*
        Lucky 8 Line
        Falcon 1989

        G14           6116  9
        G13   D13           8
              D12
        6116                 Z80
        6116                 8255
        7                    8255
        6            SW1     8255
 12MHz  5            SW2     8910
        4  6116      SW4
        3  6116      SW3
        2  6116
        1  6116

*/
ROM_START( lucky8 )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "8",   0x0000, 0x4000, CRC(a187573e) SHA1(864627502025dbc83a0049fc98505655cec7b181) )
	ROM_LOAD( "9",   0x4000, 0x4000, CRC(6f62672e) SHA1(05662ef1a70f93b09e48de497b049a282f070735) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5",  0x00000, 0x8000, CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )
	ROM_LOAD( "6",  0x08000, 0x8000, CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )
	ROM_LOAD( "7",  0x10000, 0x8000, CRC(c415b9d0) SHA1(fd558fe8a116c33bbd712a639224d041447a45c1) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1",   0x0000, 0x2000, CRC(29d6f197) SHA1(1542ca457594f6b7fe8f28f7d78023edd7021bc8) )
	ROM_LOAD( "2",   0x2000, 0x2000, CRC(5f812e65) SHA1(70d9ea82f9337936bf21f82b6961768d436f3a6f) )
	ROM_LOAD( "3",   0x4000, 0x2000, CRC(898b9ed5) SHA1(11b7d1cfcf425d00d086c74e0dbcb72068dda9fe) )
	ROM_LOAD( "4",   0x6000, 0x2000, CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "d12", 0x0000, 0x0100, CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	// missing prom? - using one from other dump
	ROM_LOAD( "prom4", 0x0100, 0x0100, CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x20, "proms2", 0 )
	ROM_LOAD( "d13", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "g14", 0x0000, 0x0100, CRC(bd48de71) SHA1(e4fa1e774af1499bc568be5b2deabb859d8c8172) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "g13", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END


/*
  unknown korean or chinese bootleg of something?

  XTAL 12MHz
  Z80 @ 3MHz
  AY3-8910 @ 1.5MHz
  8255 x3
  RAM 6116 x5
  76489 x1
  8-position DSW x4

  ----

  13 and 13 files
  g14                                             FIXED BITS (0000xxxx)
  g14                                             BADADDR                xxxxx---
  g13                                             FIXED BITS (1x1xxxxx11xxxxxx)
  d13                                             FIXED BITS (xxxxxx0xxxxxxxxx)
  d13                                             1ST AND 2ND HALF IDENTICAL
  d12                                             FIXED BITS (0000xxxx)
                          prom1                   FIXED BITS (xxxxxx0xxxxxxxxx)
                          prom1                   1ST AND 2ND HALF IDENTICAL
                          prom2                   FIXED BITS (1x11xxxx11x1xxxx)
                          prom3                   FIXED BITS (0000xxxx)
                          prom4                   FIXED BITS (0000xxxx)
                          prom5                   FIXED BITS (00001xxx)
                          prom5                   BADADDR                xxxxxxx-
  d13                     prom1                   IDENTICAL
  d12                     prom3                   IDENTICAL
  6                       7                       IDENTICAL
  5                       6                       IDENTICAL
  4                       5                       IDENTICAL
  3                       4                       IDENTICAL
  2                       3                       IDENTICAL
  1                       2                       IDENTICAL
  7                       8                       99.990845%
  g13                     prom2                   90.625000%
  g14                     prom4                   61.718750%
  9                                               NO MATCH
  8                                               NO MATCH
                          1                       NO MATCH
                          prom5                   NO MATCH

  There is a loop at 0x0010 that decrement (HL) when is pointing to ROM space.
  This should be worked out or patched to allow boot the game.
  Seems to be related to timing since once patched the game is very fast.

*/
ROM_START( lucky8a )
	ROM_REGION( 0x10000, "maincpu", 0 )
	// we have to patch this, it might be bad
	ROM_LOAD( "1",  0x0000, 0x8000, BAD_DUMP CRC(554cddff) SHA1(8a0678993c7010f70adc9e9443b51cf5929bf110) )  // sldh

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "6",  0x00000, 0x8000, CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )  // sldh
	ROM_LOAD( "7",  0x08000, 0x8000, CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )  // sldh
	ROM_LOAD( "8",  0x10000, 0x8000, CRC(80b35f06) SHA1(561d257d7bc8976cfa08f36d84961f1263509b5b) )  // sldh

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "2",  0x0000, 0x2000, CRC(29d6f197) SHA1(1542ca457594f6b7fe8f28f7d78023edd7021bc8) )  // sldh
	ROM_LOAD( "3",  0x2000, 0x2000, CRC(5f812e65) SHA1(70d9ea82f9337936bf21f82b6961768d436f3a6f) )  // sldh
	ROM_LOAD( "4",  0x4000, 0x2000, CRC(898b9ed5) SHA1(11b7d1cfcf425d00d086c74e0dbcb72068dda9fe) )  // sldh
	ROM_LOAD( "5",  0x6000, 0x2000, CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )  // sldh

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "prom3", 0x0000, 0x0100, CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "prom4", 0x0100, 0x0100, CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x40, "proms2", 0 )
	ROM_LOAD( "prom1", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "prom5", 0x000, 0x0100, CRC(1d668d4a) SHA1(459117f78323ea264d3a29f1da2889bbabe9e4be) )

	ROM_REGION( 0x40, "unkprom2", 0 )
	ROM_LOAD( "prom2", 0x0000, 0x0020, CRC(7b1a769f) SHA1(788b3573df17d398c74662fec4fd7693fc27e2ef) )
ROM_END


/*
  New Lucky 8 Lines (set 3, extended gfx)

  This set has the New Lucky 8 Lines / New Super 8 Lines program.
  Same extended tileset for reels, but lacks of the New Super 8 Lines title tiles.
  Maybe is a hidden feature, maybe just graphics for another hack.

*/
ROM_START( lucky8b )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "8.bin",  0x0000, 0x8000, CRC(ab7c58f2) SHA1(74782772bcc91178fa381074ddca99e0515f7693) )  // sldh

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5.bin",  0x00000, 0x8000, CRC(9bbe5437) SHA1(ef3789cf34d83827bd6ad4755fd443c3d9bdf661) )
	ROM_LOAD( "6.bin",  0x08000, 0x8000, CRC(bc17a96b) SHA1(6ae6a99c72153d68b01feacc45d94f8f88ac8733) )
	ROM_LOAD( "7.bin",  0x10000, 0x8000, CRC(06a98714) SHA1(e58efdcbdc021976d5a1253c03bea0bfad4d92db) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1.bin",  0x0000, 0x2000, CRC(b45f41e2) SHA1(890c94c802f5ada97bc73f5a7a09e69c3207966c) )
	ROM_LOAD( "2.bin",  0x2000, 0x2000, CRC(0463413a) SHA1(061b8335fdd44767e8c1832f5b5101276ad0f689) )
	ROM_LOAD( "3.bin",  0x4000, 0x2000, CRC(b4e58020) SHA1(5c0fcc4b5d484ca7de5f2bd568a391a45967a9cc) )
	ROM_LOAD( "4.bin",  0x6000, 0x2000, CRC(0a25964b) SHA1(d41eda201bb01229fb6e2ff437196dd65eebe577) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "u4.bin", 0x0000, 0x0100, CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "u5.bin", 0x0100, 0x0100, CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x40, "proms2", 0 )
	ROM_LOAD( "u2.bin", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "u3.bin", 0x0000, 0x0100, CRC(1d668d4a) SHA1(459117f78323ea264d3a29f1da2889bbabe9e4be) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "u1.bin", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END


ROM_START( lucky8c )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "8.bin",   0x0000, 0x8000, CRC(6890f8d8) SHA1(7e9d974acf199c78972299bfa3e275a30a3f6eaa) )  // sldh

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5",  0x00000, 0x8000, CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )
	ROM_LOAD( "6",  0x08000, 0x8000, CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )
	ROM_LOAD( "7",  0x10000, 0x8000, CRC(c415b9d0) SHA1(fd558fe8a116c33bbd712a639224d041447a45c1) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1",   0x0000, 0x2000, CRC(29d6f197) SHA1(1542ca457594f6b7fe8f28f7d78023edd7021bc8) )
	ROM_LOAD( "2",   0x2000, 0x2000, CRC(5f812e65) SHA1(70d9ea82f9337936bf21f82b6961768d436f3a6f) )
	ROM_LOAD( "3",   0x4000, 0x2000, CRC(898b9ed5) SHA1(11b7d1cfcf425d00d086c74e0dbcb72068dda9fe) )
	ROM_LOAD( "4",   0x6000, 0x2000, CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "d12", 0x0000, 0x0100, CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	// missing prom? - using one from other dump
	ROM_LOAD( "prom4", 0x0100, 0x0100, CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x20, "proms2", 0 )
	ROM_LOAD( "d13", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "g14", 0x0000, 0x0100, CRC(bd48de71) SHA1(e4fa1e774af1499bc568be5b2deabb859d8c8172) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "g13", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END


ROM_START( lucky8d )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "8-40_.bin",   0x0000, 0x4000, CRC(4c79db5a) SHA1(b959030856f54776841092c4c2bccc6565faa587) )
	ROM_LOAD( "9-40_.bin",   0x4000, 0x4000, CRC(fb0d511f) SHA1(c2c1868339d4f20bf1f5d6b66802e8f8deed4611) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5",  0x00000, 0x8000, CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )
	ROM_LOAD( "6",  0x08000, 0x8000, CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )
	ROM_LOAD( "7",  0x10000, 0x8000, CRC(c415b9d0) SHA1(fd558fe8a116c33bbd712a639224d041447a45c1) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1",   0x0000, 0x2000, CRC(29d6f197) SHA1(1542ca457594f6b7fe8f28f7d78023edd7021bc8) )
	ROM_LOAD( "2",   0x2000, 0x2000, CRC(5f812e65) SHA1(70d9ea82f9337936bf21f82b6961768d436f3a6f) )
	ROM_LOAD( "3",   0x4000, 0x2000, CRC(898b9ed5) SHA1(11b7d1cfcf425d00d086c74e0dbcb72068dda9fe) )
	ROM_LOAD( "4",   0x6000, 0x2000, CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "d12", 0x0000, 0x0100, CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	// missing prom? - using one from other dump
	ROM_LOAD( "prom4", 0x0100, 0x0100, CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x20, "proms2", 0 )
	ROM_LOAD( "d13", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "g14", 0x0000, 0x0100, CRC(bd48de71) SHA1(e4fa1e774af1499bc568be5b2deabb859d8c8172) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "g13", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END


/*
  Z80
  3x 8255
  ay-38910A
  3 prom (no dump right now)

  27256.8 is Z80 PRG

  27256.8             NO MATCH

  27128.1             NO MATCH
  27128.7             NO MATCH
  27256.5             = 5                     lucky8     New Lucky 8 Lines (set 1, W-4)
                      = 6                     lucky8a    New Lucky 8 Lines (set 2, W-4)
                      = 5                     lucky8c    New Lucky 8 Lines (set 4, W-4)
                      = 5                     lucky8d    New Lucky 8 Lines (set 5, W-4)
  27256.6             = 6                     lucky8     New Lucky 8 Lines (set 1, W-4)
                      = 7                     lucky8a    New Lucky 8 Lines (set 2, W-4)
                      = 6                     lucky8c    New Lucky 8 Lines (set 4, W-4)
                      = 6                     lucky8d    New Lucky 8 Lines (set 5, W-4)
  2764.2              = 2.bin                 ladylinr   Lady Liner
                      = 2                     lucky8     New Lucky 8 Lines (set 1, W-4)
                      = 3                     lucky8a    New Lucky 8 Lines (set 2, W-4)
                      = 2                     lucky8c    New Lucky 8 Lines (set 4, W-4)
                      = 2                     lucky8d    New Lucky 8 Lines (set 5, W-4)
  2764.3              = 3.bin                 ladylinr   Lady Liner
                      = 3                     lucky8     New Lucky 8 Lines (set 1, W-4)
                      = 4                     lucky8a    New Lucky 8 Lines (set 2, W-4)
                      = 3                     lucky8c    New Lucky 8 Lines (set 4, W-4)
                      = 3                     lucky8d    New Lucky 8 Lines (set 5, W-4)
  2764.4              = 4.bin                 ladylinr   Lady Liner
                      = 4                     lucky8     New Lucky 8 Lines (set 1, W-4)
                      = 5                     lucky8a    New Lucky 8 Lines (set 2, W-4)
                      = 4                     lucky8c    New Lucky 8 Lines (set 4, W-4)
                      = 4                     lucky8d    New Lucky 8 Lines (set 5, W-4)

  ...and against lucky8:

                          27128.1                 1ST AND 2ND HALF IDENTICAL
                          27128.7                           11xxxxxxxxxxxx = 0xFF
  6                       27256.6                 IDENTICAL
  5                       27256.5                 IDENTICAL
  4                       2764.4                  IDENTICAL
  3                       2764.3                  IDENTICAL
  2                       2764.2                  IDENTICAL
  7            [2/2]      27128.7                 IDENTICAL
  1                       27128.1      [1/2]      IDENTICAL
  1                       27128.1      [2/2]      IDENTICAL
  9            [1/2]      27256.8      [3/4]      IDENTICAL
  8            [2/2]      27256.8      [2/4]      99.731445%
  8            [1/2]      27256.8      [1/4]      98.413086%
  9            [2/2]      27256.8      [4/4]      90.710449%

  The program is exactly the same of lucky8d, with 40% for main rate and 60% for d-up,
  but merged in only one 27128 EPROM instead of two.

*/
ROM_START( lucky8e )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "27256.8",   0x0000, 0x8000, CRC(65decc53) SHA1(100f26ef796557182ba894d1e30b18ac58a793be) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "27256.5",  0x00000, 0x8000, CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )
	ROM_LOAD( "27256.6",  0x08000, 0x8000, CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )
	ROM_LOAD( "27128.7",  0x10000, 0x8000, BAD_DUMP CRC(c415b9d0) SHA1(fd558fe8a116c33bbd712a639224d041447a45c1) ) // from parent set, since 2 of 3 bitplanes matched

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "27128.1",  0x0000, 0x2000, CRC(8ca19ee7) SHA1(2e0cd4a74bd9abef60ed561ba4e5bb2681ce1222) )  // overdump?
	ROM_IGNORE(                   0x2000)
	ROM_LOAD( "2764.2",   0x2000, 0x2000, CRC(5f812e65) SHA1(70d9ea82f9337936bf21f82b6961768d436f3a6f) )
	ROM_LOAD( "2764.3",   0x4000, 0x2000, CRC(898b9ed5) SHA1(11b7d1cfcf425d00d086c74e0dbcb72068dda9fe) )
	ROM_LOAD( "2764.4",   0x6000, 0x2000, CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "d12", 0x0000, 0x0100, CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	// missing prom? - using one from other dump
	ROM_LOAD( "prom4", 0x0100, 0x0100, CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x20, "proms2", 0 )
	ROM_LOAD( "d13", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "g14", 0x0000, 0x0100, CRC(bd48de71) SHA1(e4fa1e774af1499bc568be5b2deabb859d8c8172) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "g13", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END

/*
  like the parent, but encrypted.
  Has an extra ROM (unverified purpose).
  Possibly bootleg? PCB has no Wing markings or stickers

*/
ROM_START( lucky8f )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "a2.ic85",   0x0000, 0x8000, CRC(b80f3c11) SHA1(6a4e1f986ef019d41d0236992faa17bdb2e095ad) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "a5.ic19",  0x00000, 0x8000, CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )
	ROM_LOAD( "a4.ic18",  0x08000, 0x8000, CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )
	ROM_LOAD( "a3.ic17",  0x10000, 0x8000, CRC(c415b9d0) SHA1(fd558fe8a116c33bbd712a639224d041447a45c1) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "a9.ic23",   0x0000, 0x2000, CRC(4d41bc1f) SHA1(d5529c8e200d8fba2fe503fb20a7ad862c065c8c) )
	ROM_LOAD( "a8.ic22",   0x2000, 0x2000, CRC(5f812e65) SHA1(70d9ea82f9337936bf21f82b6961768d436f3a6f) )
	ROM_LOAD( "a7.ic21",   0x4000, 0x2000, CRC(898b9ed5) SHA1(11b7d1cfcf425d00d086c74e0dbcb72068dda9fe) )
	ROM_LOAD( "a6.ic20",   0x6000, 0x2000, CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.ic26", 0x0000, 0x0100, CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "82s129.ic25", 0x0100, 0x0100, CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x20, "proms2", 0 )
	ROM_LOAD( "82s123.ic65", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "82s129.ic47", 0x0000, 0x0100, CRC(1d668d4a) SHA1(459117f78323ea264d3a29f1da2889bbabe9e4be) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "82s123.ic66", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )

	ROM_REGION( 0x1000, "dec_table", 0 )  // possibly related to encryption? currently unused by the emulation
	ROM_LOAD( "a1.ic91", 0x0000, 0x01000, CRC(8a660a97) SHA1(8d23e98886276824353c6c6572e3d93ddb40f0f0) )
ROM_END


/*
  Lucky 8 lines.

  Only four bytes of difference against the parent set.

  Original   This set

  165B: 02   165B: 09
  165F: 08   165F: 0F

  21F0: 00   21F0: 30
  21F1: 00   21F1: 1E


  Original set:                               This set:

  21E0: 22 E5 3A   ld   ($3AE5),hl            21E0: 22 E5 3A   ld   ($3AE5),hl
  21E3: 2D         dec  l                     21E3: 2D         dec  l
  21E4: 83         add  a,e                   21E4: 83         add  a,e
  21E5: B7         or   a                     21E5: B7         or   a
  21E6: 20 0E      jr   nz,$21F6              21E6: 20 0E      jr   nz,$21F6
  21E8: 2A 70 82   ld   hl,($8270)            21E8: 2A 70 82   ld   hl,($8270)
  21EB: 3A 2C 83   ld   a,($832C)             21EB: 3A 2C 83   ld   a,($832C)
  21EE: 3C         inc  a                     21EE: 3C         inc  a
  21EF: BE         cp   (hl)                  21EF: BE         cp   (hl)
  21F0: 00         nop <-------- patched      21F0: 30 1E      jr   nc,$2210 <--- original jump.
  21F1: 00         nop <-------- patched
  21F2: CD 45 22   call $2245                 21F2: CD 45 22   call $2245
  21F5: C9         ret                        21F5: C9         ret

  Need to investigate what the $2210 routine does...

*/
ROM_START( lucky8g )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "48.b12",   0x0000, 0x4000, CRC(30718aa5) SHA1(0ce1d24a074d2b815640f43fd42a883aae1078c3) )
	ROM_LOAD( "49.b14",   0x4000, 0x4000, CRC(6f62672e) SHA1(05662ef1a70f93b09e48de497b049a282f070735) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5.h7",   0x00000, 0x8000, CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )
	ROM_LOAD( "6.h8",   0x08000, 0x8000, CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )
	ROM_LOAD( "7.h10",  0x10000, 0x8000, CRC(c415b9d0) SHA1(fd558fe8a116c33bbd712a639224d041447a45c1) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1.h1",   0x0000, 0x2000, CRC(29d6f197) SHA1(1542ca457594f6b7fe8f28f7d78023edd7021bc8) )
	ROM_LOAD( "2.h3",   0x2000, 0x2000, CRC(5f812e65) SHA1(70d9ea82f9337936bf21f82b6961768d436f3a6f) )
	ROM_LOAD( "3.h4",   0x4000, 0x2000, CRC(898b9ed5) SHA1(11b7d1cfcf425d00d086c74e0dbcb72068dda9fe) )
	ROM_LOAD( "4.h5",   0x6000, 0x2000, CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "d12", 0x0000, 0x0100, CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	// missing prom? - using one from other dump
	ROM_LOAD( "prom4", 0x0100, 0x0100, CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x20, "proms2", 0 )
	ROM_LOAD( "d13", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "g14", 0x0000, 0x0100, CRC(bd48de71) SHA1(e4fa1e774af1499bc568be5b2deabb859d8c8172) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "g13", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END


/*
  New Lucky 8 Lines Super Turbo (Hack).
  Sticker of Impera Austria in the PCB.

  It takes 15 seconds for the nag, and extra 30 seconds to boot the game.
  This set needs proper DIP switches and lamps.

*/
ROM_START( lucky8h )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "luckyturbo.b14",  0x0000, 0x8000, CRC(ae192509) SHA1(2e01ccce3d06e23bfa64046ed75ff89adc9ae266) )
	ROM_IGNORE(                          0x8000)  // identical halves.... discarding one.

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5.h7",  0x00000, 0x8000, CRC(fd3ff9a7) SHA1(f009ce36a9e2190bafca5b0ce3268b54bdc9a8b5) )
	ROM_LOAD( "6.h8",  0x08000, 0x8000, CRC(80888d64) SHA1(91ec96709df77c534d381e391839984a88aeb1e0) )
	ROM_LOAD( "7.h10", 0x10000, 0x8000, CRC(255d5860) SHA1(f171fde3d542594132b38b44300f750d45fb67a2) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1.h1",  0x0000, 0x2000, CRC(b45f41e2) SHA1(890c94c802f5ada97bc73f5a7a09e69c3207966c) )
	ROM_LOAD( "2.h3",  0x2000, 0x2000, CRC(0463413a) SHA1(061b8335fdd44767e8c1832f5b5101276ad0f689) )
	ROM_LOAD( "3.h4",  0x4000, 0x2000, CRC(6be213c8) SHA1(bf5a002961b0827581cbab4249321ae5b51316f0) )
	ROM_LOAD( "4.h5",  0x6000, 0x2000, CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "72s287.g13", 0x0000, 0x0100, CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "72s287.g14", 0x0100, 0x0100, CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x40, "proms2", 0 )
	ROM_LOAD( "74s288.d13", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "82s129.f3", 0x0000, 0x0100, CRC(1d668d4a) SHA1(459117f78323ea264d3a29f1da2889bbabe9e4be) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "74s288.d12", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END


/*
  New Lucky 8 Lines.
  Eagle, licensed by Wing.

  Original stickers on PCB.

  ROHM BU18400B-PS (Z80B)
  instead of stock Z80.

*/
ROM_START( lucky8i )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "48.b12",   0x0000, 0x4000, CRC(1aa5ddb6) SHA1(df615ff3f013582a5ebd06e6f85b4abd184bfeb4) )
	ROM_LOAD( "49.b14",   0x4000, 0x4000, CRC(0eff3f80) SHA1(b273fec096f4506dfffdb79c7f4816fa54640ea6) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5.h7",  0x00000, 0x8000, CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )
	ROM_LOAD( "6.h8",  0x08000, 0x8000, CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )
	ROM_LOAD( "7.h10", 0x10000, 0x8000, CRC(c415b9d0) SHA1(fd558fe8a116c33bbd712a639224d041447a45c1) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1.h1",   0x0000, 0x2000, CRC(ad6a3f72) SHA1(b93d5830542aaa10795b5b0ada8e7bc3b867072b) )
	ROM_IGNORE(                 0x6000)  // identical quarters.... discarding three.
	ROM_LOAD( "2.h3",   0x2000, 0x2000, CRC(e2ef08cf) SHA1(c03654a9033db9d655cfef627909942b6cb99ba4) )
	ROM_IGNORE(                 0x6000)  // identical quarters.... discarding three.
	ROM_LOAD( "3.h4",   0x4000, 0x2000, CRC(c1a7a113) SHA1(2efb1addea53ed42bd14a7775443ee46c407ca81) )
	ROM_IGNORE(                 0x6000)  // identical quarters.... discarding three.
	ROM_LOAD( "4.h6",   0x6000, 0x2000, CRC(9e939979) SHA1(c6e93df6465c076557ff5dccf650aff3a9064e0d) )
	ROM_IGNORE(                 0x6000)  // identical quarters.... discarding three.

	// neeed proper bipolar proms dumps...
	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "n82s129an.g13", 0x0000, 0x0100, BAD_DUMP CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "n82s129an.g14", 0x0100, 0x0100, BAD_DUMP CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x40, "proms2", 0 )
	ROM_LOAD( "n82s123n.d13",  0x0000, 0x0020, BAD_DUMP CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "n82s129an.f3",  0x0000, 0x0100, BAD_DUMP CRC(bd48de71) SHA1(e4fa1e774af1499bc568be5b2deabb859d8c8172) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "n82s123n.d12",  0x0000, 0x0020, BAD_DUMP CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END


/*
  New Lucky 8 Lines Crown Turbo (hack)

  It takes 15 seconds for the nag, and extra 30 seconds to boot the game.

  The program has a nasty protection that checks a value mirrored
  from $1249 to $D249. If this fails, just reset the machine.
  This routine is used when BET, and other critical things.

  3831: ld   a,($D249)
  3834: cp   $4F
  3836: jp   nz,$0000

  This set needs proper DIP switches and lamps.

*/
ROM_START( lucky8j )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "pr.b14",  0x0000, 0x8000, CRC(245ab833) SHA1(0e73c7a4cd387ae71752b422c537f9b7e5dbb770) )
	ROM_RELOAD(          0xc000, 0x2000)
	ROM_IGNORE(                  0x6000)

	ROM_REGION( 0x18000, "gfx1", 0 )  // the original devices 5 & 7 are half the size, and have only the second half of the required data.
	ROM_LOAD( "5.h7",  0x00000, 0x8000, BAD_DUMP CRC(994a9894) SHA1(4063c2c5e111f24a85df1665fd3f9fbb20fda4da) )  // from a gfx match set
	ROM_LOAD( "6.h8",  0x08000, 0x8000, CRC(80888d64) SHA1(91ec96709df77c534d381e391839984a88aeb1e0) )
	ROM_LOAD( "7.h10", 0x10000, 0x8000, BAD_DUMP CRC(255d5860) SHA1(f171fde3d542594132b38b44300f750d45fb67a2) )  // from a gfx match set

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1.h1",  0x0000, 0x2000, CRC(275265ee) SHA1(7075dbe2d59b8cae4f355bcecfbbb9853fe9ca75) )
	ROM_LOAD( "2.h3",  0x2000, 0x2000, CRC(146d17da) SHA1(8647d2d9eaf7d242e04d41c263c2dc9434c55ab6) )
	ROM_LOAD( "3.h4",  0x4000, 0x2000, CRC(5c85f883) SHA1(9c5760e75d526903e160d60e39111723eb97855b) )
	ROM_LOAD( "4.h6",  0x6000, 0x2000, CRC(10d896f3) SHA1(16f74a287dd0e8511fb8bbff7a29710de898061a) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "74s287.g13", 0x0000, 0x0100, CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "74s287.g14", 0x0100, 0x0100, CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x40, "proms2", 0 )
	ROM_LOAD( "82s123.d13", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "74s287.f3",  0x0000, 0x0100, CRC(1d668d4a) SHA1(459117f78323ea264d3a29f1da2889bbabe9e4be) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "82s123.d12", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END


/*
  New Lucky 8 Lines (encrypted).
  Original of Wing.

  Ths board has a custom Sega/NEC CPU (D315-5136)
  instead of a regular Z80.

  The custom CPU performs XOR masks and bitswaps relative to addressing
  and involves M1 line for different encryption betweeen opcodes and data.

*/
ROM_START( lucky8k )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "48.b12",   0x0000, 0x4000, CRC(d9fb41b4) SHA1(bf33d0a5e0167eb48b3ae00e7e4136cd57cf0a4d) )
	ROM_LOAD( "49.b14",   0x4000, 0x4000, CRC(ef89f730) SHA1(20d28fde72ace10f476fd42131c76f2969d5b1e4) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5.h7",  0x00000, 0x8000, CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )
	ROM_LOAD( "6.h8",  0x08000, 0x8000, CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )
	ROM_LOAD( "7.h10", 0x10000, 0x8000, CRC(c415b9d0) SHA1(fd558fe8a116c33bbd712a639224d041447a45c1) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1.h1",   0x0000, 0x2000, CRC(0452b3c5) SHA1(7d432247d14ac13712beba682e169054f664b81d) )
	ROM_LOAD( "2.h3",   0x2000, 0x2000, CRC(5f812e65) SHA1(70d9ea82f9337936bf21f82b6961768d436f3a6f) )
	ROM_LOAD( "3.h4",   0x4000, 0x2000, CRC(898b9ed5) SHA1(11b7d1cfcf425d00d086c74e0dbcb72068dda9fe) )
	ROM_LOAD( "4.h5",   0x6000, 0x2000, CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )

	// neeed proper bipolar proms dumps...
	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "tbp24s10n.g13",  0x0000, 0x0100, BAD_DUMP CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "tbp24s10n.g14",  0x0100, 0x0100, BAD_DUMP CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x40, "proms2", 0 )
	ROM_LOAD( "tbp18s030n.d13", 0x0000, 0x0020, BAD_DUMP CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "tbp24s10n.f3",   0x0000, 0x0100, BAD_DUMP CRC(bd48de71) SHA1(e4fa1e774af1499bc568be5b2deabb859d8c8172) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "tbp18s030n.d12", 0x0000, 0x0020, BAD_DUMP CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END

ROM_START( lucky8l )
	ROM_REGION( 0x10000, "maincpu", 0 )  // label should be w4(9) - same format for ROMs below
	ROM_LOAD( "w4_9.b14",  0x0000, 0x8000, CRC(4549e31f) SHA1(16d9537c25478ace4f002ef2784acf89038faa7f) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "w4_5.h7",  0x00000, 0x8000, CRC(994a9894) SHA1(4063c2c5e111f24a85df1665fd3f9fbb20fda4da) )
	ROM_LOAD( "w4_6.h8",  0x08000, 0x8000, CRC(80888d64) SHA1(91ec96709df77c534d381e391839984a88aeb1e0) )
	ROM_LOAD( "w4_7.h10", 0x10000, 0x8000, CRC(255d5860) SHA1(f171fde3d542594132b38b44300f750d45fb67a2) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "w4_1.h1",  0x0000, 0x2000, CRC(b45f41e2) SHA1(890c94c802f5ada97bc73f5a7a09e69c3207966c) )
	ROM_LOAD( "w4_2.h3",  0x2000, 0x2000, CRC(0463413a) SHA1(061b8335fdd44767e8c1832f5b5101276ad0f689) )
	ROM_LOAD( "w4_3.h4",  0x4000, 0x2000, CRC(6be213c8) SHA1(bf5a002961b0827581cbab4249321ae5b51316f0) )
	ROM_LOAD( "w4_4.h6",  0x6000, 0x2000, CRC(0a25964b) SHA1(d41eda201bb01229fb6e2ff437196dd65eebe577) )

	ROM_REGION( 0x2000, "proms", 0 )
	ROM_LOAD( "w4.g14", 0x0000, 0x2000, CRC(27f533be) SHA1(bffa6adecf814f4d4675907905960aad0de42969) ) // 57C49B-35, had its own little circuit board to convert it to fit in a 16 pin IC - silkscreend T82S129
	ROM_COPY( "proms",  0x1800, 0x0000, 0x0100 )

	ROM_REGION( 0x117, "proms2", 0 )
	ROM_LOAD( "w4.d13", 0x0000, 0x0117, CRC(37173040) SHA1(bc561cf7cb11c3a1b2677b14779ce2957e3b778d) ) // GAL16V8D

	ROM_REGION( 0x2000, "unkprom", 0 )
	ROM_LOAD( "w4.f3",   0x0000, 0x2000, CRC(439022fd) SHA1(3b7ff474cb1eb45f14c9587a510446cafdf17d58) ) // 57C49B-35, had its own little circuit board to convert it to fit in a 16 pin IC - silkscreend T82S129
	ROM_COPY( "unkprom", 0x1800, 0x0000, 0x0100 )

	ROM_REGION( 0x117, "unkprom2", 0 )
	ROM_LOAD( "w4.d12", 0x0000, 0x0117, CRC(41b55fb0) SHA1(f31a31dc2c0789d08957785e8c8f804690133450) ) // GAL16V8D
ROM_END

/*
  Original Wing PCB with a small riser board for CPU,
  logic and 2x 8-DIP banks.

  GFX ROMs are identical to many other sets.

*/
ROM_START( lucky8m )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "28r.b12",   0x0000, 0x4000, CRC(9d7bc7f8) SHA1(93c0297dbe1579b6326d43d743d2b95264e7e0aa) )
	ROM_LOAD( "29r.b14",   0x4000, 0x4000, CRC(7b2b0c0c) SHA1(1acb20be5fbfdf6813f8a5257f9bd771b37504ea) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "eagle-5.h7",   0x00000, 0x8000, CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )
	ROM_LOAD( "eagle-6.h8",   0x08000, 0x8000, CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )
	ROM_LOAD( "eagle-7.h10",  0x10000, 0x8000, CRC(c415b9d0) SHA1(fd558fe8a116c33bbd712a639224d041447a45c1) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "eagle-1.h1",   0x0000, 0x2000, CRC(29d6f197) SHA1(1542ca457594f6b7fe8f28f7d78023edd7021bc8) )
	ROM_LOAD( "eagle-2.h3",   0x2000, 0x2000, CRC(5f812e65) SHA1(70d9ea82f9337936bf21f82b6961768d436f3a6f) )
	ROM_LOAD( "eagle-3.h4",   0x4000, 0x2000, CRC(898b9ed5) SHA1(11b7d1cfcf425d00d086c74e0dbcb72068dda9fe) )
	ROM_LOAD( "eagle-4.h5",   0x6000, 0x2000, CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )

	// all the PROMs weren't dumped for this set, marking bad as precaution
	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "d12",   0x0000, 0x0100, BAD_DUMP CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "prom4", 0x0100, 0x0100, BAD_DUMP CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x20, "proms2", 0 )
	ROM_LOAD( "d13", 0x0000, 0x0020, BAD_DUMP CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "g14", 0x0000, 0x0100, BAD_DUMP CRC(bd48de71) SHA1(e4fa1e774af1499bc568be5b2deabb859d8c8172) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "g13", 0x0000, 0x0020, BAD_DUMP CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END

ROM_START( lucky8n )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "gold.ic8.sub", 0x0000, 0x8000, CRC(f2fc90a2) SHA1(ab9f9166a3b15d69d2f70e1bcc562f54452628e7) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5.7h",  0x00000, 0x8000, CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )
	ROM_LOAD( "6.8h",  0x08000, 0x8000, CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )
	ROM_LOAD( "7.10h", 0x10000, 0x8000, CRC(c415b9d0) SHA1(fd558fe8a116c33bbd712a639224d041447a45c1) )

	ROM_REGION( 0x8000, "gfx2", 0 )  // all 1ST AND 2ND HALF IDENTICAL, match many other lucky8 sets otherwise
	ROM_LOAD( "1.1h", 0x0000, 0x2000, CRC(8ca19ee7) SHA1(2e0cd4a74bd9abef60ed561ba4e5bb2681ce1222) )
	ROM_IGNORE(               0x2000)
	ROM_LOAD( "2.3h", 0x2000, 0x2000, CRC(3b5a992d) SHA1(bc862caa6bab654aad80c615ec5a9114bf060300) )
	ROM_IGNORE(               0x2000)
	ROM_LOAD( "3.4h", 0x4000, 0x2000, CRC(0219b22d) SHA1(faf7c6804ff36bdff31b5584660e4f2613d0e220) )
	ROM_IGNORE(               0x2000)
	ROM_LOAD( "4.6h", 0x6000, 0x2000, CRC(d26c3262) SHA1(c7f1868a66180fc58d65dc90f700df3e33af63a2) )
	ROM_IGNORE(               0x2000)

	// PROMs weren't dumped for this set, but GFX match so color PROMs should match too
	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "d12",   0x000, 0x100, BAD_DUMP CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "prom4", 0x100, 0x100, BAD_DUMP CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x20, "proms2", 0 )
	ROM_LOAD( "d13", 0x00, 0x20, BAD_DUMP CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "g14", 0x000, 0x100, BAD_DUMP CRC(bd48de71) SHA1(e4fa1e774af1499bc568be5b2deabb859d8c8172) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "g13", 0x00, 0x20, BAD_DUMP CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END

ROM_START( lucky8o )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "256.bin",   0x0000, 0x8000, CRC(fe8e5110) SHA1(98b6a1db64312482d6ffbd5d9985e6feaa747111) )

	// only the program ROM was provided, with no indication of the other ROMs / PROMs. Using bog-standard lucky8 ones for now
	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5.h7",   0x00000, 0x8000, BAD_DUMP CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )
	ROM_LOAD( "6.h8",   0x08000, 0x8000, BAD_DUMP CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )
	ROM_LOAD( "7.h10",  0x10000, 0x8000, BAD_DUMP CRC(c415b9d0) SHA1(fd558fe8a116c33bbd712a639224d041447a45c1) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1.h1",   0x0000, 0x2000, BAD_DUMP CRC(29d6f197) SHA1(1542ca457594f6b7fe8f28f7d78023edd7021bc8) )
	ROM_LOAD( "2.h3",   0x2000, 0x2000, BAD_DUMP CRC(5f812e65) SHA1(70d9ea82f9337936bf21f82b6961768d436f3a6f) )
	ROM_LOAD( "3.h4",   0x4000, 0x2000, BAD_DUMP CRC(898b9ed5) SHA1(11b7d1cfcf425d00d086c74e0dbcb72068dda9fe) )
	ROM_LOAD( "4.h5",   0x6000, 0x2000, BAD_DUMP CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "d12",   0x0000, 0x0100, BAD_DUMP CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "prom4", 0x0100, 0x0100, BAD_DUMP CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x20, "proms2", 0 )
	ROM_LOAD( "d13", 0x0000, 0x0020, BAD_DUMP CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "g14", 0x0000, 0x0100, BAD_DUMP CRC(bd48de71) SHA1(e4fa1e774af1499bc568be5b2deabb859d8c8172) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "g13", 0x0000, 0x0020, BAD_DUMP CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END

ROM_START( lucky8p )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "27c512.bin", 0x00000, 0x10000, CRC(6b7d70be) SHA1(d6520f2da2b74eae02b6ee3375fe982c358dc927) )

	// only the program ROM was provided, with no indication of the other ROMs / PROMs. Using bog-standard lucky8 ones for now
	ROM_REGION( 0x18000, "gfx1", 0 ) // may be wrong, see missing GFX on title screen
	ROM_LOAD( "5.h7",   0x00000, 0x8000, BAD_DUMP CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )
	ROM_LOAD( "6.h8",   0x08000, 0x8000, BAD_DUMP CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )
	ROM_LOAD( "7.h10",  0x10000, 0x8000, BAD_DUMP CRC(c415b9d0) SHA1(fd558fe8a116c33bbd712a639224d041447a45c1) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1.h1",   0x0000, 0x2000, BAD_DUMP CRC(29d6f197) SHA1(1542ca457594f6b7fe8f28f7d78023edd7021bc8) )
	ROM_LOAD( "2.h3",   0x2000, 0x2000, BAD_DUMP CRC(5f812e65) SHA1(70d9ea82f9337936bf21f82b6961768d436f3a6f) )
	ROM_LOAD( "3.h4",   0x4000, 0x2000, BAD_DUMP CRC(898b9ed5) SHA1(11b7d1cfcf425d00d086c74e0dbcb72068dda9fe) )
	ROM_LOAD( "4.h5",   0x6000, 0x2000, BAD_DUMP CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "d12",   0x0000, 0x0100, BAD_DUMP CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "prom4", 0x0100, 0x0100, BAD_DUMP CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x20, "proms2", 0 )
	ROM_LOAD( "d13", 0x0000, 0x0020, BAD_DUMP CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "g14", 0x0000, 0x0100, BAD_DUMP CRC(bd48de71) SHA1(e4fa1e774af1499bc568be5b2deabb859d8c8172) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "g13", 0x0000, 0x0020, BAD_DUMP CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END

/*
  Lucky 8 Lines
  W-4 hardware, Wing

  The first program ROM is like the original
  but with a jump patched.

  The second one has a lot of data and more
  strings after the string "You Lose", instead
  of the original one that after the string
  all bytes are FFs...

*/
ROM_START( lucky8q )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "48_red.bin",    0x0000, 0x4000, CRC(30718aa5) SHA1(0ce1d24a074d2b815640f43fd42a883aae1078c3) )
	ROM_LOAD( "29r.27-28.bin", 0x4000, 0x4000, CRC(04172172) SHA1(9217003f1203d9501889832fc1f7304917a6d155) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5",  0x00000, 0x8000, CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )
	ROM_LOAD( "6",  0x08000, 0x8000, CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )
	ROM_LOAD( "7",  0x10000, 0x8000, CRC(c415b9d0) SHA1(fd558fe8a116c33bbd712a639224d041447a45c1) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1",   0x0000, 0x2000, CRC(29d6f197) SHA1(1542ca457594f6b7fe8f28f7d78023edd7021bc8) )
	ROM_LOAD( "2",   0x2000, 0x2000, CRC(5f812e65) SHA1(70d9ea82f9337936bf21f82b6961768d436f3a6f) )
	ROM_LOAD( "3",   0x4000, 0x2000, CRC(898b9ed5) SHA1(11b7d1cfcf425d00d086c74e0dbcb72068dda9fe) )
	ROM_LOAD( "4",   0x6000, 0x2000, CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "d12", 0x0000, 0x0100, CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "prom4", 0x0100, 0x0100, CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x20, "proms2", 0 )
	ROM_LOAD( "d13", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "g14", 0x0000, 0x0100, CRC(bd48de71) SHA1(e4fa1e774af1499bc568be5b2deabb859d8c8172) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "g13", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END

/*
  lucky 8 lines
  protected sets

  The program checks often some nvram registers expecting to be left shifted each time
  they are accessed, but no piece of code (even inside the interrupts) is doing this task.

  for now, we patched the protection scheme.

  lucky8r, has an additional "Turbo" feature.
  lucky8s, has two new features: "Fever" (betting 16 credits), and "Bingo" (betting 32 credits).

  Both enhacements need to be checked.

*/
ROM_START( lucky8r )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "16_289.bin", 0x0000, 0x8000, CRC(44196d20) SHA1(cb1378dee3cddb9a75d65269c61510705babdfb6) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5",  0x00000, 0x8000, CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )
	ROM_LOAD( "6",  0x08000, 0x8000, CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )
	ROM_LOAD( "7",  0x10000, 0x8000, CRC(c415b9d0) SHA1(fd558fe8a116c33bbd712a639224d041447a45c1) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1",  0x0000, 0x2000, CRC(29d6f197) SHA1(1542ca457594f6b7fe8f28f7d78023edd7021bc8) )
	ROM_LOAD( "2",  0x2000, 0x2000, CRC(5f812e65) SHA1(70d9ea82f9337936bf21f82b6961768d436f3a6f) )
	ROM_LOAD( "3",  0x4000, 0x2000, CRC(898b9ed5) SHA1(11b7d1cfcf425d00d086c74e0dbcb72068dda9fe) )
	ROM_LOAD( "4",  0x6000, 0x2000, CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "d12",   0x0000, 0x0100, CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "prom4", 0x0100, 0x0100, CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x20, "proms2", 0 )
	ROM_LOAD( "d13", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "g14", 0x0000, 0x0100, CRC(bd48de71) SHA1(e4fa1e774af1499bc568be5b2deabb859d8c8172) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "g13", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END

// Same protection scheme than lucky8r. See above.
ROM_START( lucky8s )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "890.bin", 0x0000, 0x8000, CRC(0cb24215) SHA1(21bcad456c49c67e530b5555620db1e80df27d40) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "5",  0x00000, 0x8000, CRC(59026af3) SHA1(3d7f7e78968ca26275635aeaa0e994468a3da575) )
	ROM_LOAD( "6",  0x08000, 0x8000, CRC(67a073c1) SHA1(36194d57d0dc0601fa1fdf2e6806f11b2ea6da36) )
	ROM_LOAD( "7",  0x10000, 0x8000, CRC(c415b9d0) SHA1(fd558fe8a116c33bbd712a639224d041447a45c1) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1",  0x0000, 0x2000, CRC(29d6f197) SHA1(1542ca457594f6b7fe8f28f7d78023edd7021bc8) )
	ROM_LOAD( "2",  0x2000, 0x2000, CRC(5f812e65) SHA1(70d9ea82f9337936bf21f82b6961768d436f3a6f) )
	ROM_LOAD( "3",  0x4000, 0x2000, CRC(898b9ed5) SHA1(11b7d1cfcf425d00d086c74e0dbcb72068dda9fe) )
	ROM_LOAD( "4",  0x6000, 0x2000, CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "d12",   0x0000, 0x0100, CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "prom4", 0x0100, 0x0100, CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x20, "proms2", 0 )
	ROM_LOAD( "d13", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "g14", 0x0000, 0x0100, CRC(bd48de71) SHA1(e4fa1e774af1499bc568be5b2deabb859d8c8172) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "g13", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END


/*

  Lucky 8 Lines with Tetris front game.

  Runs on W-4 hardware with a daughterboard with program,
  a C8051F310 (8051) MCU, a 16l8 PLD, and a 4 DIP switches bank.

*/
ROM_START( lucky8tet )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "w4-tet-p097-9_sub-pcb.u7", 0x00000, 0x10000, CRC(779db23e) SHA1(8a629d0e0bd57268e3b2a89bf1e5ed0d664f13c8) )

	ROM_REGION( 0x2000, "tmcu", 0 )  // C8051F310 binary
	ROM_LOAD( "mcu.bin", 0x0000, 0x054a, CRC(bc70cd9d) SHA1(2edd27b0bb2e846778aacaadd843186097a049a1) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "w45.bin",  0x00000, 0x8000, CRC(9af48a18) SHA1(ca2cc5cb184ee7c849c68bdbb61d1f78d3af6f63) )
	ROM_LOAD( "w46.bin",  0x08000, 0x8000, CRC(63d851ec) SHA1(feaceada081f32d4161f1e04b10f32584ddf0f3d) )
	ROM_LOAD( "w47.bin",  0x10000, 0x8000, CRC(f285300a) SHA1(875c19cc50fc870ddd50f731d9bee8b11d15a8d3) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "1",  0x0000, 0x2000, CRC(29d6f197) SHA1(1542ca457594f6b7fe8f28f7d78023edd7021bc8) )
	ROM_LOAD( "2",  0x2000, 0x2000, CRC(5f812e65) SHA1(70d9ea82f9337936bf21f82b6961768d436f3a6f) )
	ROM_LOAD( "3",  0x4000, 0x2000, CRC(898b9ed5) SHA1(11b7d1cfcf425d00d086c74e0dbcb72068dda9fe) )
	ROM_LOAD( "4",  0x6000, 0x2000, CRC(4f7cfb35) SHA1(0617cf4419be00d9bacc78724089cb8af4104d68) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "d12",   0x0000, 0x0100, CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "prom4", 0x0100, 0x0100, CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x20, "proms2", 0 )
	ROM_LOAD( "d13", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "g14", 0x0000, 0x0100, CRC(bd48de71) SHA1(e4fa1e774af1499bc568be5b2deabb859d8c8172) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "g13", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END


/*
Super Dragon by OCT

PCB is etched
VIEW SONIC 803 SAYNAX CO.,LTD. ALL RIGHTS RESERVED MADE IN JAPAN

Main components
- Z0840008PSC CPU
- 12.000 MHz XTAL
- 2x 44-pin square chips stickered OCT
- 68-pin square chips stickered OCT
- YM2413
- SN76489AN
- 2x I8255 (TODO: verify, they are stickered)
- HM6264ALP-12
- HM6116LP-3
- 5x bank of 8 switches

This game shares the same programmer / programming team as Ichi Ban Jian by Excel.
It seems to use a similar split opcodes / data ROM arrangement.
*/

ROM_START( superdrg )
	ROM_REGION( 0x60000, "maincpu", 0 )
	ROM_LOAD( "oct1.u20", 0x00000, 0x20000, CRC(0f350eaf) SHA1(36018ec122c96d14f871c1db6517eb090f2d2b65) )

	ROM_REGION( 0x20000, "gfx1", 0 )
	ROM_LOAD( "oct3.u39", 0x00000, 0x20000, CRC(c0dd7453) SHA1(8782aec795c6d7a96c81ad04ddb8adbc044e4194) )

	ROM_REGION( 0x20000, "gfx2", 0 )
	ROM_LOAD( "oct2.u32", 0x00000, 0x20000, CRC(03386ec2) SHA1(9eddb2fcfca402d8790bc10507023018b303ffcd) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "sudr.u", 0x000, 0x200, NO_DUMP ) // AM27S29APC. TODO: verify location

	ROM_REGION( 0x200, "proms2", 0 )
	ROM_LOAD( "dra.u49",  0x000, 0x200, CRC(2da522a7) SHA1(432a6463d1ad39644a9e7094dd6d2d9e604dfc55) ) // AM27S13PC
ROM_END


/*
  Only the subboard available (Z80, ROM, 2 stickered chips (sanded),
  2 banks of 8 DIP switches (marked SW5 and SW6) and a rotary switch (SW7))

  very professional-looking subboard marked Excel Planning
  needs correct GFX ROMs / color PROMs (using the ones from wcat3, for now)

*/
ROM_START( wcat )
	ROM_REGION( 0x20000, "maincpu", 0 )
	ROM_LOAD( "y8.u1.sub", 0x00000, 0x20000, CRC(49e11ff4) SHA1(ce421f85b298c2e9c335fdbf0547a355ae29f1a6) )
	ROM_FILL( 0x1c000, 0x1000, 0xc9 )  // jumps in this area multiple times, but nothing here. Something to do with the 2 stickered chips?

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "wcat3.h7",   0x10000, 0x8000, BAD_DUMP CRC(065cb575) SHA1(4dd49773c4caeaa489342e61f26c8eaaae876edc) )
	ROM_LOAD( "wcat3.h8",   0x08000, 0x8000, BAD_DUMP CRC(60463213) SHA1(b0937b4a55f74831ce9a06f3df0af504845f908d) )
	ROM_LOAD( "wcat3.h10",  0x00000, 0x8000, BAD_DUMP CRC(dda38c26) SHA1(4b9292911133dd6067a1c61a44845e824e88a52d) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "wcat3.h1",   0x6000, 0x2000, BAD_DUMP CRC(0509d556) SHA1(c2f46d279f45b544c67b0c966659cc6d5d53c22f) )
	ROM_LOAD( "wcat3.h2",   0x4000, 0x2000, BAD_DUMP CRC(d50f3d62) SHA1(8500c7f3a2f51ea0ed7e142ecdc4e669ba3e7065) )
	ROM_LOAD( "wcat3.h4",   0x2000, 0x2000, BAD_DUMP CRC(373d9949) SHA1(ff483505fb9e86411acad7059bf5434dde290946) )
	ROM_LOAD( "wcat3.h5",   0x0000, 0x2000, BAD_DUMP CRC(50febe3b) SHA1(0479bcee53b174aa0413951e283e446b09a6f156) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "wcat3.g13",  0x0000, 0x0100, BAD_DUMP CRC(c29a36f2) SHA1(936b07a195f6e7f6a884bd35f442003cf67aa447) )
	ROM_LOAD( "wcat3.g14",  0x0100, 0x0100, BAD_DUMP CRC(dcd53d2c) SHA1(bbcb4266117c3cd1c8ef0e5046d3558c8293313a) )

	ROM_REGION( 0x40, "proms2", 0 )
	ROM_LOAD( "wcat3.d13",  0x0000, 0x0020, BAD_DUMP CRC(eab832ed) SHA1(0fbc8914ba1805cfc6698fe7f137a934e63a4f89) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "wcat3.f3",   0x0000, 0x0100, BAD_DUMP CRC(1d668d4a) SHA1(459117f78323ea264d3a29f1da2889bbabe9e4be) )

	ROM_REGION( 0x40, "unkprom2", 0 )
	ROM_LOAD( "wcat3.d12",  0x0000, 0x0020, BAD_DUMP CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END

ROM_START( animalw ) // big CPU block marked GPS Game Power System
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "rom9.u91",  0x0000, 0x8000, CRC(beaeafe5) SHA1(58c9ab7559a346d55dbd679b583abd1ebe2d9fae) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "rom7.u22",  0x00000, 0x8000, CRC(4b7613da) SHA1(7a0384f24f8fb5e8722b559b7b82d922ed781139) )
	ROM_LOAD( "rom5.u21",  0x08000, 0x8000, CRC(dfae0bd4) SHA1(b64cf45e1a0ab14995b4e0cc3d5931d81192d5cf) )
	ROM_LOAD( "rom6.u20",  0x10000, 0x8000, CRC(fd214376) SHA1(5c9227a4aafe3a6119ee197f53fd067ab215acd1) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "rom4.u26",  0x0000, 0x2000, CRC(cff7c18b) SHA1(bb99be34a04623063916127ab0b1cdbe649f4609) )
	ROM_IGNORE(                    0x6000 )
	ROM_LOAD( "rom2.u25",  0x2000, 0x2000, CRC(5342ec28) SHA1(7188f36cc55fc202f06b35f201cfe01d2ad60fc1) )
	ROM_IGNORE(                    0x6000 )
	ROM_LOAD( "rom1.u24",  0x4000, 0x2000, CRC(87303bc8) SHA1(7ba0d9127c743ebbd273dad7d1010ccfd8848163) )
	ROM_IGNORE(                    0x6000 )
	ROM_LOAD( "rom3.u23",  0x6000, 0x2000, CRC(7d366bcf) SHA1(b3b208ff9433efe62510352b98861d03673c53b4) )
	ROM_IGNORE(                    0x6000 )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "82s129.u28", 0x0000, 0x0100, CRC(14f47fc9) SHA1(fda1bd524e6281a47e9ca348b1b13de25242ef04) )
	ROM_LOAD( "82s129.u27", 0x0100, 0x0100, CRC(58ec5baf) SHA1(79f29c26c2747f3baeb0fe309d4e0f1eb01c6a79) )

	ROM_REGION( 0x40, "proms2", 0 )
	ROM_LOAD( "dm74s288.u68", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "82s129.u51",  0x0000, 0x0100, CRC(1d668d4a) SHA1(459117f78323ea264d3a29f1da2889bbabe9e4be) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "dm74s288.u69", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END

ROM_START( animalwbl )  // according to the dumper: runs on the same HW as lucky8 but at the two 8255 has some shorts
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "rom8.bin",  0x0000, 0x8000, CRC(8826e4e7) SHA1(70cff8c5ce75ab0f568e8cdf39ef9165b73fa2c0) )

	ROM_REGION( 0x18000, "gfx1", 0 )
	ROM_LOAD( "rom5.bin",  0x00000, 0x8000, CRC(516def6d) SHA1(8602dc1b9ebdb4c1982d82aee4590dbba70cd873) )
	ROM_LOAD( "rom6.bin",  0x08000, 0x8000, CRC(71f2e1d0) SHA1(64e6ce53b34df1d6c59577c26e77c01f00f376bc) )
	ROM_LOAD( "rom7.bin",  0x10000, 0x8000, CRC(b837e59e) SHA1(dd9b4bb774ce8d9af94f5b97c0fbc1cd0a92874f) )

	ROM_REGION( 0x8000, "gfx2", 0 )
	ROM_LOAD( "rom1.bin",  0x0000, 0x2000, CRC(ccec731b) SHA1(25e17bb1be0098f660e719c561523bc6a4e6f466) )
	ROM_LOAD( "rom2.bin",  0x2000, 0x2000, CRC(d795f697) SHA1(ee5f6277d79704984ce946fead676ea425dc3df0) )
	ROM_LOAD( "rom3.bin",  0x4000, 0x2000, CRC(adcee626) SHA1(48051e6e476d1b013c7c6f06a75ed27488675eae) )
	ROM_LOAD( "rom4.bin",  0x6000, 0x2000, CRC(a6c87bb3) SHA1(073b19e7892dec52dd7cf1b7573f4dc3b2f8142c) )

	ROM_REGION( 0x200, "proms", 0 )
	ROM_LOAD( "13-g.bin", 0x0000, 0x0100, CRC(23e81049) SHA1(78071dae70fad870e972d944642fb3a2374be5e4) )
	ROM_LOAD( "14-g.bin", 0x0100, 0x0100, CRC(526cf9d3) SHA1(eb779d70f2507d0f26d225ac8f5de8f2243599ca) )

	ROM_REGION( 0x40, "proms2", 0 )
	ROM_LOAD( "13-d.bin", 0x0000, 0x0020, CRC(c6b41352) SHA1(d7c3b5aa32e4e456c9432a13bede1db6d62eb270) )

	ROM_REGION( 0x100, "unkprom", 0 )
	ROM_LOAD( "3-f.bin",  0x0000, 0x0100, CRC(1d668d4a) SHA1(459117f78323ea264d3a29f1da2889bbabe9e4be) )

	ROM_REGION( 0x20, "unkprom2", 0 )
	ROM_LOAD( "12-d.bin", 0x0000, 0x0020, CRC(6df3f972) SHA1(0096a7f7452b70cac6c0752cb62e24b643015b5c) )
ROM_END

/*
  Lucky 8 Lines
  A900 2nd generation.

  Chinese bootleg with new features
  like cross bonus, bell bonus, and other enhacements.

  æ•™è‚²éƒ¨æ›¸å‡½                  Ministry of Education official letter/document
  å
