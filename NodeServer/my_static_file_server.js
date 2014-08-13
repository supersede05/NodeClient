var express = require('express'),
    app = express();
                                               
var dosomething = function() {     
	return "adasd";
};

	app.get('/hello/world', function(req, res){
	  console.log(req.param('param'));
	  res.send(dosomething());
	});
	
	app.get('/hello');
	
app.listen(8080);
