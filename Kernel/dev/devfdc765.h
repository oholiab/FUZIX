#ifndef __DEVFDC765_DOT_H__
#define __DEVFDC765_DOT_H__

/* public interface */
int devfd_open(uint8_t minor, uint16_t flag);
int devfd_read(uint8_t minor, uint8_t rawflag, uint8_t flag);
int devfd_write(uint8_t minor, uint8_t rawflag, uint8_t flag);

extern void devfd_spindown(void);

extern void fd765_do_nudge_tc(void);
extern void fd765_do_recalibrate(void);
extern void fd765_do_seek(void);
extern void fd765_do_read(void);
extern void fd765_do_write(void);
extern void fd765_do_read_id(void);
extern void fd765_motor_on(void);
extern void fd765_motor_off(void);

extern uint8_t fd765_track;
extern uint8_t fd765_head;
extern uint8_t fd765_sector;
extern uint8_t fd765_status[8];
extern uint8_t* fd765_buffer;
extern uint8_t fd765_sectors;
extern uint8_t fd765_drive;
extern uint8_t fd765_is_user;

#endif /* __DEVFDC765_DOT_H__ */
