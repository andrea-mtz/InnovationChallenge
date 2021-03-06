-- create a table
CREATE TABLE BOEING (
  id INTEGER PRIMARY KEY,
  interior INTEGER NOT NULL,                            -- interior width from inside of plane
  seatWidth INTEGER NOT NULL,                           -- individual seat width
  totseatWidth INTEGER NOT NULL,                        -- total seat width for the aisle
  pitch INTEGER NOT NULL                                -- pitch of seat (leg room)
--  length INTEGER NOT NULL                             -- length of cabin
);

-- insert values for Boeing 787-8 Dreamliner Version 2
INSERT INTO BOEING VALUES (787-8-0-1, 139.2, 20.5, 20.5, 78.0);     -- Boeing 787-8 United Polaris Business Class
INSERT INTO BOEING VALUES (787-8-0-2, 139.2, 20.5, 41.0, 78.0);     -- Boeing 787-8 United Polaris Business Class

INSERT INTO BOEING VALUES (787-8-1-2, 139.2, 19.0, 19.0, 38.0);     -- Boeing 787-8 United Premium Plus
INSERT INTO BOEING VALUES (787-8-1-3, 139.2, 19.0, 38.0, 38.0);     -- Boeing 787-8 United Premium Plus

INSERT INTO BOEING VALUES (787-8-2, 139.2, 17.3, 51.9, 34.0);      -- Boeing 787-8 United Economy Plus
INSERT INTO BOEING VALUES (787-8-3, 139.2, 17.3, 51.9, 31.0);      -- Boeing 787-8 United Economy

-- fetch some values
SELECT * FROM BOEING WHERE id = 787-8-0-1;