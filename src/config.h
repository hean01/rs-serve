/*
 * rs-serve - (c) 2013 Niklas E. Cathor
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef RS_CONFIG_H
#define RS_CONFIG_H

// address & port to bind to
#define RS_ADDRESS NULL
extern int rs_port;
#define RS_PORT rs_port

// only used for webfinger result at the moment
#define RS_SCHEME "http"
extern char *rs_hostname;
#define RS_HOSTNAME rs_hostname
#define RS_STORAGE_API "draft-dejong-remotestorage-00"
#define RS_AUTH_METHOD "http://tools.ietf.org/html/rfc6749#section-4.2"

// static auth token
#define RS_TOKEN "static-token-for-now"

// request path to the storage-root
#define RS_STORAGE_PATH "/storage"
#define RS_STORAGE_PATH_LEN 8
// request path to the authorization handler
#define RS_AUTH_PATH "/auth"
#define RS_AUTH_PATH_LEN 5
// request path to webfinger handler
#define RS_WEBFINGER_PATH "/.well-known/webfinger"
#define RS_WEBFINGER_PATH_LEN 22

// path to the storage-root on the filesystem
#define RS_STORAGE_ROOT "/home/nil/src/rs-serve"
#define RS_STORAGE_ROOT_LEN 22

// magic database file to use (NULL indicates system default)
#define RS_MAGIC_DATABASE NULL

// CORS header values
#define RS_ALLOW_ORIGIN "*"
#define RS_ALLOW_HEADERS "Authorization, Content-Type, Content-Length, ETag"
#define RS_ALLOW_METHODS "GET, PUT, DELETE"

#endif
