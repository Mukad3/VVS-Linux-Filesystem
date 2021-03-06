#define BLOCKSIZE 512
#define BLOCKSIZE_BITS 8
#define NUMBLOCKS 100
#define MAXNAME 15

#define MAXFILESIZE (BLOCKSIZE - 4*sizeof(int) - sizeof(uid_t) - sizeof(gid_t) - sizeof(umode_t))

#define MIN(a,b) (((a)<(b))?(a):(b))
typedef unsigned short umode_t;

#define true 1
#define false 0


struct vvsfs_inode {
  int is_empty;
  int is_directory;
  int size;
  uid_t i_uid;
  gid_t i_gid;
  umode_t i_mode;
  char data[MAXFILESIZE];
  int next_inode;
};

struct vvsfs_dir_entry {
  int size;
  char name[MAXNAME];
  int inode_number;
};
