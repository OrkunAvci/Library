import random as rand

#	Taken from https://jsonplaceholder.typicode.com/posts. Modified.
#	Colapse this in your IDE.
items = [
  {
    "donatorId": 1,
    "id": 1,
    "name": "sunt aut facere repellat provident occaecati excepturi optio reprehenderit",
    "decription": "quia et suscipit\nsuscipit recusandae consequuntur expedita et cum\nreprehenderit molestiae ut ut quas totam\nnostrum rerum est autem sunt rem eveniet architecto"
  },
  {
    "donatorId": 1,
    "id": 2,
    "name": "qui est esse",
    "decription": "est rerum tempore vitae\nsequi sint nihil reprehenderit dolor beatae ea dolores neque\nfugiat blanditiis voluptate porro vel nihil molestiae ut reiciendis\nqui aperiam non debitis possimus qui neque nisi nulla"
  },
  {
    "donatorId": 1,
    "id": 3,
    "name": "ea molestias quasi exercitationem repellat qui ipsa sit aut",
    "decription": "et iusto sed quo iure\nvoluptatem occaecati omnis eligendi aut ad\nvoluptatem doloribus vel accusantium quis pariatur\nmolestiae porro eius odio et labore et velit aut"
  },
  {
    "donatorId": 1,
    "id": 4,
    "name": "eum et est occaecati",
    "decription": "ullam et saepe reiciendis voluptatem adipisci\nsit amet autem assumenda provident rerum culpa\nquis hic commodi nesciunt rem tenetur doloremque ipsam iure\nquis sunt voluptatem rerum illo velit"
  },
  {
    "donatorId": 1,
    "id": 5,
    "name": "nesciunt quas odio",
    "decription": "repudiandae veniam quaerat sunt sed\nalias aut fugiat sit autem sed est\nvoluptatem omnis possimus esse voluptatibus quis\nest aut tenetur dolor neque"
  },
  {
    "donatorId": 1,
    "id": 6,
    "name": "dolorem eum magni eos aperiam quia",
    "decription": "ut aspernatur corporis harum nihil quis provident sequi\nmollitia nobis aliquid molestiae\nperspiciatis et ea nemo ab reprehenderit accusantium quas\nvoluptate dolores velit et doloremque molestiae"
  },
  {
    "donatorId": 1,
    "id": 7,
    "name": "magnam facilis autem",
    "decription": "dolore placeat quibusdam ea quo vitae\nmagni quis enim qui quis quo nemo aut saepe\nquidem repellat excepturi ut quia\nsunt ut sequi eos ea sed quas"
  },
  {
    "donatorId": 1,
    "id": 8,
    "name": "dolorem dolore est ipsam",
    "decription": "dignissimos aperiam dolorem qui eum\nfacilis quibusdam animi sint suscipit qui sint possimus cum\nquaerat magni maiores excepturi\nipsam ut commodi dolor voluptatum modi aut vitae"
  },
  {
    "donatorId": 1,
    "id": 9,
    "name": "nesciunt iure omnis dolorem tempora et accusantium",
    "decription": "consectetur animi nesciunt iure dolore\nenim quia ad\nveniam autem ut quam aut nobis\net est aut quod aut provident voluptas autem voluptas"
  },
  {
    "donatorId": 1,
    "id": 10,
    "name": "optio molestias id quia eum",
    "decription": "quo et expedita modi cum officia vel magni\ndoloribus qui repudiandae\nvero nisi sit\nquos veniam quod sed accusamus veritatis error"
  },
  {
    "donatorId": 2,
    "id": 11,
    "name": "et ea vero quia laudantium autem",
    "decription": "delectus reiciendis molestiae occaecati non minima eveniet qui voluptatibus\naccusamus in eum beatae sit\nvel qui neque voluptates ut commodi qui incidunt\nut animi commodi"
  },
  {
    "donatorId": 2,
    "id": 12,
    "name": "in quibusdam tempore odit est dolorem",
    "decription": "itaque id aut magnam\npraesentium quia et ea odit et ea voluptas et\nsapiente quia nihil amet occaecati quia id voluptatem\nincidunt ea est distinctio odio"
  },
  {
    "donatorId": 2,
    "id": 13,
    "name": "dolorum ut in voluptas mollitia et saepe quo animi",
    "decription": "aut dicta possimus sint mollitia voluptas commodi quo doloremque\niste corrupti reiciendis voluptatem eius rerum\nsit cumque quod eligendi laborum minima\nperferendis recusandae assumenda consectetur porro architecto ipsum ipsam"
  },
  {
    "donatorId": 2,
    "id": 14,
    "name": "voluptatem eligendi optio",
    "decription": "fuga et accusamus dolorum perferendis illo voluptas\nnon doloremque neque facere\nad qui dolorum molestiae beatae\nsed aut voluptas totam sit illum"
  },
  {
    "donatorId": 2,
    "id": 15,
    "name": "eveniet quod temporibus",
    "decription": "reprehenderit quos placeat\nvelit minima officia dolores impedit repudiandae molestiae nam\nvoluptas recusandae quis delectus\nofficiis harum fugiat vitae"
  },
  {
    "donatorId": 2,
    "id": 16,
    "name": "sint suscipit perspiciatis velit dolorum rerum ipsa laboriosam odio",
    "decription": "suscipit nam nisi quo aperiam aut\nasperiores eos fugit maiores voluptatibus quia\nvoluptatem quis ullam qui in alias quia est\nconsequatur magni mollitia accusamus ea nisi voluptate dicta"
  },
  {
    "donatorId": 2,
    "id": 17,
    "name": "fugit voluptas sed molestias voluptatem provident",
    "decription": "eos voluptas et aut odit natus earum\naspernatur fuga molestiae ullam\ndeserunt ratione qui eos\nqui nihil ratione nemo velit ut aut id quo"
  },
  {
    "donatorId": 2,
    "id": 18,
    "name": "voluptate et itaque vero tempora molestiae",
    "decription": "eveniet quo quis\nlaborum totam consequatur non dolor\nut et est repudiandae\nest voluptatem vel debitis et magnam"
  },
  {
    "donatorId": 2,
    "id": 19,
    "name": "adipisci placeat illum aut reiciendis qui",
    "decription": "illum quis cupiditate provident sit magnam\nea sed aut omnis\nveniam maiores ullam consequatur atque\nadipisci quo iste expedita sit quos voluptas"
  },
  {
    "donatorId": 2,
    "id": 20,
    "name": "doloribus ad provident suscipit at",
    "decription": "qui consequuntur ducimus possimus quisquam amet similique\nsuscipit porro ipsam amet\neos veritatis officiis exercitationem vel fugit aut necessitatibus totam\nomnis rerum consequatur expedita quidem cumque explicabo"
  },
  {
    "donatorId": 3,
    "id": 21,
    "name": "asperiores ea ipsam voluptatibus modi minima quia sint",
    "decription": "repellat aliquid praesentium dolorem quo\nsed totam minus non itaque\nnihil labore molestiae sunt dolor eveniet hic recusandae veniam\ntempora et tenetur expedita sunt"
  },
  {
    "donatorId": 3,
    "id": 22,
    "name": "dolor sint quo a velit explicabo quia nam",
    "decription": "eos qui et ipsum ipsam suscipit aut\nsed omnis non odio\nexpedita earum mollitia molestiae aut atque rem suscipit\nnam impedit esse"
  },
  {
    "donatorId": 3,
    "id": 23,
    "name": "maxime id vitae nihil numquam",
    "decription": "veritatis unde neque eligendi\nquae quod architecto quo neque vitae\nest illo sit tempora doloremque fugit quod\net et vel beatae sequi ullam sed tenetur perspiciatis"
  },
  {
    "donatorId": 3,
    "id": 24,
    "name": "autem hic labore sunt dolores incidunt",
    "decription": "enim et ex nulla\nomnis voluptas quia qui\nvoluptatem consequatur numquam aliquam sunt\ntotam recusandae id dignissimos aut sed asperiores deserunt"
  },
  {
    "donatorId": 3,
    "id": 25,
    "name": "rem alias distinctio quo quis",
    "decription": "ullam consequatur ut\nomnis quis sit vel consequuntur\nipsa eligendi ipsum molestiae et omnis error nostrum\nmolestiae illo tempore quia et distinctio"
  },
  {
    "donatorId": 3,
    "id": 26,
    "name": "est et quae odit qui non",
    "decription": "similique esse doloribus nihil accusamus\nomnis dolorem fuga consequuntur reprehenderit fugit recusandae temporibus\nperspiciatis cum ut laudantium\nomnis aut molestiae vel vero"
  },
  {
    "donatorId": 3,
    "id": 27,
    "name": "quasi id et eos tenetur aut quo autem",
    "decription": "eum sed dolores ipsam sint possimus debitis occaecati\ndebitis qui qui et\nut placeat enim earum aut odit facilis\nconsequatur suscipit necessitatibus rerum sed inventore temporibus consequatur"
  },
  {
    "donatorId": 3,
    "id": 28,
    "name": "delectus ullam et corporis nulla voluptas sequi",
    "decription": "non et quaerat ex quae ad maiores\nmaiores recusandae totam aut blanditiis mollitia quas illo\nut voluptatibus voluptatem\nsimilique nostrum eum"
  },
  {
    "donatorId": 3,
    "id": 29,
    "name": "iusto eius quod necessitatibus culpa ea",
    "decription": "odit magnam ut saepe sed non qui\ntempora atque nihil\naccusamus illum doloribus illo dolor\neligendi repudiandae odit magni similique sed cum maiores"
  },
  {
    "donatorId": 3,
    "id": 30,
    "name": "a quo magni similique perferendis",
    "decription": "alias dolor cumque\nimpedit blanditiis non eveniet odio maxime\nblanditiis amet eius quis tempora quia autem rem\na provident perspiciatis quia"
  },
  {
    "donatorId": 4,
    "id": 31,
    "name": "ullam ut quidem id aut vel consequuntur",
    "decription": "debitis eius sed quibusdam non quis consectetur vitae\nimpedit ut qui consequatur sed aut in\nquidem sit nostrum et maiores adipisci atque\nquaerat voluptatem adipisci repudiandae"
  },
  {
    "donatorId": 4,
    "id": 32,
    "name": "doloremque illum aliquid sunt",
    "decription": "deserunt eos nobis asperiores et hic\nest debitis repellat molestiae optio\nnihil ratione ut eos beatae quibusdam distinctio maiores\nearum voluptates et aut adipisci ea maiores voluptas maxime"
  },
  {
    "donatorId": 4,
    "id": 33,
    "name": "qui explicabo molestiae dolorem",
    "decription": "rerum ut et numquam laborum odit est sit\nid qui sint in\nquasi tenetur tempore aperiam et quaerat qui in\nrerum officiis sequi cumque quod"
  },
  {
    "donatorId": 4,
    "id": 34,
    "name": "magnam ut rerum iure",
    "decription": "ea velit perferendis earum ut voluptatem voluptate itaque iusto\ntotam pariatur in\nnemo voluptatem voluptatem autem magni tempora minima in\nest distinctio qui assumenda accusamus dignissimos officia nesciunt nobis"
  },
  {
    "donatorId": 4,
    "id": 35,
    "name": "id nihil consequatur molestias animi provident",
    "decription": "nisi error delectus possimus ut eligendi vitae\nplaceat eos harum cupiditate facilis reprehenderit voluptatem beatae\nmodi ducimus quo illum voluptas eligendi\net nobis quia fugit"
  },
  {
    "donatorId": 4,
    "id": 36,
    "name": "fuga nam accusamus voluptas reiciendis itaque",
    "decription": "ad mollitia et omnis minus architecto odit\nvoluptas doloremque maxime aut non ipsa qui alias veniam\nblanditiis culpa aut quia nihil cumque facere et occaecati\nqui aspernatur quia eaque ut aperiam inventore"
  },
  {
    "donatorId": 4,
    "id": 37,
    "name": "provident vel ut sit ratione est",
    "decription": "debitis et eaque non officia sed nesciunt pariatur vel\nvoluptatem iste vero et ea\nnumquam aut expedita ipsum nulla in\nvoluptates omnis consequatur aut enim officiis in quam qui"
  },
  {
    "donatorId": 4,
    "id": 38,
    "name": "explicabo et eos deleniti nostrum ab id repellendus",
    "decription": "animi esse sit aut sit nesciunt assumenda eum voluptas\nquia voluptatibus provident quia necessitatibus ea\nrerum repudiandae quia voluptatem delectus fugit aut id quia\nratione optio eos iusto veniam iure"
  },
  {
    "donatorId": 4,
    "id": 39,
    "name": "eos dolorem iste accusantium est eaque quam",
    "decription": "corporis rerum ducimus vel eum accusantium\nmaxime aspernatur a porro possimus iste omnis\nest in deleniti asperiores fuga aut\nvoluptas sapiente vel dolore minus voluptatem incidunt ex"
  },
  {
    "donatorId": 4,
    "id": 40,
    "name": "enim quo cumque",
    "decription": "ut voluptatum aliquid illo tenetur nemo sequi quo facilis\nipsum rem optio mollitia quas\nvoluptatem eum voluptas qui\nunde omnis voluptatem iure quasi maxime voluptas nam"
  },
  {
    "donatorId": 5,
    "id": 41,
    "name": "non est facere",
    "decription": "molestias id nostrum\nexcepturi molestiae dolore omnis repellendus quaerat saepe\nconsectetur iste quaerat tenetur asperiores accusamus ex ut\nnam quidem est ducimus sunt debitis saepe"
  },
  {
    "donatorId": 5,
    "id": 42,
    "name": "commodi ullam sint et excepturi error explicabo praesentium voluptas",
    "decription": "odio fugit voluptatum ducimus earum autem est incidunt voluptatem\nodit reiciendis aliquam sunt sequi nulla dolorem\nnon facere repellendus voluptates quia\nratione harum vitae ut"
  },
  {
    "donatorId": 5,
    "id": 43,
    "name": "eligendi iste nostrum consequuntur adipisci praesentium sit beatae perferendis",
    "decription": "similique fugit est\nillum et dolorum harum et voluptate eaque quidem\nexercitationem quos nam commodi possimus cum odio nihil nulla\ndolorum exercitationem magnam ex et a et distinctio debitis"
  },
  {
    "donatorId": 5,
    "id": 44,
    "name": "optio dolor molestias sit",
    "decription": "temporibus est consectetur dolore\net libero debitis vel velit laboriosam quia\nipsum quibusdam qui itaque fuga rem aut\nea et iure quam sed maxime ut distinctio quae"
  },
  {
    "donatorId": 5,
    "id": 45,
    "name": "ut numquam possimus omnis eius suscipit laudantium iure",
    "decription": "est natus reiciendis nihil possimus aut provident\nex et dolor\nrepellat pariatur est\nnobis rerum repellendus dolorem autem"
  },
  {
    "donatorId": 5,
    "id": 46,
    "name": "aut quo modi neque nostrum ducimus",
    "decription": "voluptatem quisquam iste\nvoluptatibus natus officiis facilis dolorem\nquis quas ipsam\nvel et voluptatum in aliquid"
  },
  {
    "donatorId": 5,
    "id": 47,
    "name": "quibusdam cumque rem aut deserunt",
    "decription": "voluptatem assumenda ut qui ut cupiditate aut impedit veniam\noccaecati nemo illum voluptatem laudantium\nmolestiae beatae rerum ea iure soluta nostrum\neligendi et voluptate"
  },
  {
    "donatorId": 5,
    "id": 48,
    "name": "ut voluptatem illum ea doloribus itaque eos",
    "decription": "voluptates quo voluptatem facilis iure occaecati\nvel assumenda rerum officia et\nillum perspiciatis ab deleniti\nlaudantium repellat ad ut et autem reprehenderit"
  },
  {
    "donatorId": 5,
    "id": 49,
    "name": "laborum non sunt aut ut assumenda perspiciatis voluptas",
    "decription": "inventore ab sint\nnatus fugit id nulla sequi architecto nihil quaerat\neos tenetur in in eum veritatis non\nquibusdam officiis aspernatur cumque aut commodi aut"
  },
  {
    "donatorId": 5,
    "id": 50,
    "name": "repellendus qui recusandae incidunt voluptates tenetur qui omnis exercitationem",
    "decription": "error suscipit maxime adipisci consequuntur recusandae\nvoluptas eligendi et est et voluptates\nquia distinctio ab amet quaerat molestiae et vitae\nadipisci impedit sequi nesciunt quis consectetur"
  },
  {
    "donatorId": 6,
    "id": 51,
    "name": "soluta aliquam aperiam consequatur illo quis voluptas",
    "decription": "sunt dolores aut doloribus\ndolore doloribus voluptates tempora et\ndoloremque et quo\ncum asperiores sit consectetur dolorem"
  },
  {
    "donatorId": 6,
    "id": 52,
    "name": "qui enim et consequuntur quia animi quis voluptate quibusdam",
    "decription": "iusto est quibusdam fuga quas quaerat molestias\na enim ut sit accusamus enim\ntemporibus iusto accusantium provident architecto\nsoluta esse reprehenderit qui laborum"
  },
  {
    "donatorId": 6,
    "id": 53,
    "name": "ut quo aut ducimus alias",
    "decription": "minima harum praesentium eum rerum illo dolore\nquasi exercitationem rerum nam\nporro quis neque quo\nconsequatur minus dolor quidem veritatis sunt non explicabo similique"
  },
  {
    "donatorId": 6,
    "id": 54,
    "name": "sit asperiores ipsam eveniet odio non quia",
    "decription": "totam corporis dignissimos\nvitae dolorem ut occaecati accusamus\nex velit deserunt\net exercitationem vero incidunt corrupti mollitia"
  },
  {
    "donatorId": 6,
    "id": 55,
    "name": "sit vel voluptatem et non libero",
    "decription": "debitis excepturi ea perferendis harum libero optio\neos accusamus cum fuga ut sapiente repudiandae\net ut incidunt omnis molestiae\nnihil ut eum odit"
  },
  {
    "donatorId": 6,
    "id": 56,
    "name": "qui et at rerum necessitatibus",
    "decription": "aut est omnis dolores\nneque rerum quod ea rerum velit pariatur beatae excepturi\net provident voluptas corrupti\ncorporis harum reprehenderit dolores eligendi"
  },
  {
    "donatorId": 6,
    "id": 57,
    "name": "sed ab est est",
    "decription": "at pariatur consequuntur earum quidem\nquo est laudantium soluta voluptatem\nqui ullam et est\net cum voluptas voluptatum repellat est"
  },
  {
    "donatorId": 6,
    "id": 58,
    "name": "voluptatum itaque dolores nisi et quasi",
    "decription": "veniam voluptatum quae adipisci id\net id quia eos ad et dolorem\naliquam quo nisi sunt eos impedit error\nad similique veniam"
  },
  {
    "donatorId": 6,
    "id": 59,
    "name": "qui commodi dolor at maiores et quis id accusantium",
    "decription": "perspiciatis et quam ea autem temporibus non voluptatibus qui\nbeatae a earum officia nesciunt dolores suscipit voluptas et\nanimi doloribus cum rerum quas et magni\net hic ut ut commodi expedita sunt"
  },
  {
    "donatorId": 6,
    "id": 60,
    "name": "consequatur placeat omnis quisquam quia reprehenderit fugit veritatis facere",
    "decription": "asperiores sunt ab assumenda cumque modi velit\nqui esse omnis\nvoluptate et fuga perferendis voluptas\nillo ratione amet aut et omnis"
  },
  {
    "donatorId": 7,
    "id": 61,
    "name": "voluptatem doloribus consectetur est ut ducimus",
    "decription": "ab nemo optio odio\ndelectus tenetur corporis similique nobis repellendus rerum omnis facilis\nvero blanditiis debitis in nesciunt doloribus dicta dolores\nmagnam minus velit"
  },
  {
    "donatorId": 7,
    "id": 62,
    "name": "beatae enim quia vel",
    "decription": "enim aspernatur illo distinctio quae praesentium\nbeatae alias amet delectus qui voluptate distinctio\nodit sint accusantium autem omnis\nquo molestiae omnis ea eveniet optio"
  },
  {
    "donatorId": 7,
    "id": 63,
    "name": "voluptas blanditiis repellendus animi ducimus error sapiente et suscipit",
    "decription": "enim adipisci aspernatur nemo\nnumquam omnis facere dolorem dolor ex quis temporibus incidunt\nab delectus culpa quo reprehenderit blanditiis asperiores\naccusantium ut quam in voluptatibus voluptas ipsam dicta"
  },
  {
    "donatorId": 7,
    "id": 64,
    "name": "et fugit quas eum in in aperiam quod",
    "decription": "id velit blanditiis\neum ea voluptatem\nmolestiae sint occaecati est eos perspiciatis\nincidunt a error provident eaque aut aut qui"
  },
  {
    "donatorId": 7,
    "id": 65,
    "name": "consequatur id enim sunt et et",
    "decription": "voluptatibus ex esse\nsint explicabo est aliquid cumque adipisci fuga repellat labore\nmolestiae corrupti ex saepe at asperiores et perferendis\nnatus id esse incidunt pariatur"
  },
  {
    "donatorId": 7,
    "id": 66,
    "name": "repudiandae ea animi iusto",
    "decription": "officia veritatis tenetur vero qui itaque\nsint non ratione\nsed et ut asperiores iusto eos molestiae nostrum\nveritatis quibusdam et nemo iusto saepe"
  },
  {
    "donatorId": 7,
    "id": 67,
    "name": "aliquid eos sed fuga est maxime repellendus",
    "decription": "reprehenderit id nostrum\nvoluptas doloremque pariatur sint et accusantium quia quod aspernatur\net fugiat amet\nnon sapiente et consequatur necessitatibus molestiae"
  },
  {
    "donatorId": 7,
    "id": 68,
    "name": "odio quis facere architecto reiciendis optio",
    "decription": "magnam molestiae perferendis quisquam\nqui cum reiciendis\nquaerat animi amet hic inventore\nea quia deleniti quidem saepe porro velit"
  },
  {
    "donatorId": 7,
    "id": 69,
    "name": "fugiat quod pariatur odit minima",
    "decription": "officiis error culpa consequatur modi asperiores et\ndolorum assumenda voluptas et vel qui aut vel rerum\nvoluptatum quisquam perspiciatis quia rerum consequatur totam quas\nsequi commodi repudiandae asperiores et saepe a"
  },
  {
    "donatorId": 7,
    "id": 70,
    "name": "voluptatem laborum magni",
    "decription": "sunt repellendus quae\nest asperiores aut deleniti esse accusamus repellendus quia aut\nquia dolorem unde\neum tempora esse dolore"
  },
  {
    "donatorId": 8,
    "id": 71,
    "name": "et iusto veniam et illum aut fuga",
    "decription": "occaecati a doloribus\niste saepe consectetur placeat eum voluptate dolorem et\nqui quo quia voluptas\nrerum ut id enim velit est perferendis"
  },
  {
    "donatorId": 8,
    "id": 72,
    "name": "sint hic doloribus consequatur eos non id",
    "decription": "quam occaecati qui deleniti consectetur\nconsequatur aut facere quas exercitationem aliquam hic voluptas\nneque id sunt ut aut accusamus\nsunt consectetur expedita inventore velit"
  },
  {
    "donatorId": 8,
    "id": 73,
    "name": "consequuntur deleniti eos quia temporibus ab aliquid at",
    "decription": "voluptatem cumque tenetur consequatur expedita ipsum nemo quia explicabo\naut eum minima consequatur\ntempore cumque quae est et\net in consequuntur voluptatem voluptates aut"
  },
  {
    "donatorId": 8,
    "id": 74,
    "name": "enim unde ratione doloribus quas enim ut sit sapiente",
    "decription": "odit qui et et necessitatibus sint veniam\nmollitia amet doloremque molestiae commodi similique magnam et quam\nblanditiis est itaque\nquo et tenetur ratione occaecati molestiae tempora"
  },
  {
    "donatorId": 8,
    "id": 75,
    "name": "dignissimos eum dolor ut enim et delectus in",
    "decription": "commodi non non omnis et voluptas sit\nautem aut nobis magnam et sapiente voluptatem\net laborum repellat qui delectus facilis temporibus\nrerum amet et nemo voluptate expedita adipisci error dolorem"
  },
  {
    "donatorId": 8,
    "id": 76,
    "name": "doloremque officiis ad et non perferendis",
    "decription": "ut animi facere\ntotam iusto tempore\nmolestiae eum aut et dolorem aperiam\nquaerat recusandae totam odio"
  },
  {
    "donatorId": 8,
    "id": 77,
    "name": "necessitatibus quasi exercitationem odio",
    "decription": "modi ut in nulla repudiandae dolorum nostrum eos\naut consequatur omnis\nut incidunt est omnis iste et quam\nvoluptates sapiente aliquam asperiores nobis amet corrupti repudiandae provident"
  },
  {
    "donatorId": 8,
    "id": 78,
    "name": "quam voluptatibus rerum veritatis",
    "decription": "nobis facilis odit tempore cupiditate quia\nassumenda doloribus rerum qui ea\nillum et qui totam\naut veniam repellendus"
  },
  {
    "donatorId": 8,
    "id": 79,
    "name": "pariatur consequatur quia magnam autem omnis non amet",
    "decription": "libero accusantium et et facere incidunt sit dolorem\nnon excepturi qui quia sed laudantium\nquisquam molestiae ducimus est\nofficiis esse molestiae iste et quos"
  },
  {
    "donatorId": 8,
    "id": 80,
    "name": "labore in ex et explicabo corporis aut quas",
    "decription": "ex quod dolorem ea eum iure qui provident amet\nquia qui facere excepturi et repudiandae\nasperiores molestias provident\nminus incidunt vero fugit rerum sint sunt excepturi provident"
  },
  {
    "donatorId": 9,
    "id": 81,
    "name": "tempora rem veritatis voluptas quo dolores vero",
    "decription": "facere qui nesciunt est voluptatum voluptatem nisi\nsequi eligendi necessitatibus ea at rerum itaque\nharum non ratione velit laboriosam quis consequuntur\nex officiis minima doloremque voluptas ut aut"
  },
  {
    "donatorId": 9,
    "id": 82,
    "name": "laudantium voluptate suscipit sunt enim enim",
    "decription": "ut libero sit aut totam inventore sunt\nporro sint qui sunt molestiae\nconsequatur cupiditate qui iste ducimus adipisci\ndolor enim assumenda soluta laboriosam amet iste delectus hic"
  },
  {
    "donatorId": 9,
    "id": 83,
    "name": "odit et voluptates doloribus alias odio et",
    "decription": "est molestiae facilis quis tempora numquam nihil qui\nvoluptate sapiente consequatur est qui\nnecessitatibus autem aut ipsa aperiam modi dolore numquam\nreprehenderit eius rem quibusdam"
  },
  {
    "donatorId": 9,
    "id": 84,
    "name": "optio ipsam molestias necessitatibus occaecati facilis veritatis dolores aut",
    "decription": "sint molestiae magni a et quos\neaque et quasi\nut rerum debitis similique veniam\nrecusandae dignissimos dolor incidunt consequatur odio"
  },
  {
    "donatorId": 9,
    "id": 85,
    "name": "dolore veritatis porro provident adipisci blanditiis et sunt",
    "decription": "similique sed nisi voluptas iusto omnis\nmollitia et quo\nassumenda suscipit officia magnam sint sed tempora\nenim provident pariatur praesentium atque animi amet ratione"
  },
  {
    "donatorId": 9,
    "id": 86,
    "name": "placeat quia et porro iste",
    "decription": "quasi excepturi consequatur iste autem temporibus sed molestiae beatae\net quaerat et esse ut\nvoluptatem occaecati et vel explicabo autem\nasperiores pariatur deserunt optio"
  },
  {
    "donatorId": 9,
    "id": 87,
    "name": "nostrum quis quasi placeat",
    "decription": "eos et molestiae\nnesciunt ut a\ndolores perspiciatis repellendus repellat aliquid\nmagnam sint rem ipsum est"
  },
  {
    "donatorId": 9,
    "id": 88,
    "name": "sapiente omnis fugit eos",
    "decription": "consequatur omnis est praesentium\nducimus non iste\nneque hic deserunt\nvoluptatibus veniam cum et rerum sed"
  },
  {
    "donatorId": 9,
    "id": 89,
    "name": "sint soluta et vel magnam aut ut sed qui",
    "decription": "repellat aut aperiam totam temporibus autem et\narchitecto magnam ut\nconsequatur qui cupiditate rerum quia soluta dignissimos nihil iure\ntempore quas est"
  },
  {
    "donatorId": 9,
    "id": 90,
    "name": "ad iusto omnis odit dolor voluptatibus",
    "decription": "minus omnis soluta quia\nqui sed adipisci voluptates illum ipsam voluptatem\neligendi officia ut in\neos soluta similique molestias praesentium blanditiis"
  },
  {
    "donatorId": 10,
    "id": 91,
    "name": "aut amet sed",
    "decription": "libero voluptate eveniet aperiam sed\nsunt placeat suscipit molestias\nsimilique fugit nam natus\nexpedita consequatur consequatur dolores quia eos et placeat"
  },
  {
    "donatorId": 10,
    "id": 92,
    "name": "ratione ex tenetur perferendis",
    "decription": "aut et excepturi dicta laudantium sint rerum nihil\nlaudantium et at\na neque minima officia et similique libero et\ncommodi voluptate qui"
  },
  {
    "donatorId": 10,
    "id": 93,
    "name": "beatae soluta recusandae",
    "decription": "dolorem quibusdam ducimus consequuntur dicta aut quo laboriosam\nvoluptatem quis enim recusandae ut sed sunt\nnostrum est odit totam\nsit error sed sunt eveniet provident qui nulla"
  },
  {
    "donatorId": 10,
    "id": 94,
    "name": "qui qui voluptates illo iste minima",
    "decription": "aspernatur expedita soluta quo ab ut similique\nexpedita dolores amet\nsed temporibus distinctio magnam saepe deleniti\nomnis facilis nam ipsum natus sint similique omnis"
  },
  {
    "donatorId": 10,
    "id": 95,
    "name": "id minus libero illum nam ad officiis",
    "decription": "earum voluptatem facere provident blanditiis velit laboriosam\npariatur accusamus odio saepe\ncumque dolor qui a dicta ab doloribus consequatur omnis\ncorporis cupiditate eaque assumenda ad nesciunt"
  },
  {
    "donatorId": 10,
    "id": 96,
    "name": "quaerat velit veniam amet cupiditate aut numquam ut sequi",
    "decription": "in non odio excepturi sint eum\nlabore voluptates vitae quia qui et\ninventore itaque rerum\nveniam non exercitationem delectus aut"
  },
  {
    "donatorId": 10,
    "id": 97,
    "name": "quas fugiat ut perspiciatis vero provident",
    "decription": "eum non blanditiis soluta porro quibusdam voluptas\nvel voluptatem qui placeat dolores qui velit aut\nvel inventore aut cumque culpa explicabo aliquid at\nperspiciatis est et voluptatem dignissimos dolor itaque sit nam"
  },
  {
    "donatorId": 10,
    "id": 98,
    "name": "laboriosam dolor voluptates",
    "decription": "doloremque ex facilis sit sint culpa\nsoluta assumenda eligendi non ut eius\nsequi ducimus vel quasi\nveritatis est dolores"
  },
  {
    "donatorId": 10,
    "id": 99,
    "name": "temporibus sit alias delectus eligendi possimus magni",
    "decription": "quo deleniti praesentium dicta non quod\naut est molestias\nmolestias et officia quis nihil\nitaque dolorem quia"
  },
  {
    "donatorId": 10,
    "id": 100,
    "name": "at nam consequatur ea labore ea harum",
    "decription": "cupiditate quo est a modi nesciunt soluta\nipsa voluptas error itaque dicta in\nautem qui minus magnam et distinctio eum\naccusamus ratione error aut"
  }
]

def bid():
	print()
	alias = input("What is your alias?")
	price = int(input("Enter your bid."))
	return alias, price

for item in items:
	#	Prep
	item["mindBid"] = rand.randint(0, 1000)
	cid, id, name, desc, minBid = item.values()
	highestBidder = "No one"
	highestBid = minBid

	#	Auction
	print(f"{id}. item by {cid} with the minimum bid price of {minBid}.")
	print(name, ":", desc)
	print()
	bidder = True
	while bidder:
		alias, price = bid()
		if price > highestBid:
			highestBid = price
			highestBidder = alias
		print()
		print(f"Highest bid is {highestBid} by {highestBidder}.")
		response = input("Any bidders?('y' or 'n')")
		bidder = True if response == "y" else False

	#	Result
	print(f"{name} goes to {highestBidder} for {highestBid}.")
	print()
	print()
